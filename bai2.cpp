#include <stdio.h>
int tinhTong(int a,int b){
	int c = a+b;
	return c; 
} 
//viet ham tim so lon hon trong 2 so nguyen 
int max(int a,int b,int c){ 
	if(a>b){
		if(a>c){
		return a; 
	}else{
	return c;
}
    	if(b>c){
    	return b;	
		}
		return c;
	}
}

 int main(){
 	int a,b,c;
 	printf("nhap a:");
 	scanf("%d",&a);
 	printf("nhap b:");
 	scanf("%d",&b);
 	printf("nhap c:");
 	scanf("%d",&c);
 
 }
 
