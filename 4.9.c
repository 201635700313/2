#include <stdio.h>
#include <math.h>
int main()
{
  int abcde,a,b,c,d,e,p;     
  printf("Please enter a positive integer with no more than 5 bits:");
  scanf("%d",&abcde);
  if (abcde>9999)
       p=5;
  else  if (abcde>999)
       p=4;
  else  if (abcde>99)
       p=3;
  else  if (abcde>9)
       p=2;
  else if (abcde>0)
       p=1;
  printf("digit of the number is:%d\n",p);
  a=abcde/10000;
  b=(abcde-a*10000)/1000;
  c=(abcde-a*10000-b*1000)/100;
  d=(abcde-a*10000-b*1000-c*100)/10;
  e=(abcde-a*10000-b*1000-c*100-d*10);
  switch(p)
    {case 5:
	 printf("Each number is:%d,%d,%d,%d,%d\n",a,b,c,d,e);
     printf("The anti-ordinal number of this number is:%d%d%d%d%d\n",e,d,c,b,a);
     break;
     case 4:
	 printf("Each number is:%d,%d,%d,%d\n",b,c,d,e);
     printf("The anti-ordinal number of this number is:%d%d%d%d\n",e,d,c,b);
     break;
     case 3:
	 printf("Each number is:%d,%d,%d\n",c,d,e);
     printf("The anti-ordinal number of this number is:%d%d%d\n",e,d,c);
     break;
     case 2:
	 printf("Each number is:%d,%d\n",d,e);
     printf("The anti-ordinal number of this number is:%d%d\n",e,d);
     break;
     case 1:
	 printf("Each number is:%d\n",e);
     printf("The anti-ordinal number of this number is:%d\n",e);
     break;
      }
  return 0;
 }