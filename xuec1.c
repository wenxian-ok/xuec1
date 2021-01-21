#include<stdio.h>
//求一个非负整数各位数字的和 
int DigitSum(int m){
	int ret=0;
	while(m){
		int a=0;
		
		a=m%10;
		m=m/10;
		ret+=a;
		DigitSum(m);
	}
	return ret;
}
int main(){
	int m=0;
	int sum=0;
	printf("请输入一个非负整数：");
	scanf("%d",&m);
	sum=DigitSum(m);
	printf("%d",sum);
	return 0;
}
