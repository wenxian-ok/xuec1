#include<stdio.h>
//��һ���Ǹ�������λ���ֵĺ� 
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
	printf("������һ���Ǹ�������");
	scanf("%d",&m);
	sum=DigitSum(m);
	printf("%d",sum);
	return 0;
}
