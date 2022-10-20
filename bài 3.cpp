#include <stdio.h>
int main(){
    int n;
	int i=2;
	int kiemtra =1;
       printf("nhap so nguyen:");
	    scanf("%d",&n);
	   if(n<2){
	   	printf("%d khong la so nguyen to",n);
	   } else{
	   while (i<n){
	    if(n % i == 0){
            kiemtra =0;
            break;
        } 
        i++;    
	   }	   
	   if(kiemtra ==0)
	   {
	   	printf("%d ko la so nguyen to",n);
	   }
	   else{
	   	printf("%d la so nguyen to",n);
	   }
	}
}
