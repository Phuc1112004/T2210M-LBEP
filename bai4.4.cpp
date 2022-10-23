#include <stdio.h>
int main(){
	int n;
	int gan=0;
	int sodau=0;
   do{
	printf("\n Nhap so nguyen duong :");
	scanf("%d",&n);	
}
   while (n<0 && printf("  sai \n hay nhap lai !"));
   gan=n;
   while(gan!=0){
	sodau=gan%10;
	gan=gan/10;
   }
   printf("so dau cua %d la: %ld",n,sodau);
}
    

