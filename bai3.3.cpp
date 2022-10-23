#include<stdio.h>
int main(){
	int n;
	int sotachra;
	int s=0;
	do{
	printf("\n Nhap so:");
	scanf("%d",&n);
}
    while (n<=0 && printf("\n Loi !!!") && printf("\n Vui long nhap lai!"));
	while (n!=0){
		sotachra=n%10;
		s+=sotachra;
		n/=10;
		
	}
	printf("tong cua cac chu so do la: %d",s);
}
