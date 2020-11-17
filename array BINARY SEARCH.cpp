#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5],val,i,high,mid,low,flag=0;
	printf("\n Enter values");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
		printf("\n Enter element to search");
		scanf("%d",&val);
		high=4; //position of last element
		low=0; //position of first element
		while(low<=high)
		{
			mid=(low+high)/2;
			if(arr[mid]==val)
			{
				flag=1;
				break;
			}
			if(val>arr[mid])
			low=mid+1;
			if(val<arr[mid])
			high=mid-1;
		}
		if(flag==1)
	printf("\n element found");
	else
	printf("\n element not found");
	getch();
}
