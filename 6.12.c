#include <stdio.h>
int main()
{ int j,n;
  char ch[80],tran[80];
  printf("pliease input the password:");
  gets(ch);
  printf("\nthe password%s",ch);
  j=0;
  while (ch[j]!='\0')
  { if ((ch[j]>='A') && (ch[j]<='Z'))
      tran[j]=155-ch[j];
    else if ((ch[j]>='a') && (ch[j]<='z'))
      tran[j]=219-ch[j];
    else
      tran[j]=ch[j];
    j++;
  }
  n=j;
  printf("\nthe original text:");
  for (j=0;j<n;j++)
    putchar(tran[j]);
    return 0;
 }

