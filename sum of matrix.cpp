#include <stdio.h>
main()
{
	int a[2][2],i,j,b[2][2],c[2][2];
	printf ("enter A matrix \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf ("%d",&a[i][j]);
		}
	}
	printf ("enter B matrix \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf ("%d",&b[i][j]);
		}
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			c[i][j]=0;
			c[i][j]=c[i][j]+a[i][j]+b[i][j];
		}
	}
	printf ("display c[i][j] \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf ("%d ",c[i][j]);
		}
		printf ("\n");
	} 
}
