#include<stdio.h>
int main(){
	int a[10];
	printf("nhap 10 so nguyen:\n");
	for(int i=0;i<10;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n chuoi theo dao nguoc la:\n ");
	for(int i=10-1;i>=0;i--){
	printf("%d\n ",a[i]);
	}
}
