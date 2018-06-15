#include<stdio.h>
int main()
{
	int a,b,c,d,i;
	printf("Please enter a number:a=");
	scanf("%d",&a);
	printf("Please enter a number:b=");
	scanf("%d",&b);
	printf("Please enter a number:c=");
	scanf("%d",&c);
	printf("Please enter a number:d=");
	scanf("%d",&d);
	if(b>a){
		i=b,b=a,a=i;
	}if (c>a){
		i=c,c=a,a=i;
	}if (d>a){
		i=d,d=a,a=i;
	}if (c>b){
		i=c,c=b,b=i;
	}if (d>b){
		i=d,d=b,b=i;
	}if (d>c){
		i=d,d=c,c=i;
	}
	printf("%d>%d>%d>%d",a,b,c,d);
	return 0;
}