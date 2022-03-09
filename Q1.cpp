#include<string.h>
#include<stdio.h>
int main(){
	int l,k,i,m;
	char str1[50],str2[50],str[50];
	printf("enter 1st string:");
	scanf("%s",&str1);
	printf("enter 2nd string:");
	scanf("%s",&str2);
	strcat(str1,str2);
	l=strlen(str1);
	k=0;
	m=l-1;
	for(i=k;i<m;i++){
		str[i]=str1[i];
		str1[i]=str1[m];
		str1[m]=str[i];
		m--;
	}
	printf("%s",str1);
	return 0;
}
