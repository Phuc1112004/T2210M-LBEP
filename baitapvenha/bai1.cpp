#include<stdio.h>
float TongTBsole(int n,int ary[]){
	int d=0,s=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2 ==1){
			s+=ary[i];
			d++;
		}
	}
	float SoTBC = 1.0*s/d;
	return SoTBC;
}
int main(){
    int n;
		printf("nhap so phan tu cua mang n:");
		scanf("%d",&n);
    int ary[n];
	for(int i=0;i<n;i++){
    	printf("a[%d]=",i);
    	scanf("%d",&ary[i]);
	}
	float SoTBC= TongTBsole(n,ary);
	printf(" tong trung binh cong cac so le la:%0.2f",SoTBC);
}




	
