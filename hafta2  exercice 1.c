#include<stdio.h>

int sum(int n){
	
	if(n == 0){
		
		return 0;
	}
	
	else return n + sum (n - 1);
	
}

int main(){
	
	int num;
	printf("enter a number");
	scanf("%d",&num);
	printf("sum is %d",sum(num));
	return 0;
}
