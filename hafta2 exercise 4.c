#include<stdio.h>

int findcommondiv(int a,int b){
	
	if(b==0){
		
		return a;
	}
	
	else{
		
		return findcommondiv(b,a%b);
	}
}

int main(){
	
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	printf("common divideur is %d",findcommondiv(a,b));
}
