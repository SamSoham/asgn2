#include<stdio.h>
#include<math.h>
int main(){
	int num,firstdig,seconddig,count,a,b,swapnum;
	printf("enter the number ");
	scanf("%d",&num);
	count=log10(num);
	firstdig=num/pow(10,count);
	seconddig=num%10;
	a=firstdig*(pow(10,count));
	b=num%a;
	num=b/10;
	swapnum=seconddig*(pow(10,count))+(num*10+firstdig);
	printf("%d",swapnum);
	return 0;
	
}
