#include <stdio.h>
  int main()
{ char s1[100],s2[50];
  int i=0,j=0;
  printf("please input string1:");
  scanf("%s",s1);
  printf("please input string2:");
  scanf("%s",s2);
  while (s1[i]!='\0')
    i++;
  while(s2[j]!='\0')
    s1[i++]=s2[j++];
  s1[i]='\0';
  printf("\nThe new string is:%s\n",s1);
  return 0;
 }
