#include<stdio.h>
int main (){
	int a[10],i,odd=0,even=0;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0){
			even+=a[i];
		}else{
			odd+=a[i];
		}
	}
	printf("sum of odd no. %d\n",odd);
	printf("sum of even no. %d",even);
	return 0;
}
