#include <stdio.h>
int main(){
	int n;
	long s=0 ; 
	int i=0;
		printf("nhap n:");
		scanf("%d",&n);
    for(int i;i<=n;i++){
    	if(n%i==0){
    		printf("\n uoc cua %d là:%d",n,i);
    		s=s+i;
		}
	}
	printf("\n tong cac uoc la:%ld",s);
}

	
