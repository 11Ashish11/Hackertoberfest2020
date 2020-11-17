#include<stdio.h>
int main()
{
	int i,k=0,l=0,m,n;
	scanf ("%d %d",&m,&n);
	int a[m][n];
	for(k=0;k<m;k++)
	{
		for (l=0;l<n;l++)
		{
			scanf ("%d",&a[k][l]);
		}
	}
	k=0,l=0;
	while (k<m && l<n)
	{
		for (i=l;i<n;i++)
		{
			printf ("%d\t",a[k][i]);
		}
		k++;
		for (i=k;i<m;i++)
		{
			printf ("%d\t",a[i][n-1]);			
		}
		n=(n-2);
		if (k<m)
		{
			for (i=n;i>=l;--i)
			{
				printf ("%d\t",a[m-1][i]);
			}
			m=(m-2);			
		}
		if (l<n)
		{
			for (i=m;i>=k;--i)
			{
				printf ("%d\t",a[i][l]);
			}
			l++;
		}
	}
}
