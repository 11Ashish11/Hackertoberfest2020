#include <stdio.h>
main()
{
int a;
a=1;
do
{
if(a<5)
  printf("%d ",a);
else
  printf("%d\n",a);
a++;
}
while(a<=10);
}
