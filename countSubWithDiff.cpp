
// Problem: count the number of subset pairs present 
//         in the given array whose difference is 
//         equal to the given difference
#include<iostream>
#include<math.h>
using namespace std ;

int countSubsets(int arr[], int n, int i, int sum){
    if(sum==0)return 1;
    if(sum<0||i>=n)return 0;
    return (countSubsets(arr, n, i+1, sum-arr[i])+countSubsets(arr, n, i+1, sum));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,diff;
        cin>>n>>diff;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int ans = 0;
        double sum1 = (sum+diff)/2;
        if(ceil(sum1)==floor(sum1)){
            ans = countSubsets(arr,n,0,ceil(sum1));
        }
        cout<<ans<<endl;
    }
}