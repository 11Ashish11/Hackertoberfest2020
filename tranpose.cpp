#include <stdio.h>
main()
{
	int a[3][3]={5,9,3,6,9,0,7,5,6},i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("%d \t",a[j][i]);
	    }
	    printf ("\n");
	    
	}	
}
