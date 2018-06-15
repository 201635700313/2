#include <stdio.h>
  int main()
{ int i,r;
  char s1[100],s2[100];
  printf("please input string1:");
  gets(s1);
  printf("\nplease input string2:");
  gets(s2);
  i=0;
  while ((s1[i]==s2[i]) && (s1[i]!='\0'))i++;
  if (s1[i]=='\0' && s2[i]=='\0')
   r=0;
  else
      r=s1[i]-s2[i];
  printf("\nthe result is:%d\n",r);
  return 0;
 }
