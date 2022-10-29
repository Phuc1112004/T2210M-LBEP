#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang n:");
	scanf("%d",&n);
	
	int ary[n];
	for(int i=0;i<n;i++){
	printf("a[%d]=",i);
	scanf("%d",&ary[i]);
    }
	for(int i=n-1;i<=n;i--){
	if(ary[i]%2==1){
		printf("so le cuoi cung cua mang la:%d",ary[i]);
		break;
        }
    }
}
