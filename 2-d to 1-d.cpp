#include<stdio.h>
void display (int b[][4],int r, int c);
main()
{

   int a[4][4],r1,c1,i,j;
    printf ("enter total no. of row and coloumn");
    scanf ("%d %d",&r1,&c1);
     printf ("enter 2-d array");
     for (i=0;i<r1;i++)
     {
	   for (j=0;j<c1;j++)
	   {
	    	scanf ("%d",&a[i][j]);
	    }
    }
    display (a,r1,c1);
}
void display (int b[][4],int r,int c)
{
	int i,j;
	for (i=0;i<r;i++)
     {
	   for (j=0;j<c;j++)
	   {
	    	printf ("%d \t",b[i][j]);
	    }
	    printf ("\n");
    }
}
