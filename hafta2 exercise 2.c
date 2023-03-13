#include<stdio.h>

int findlargest(int array[],int n){
	
	if(n==1){
		
		return array[0];
	}
	
	else{
		
		int max = findlargest( array, n-1);
		if(array[n-1]>max){
			
			max = array[n-1];
		}
		else return max;
	}
}

int main(){
	
	int n;int i;
	int array[n];
	printf("array element sayisi giriniz ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		
		scanf("%d",&array[i]);
	}
	
	printf("arrayin en buyuk element %d",findlargest(array,n));
}
