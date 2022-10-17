#include <stdio.h>
#include <math.h>

int main(){
	float a;
	printf("nhap a: ");
	scanf("%f",&a);
	float b;
	printf("nhap b: ");
	scanf("%f",&b);
	float c;
	printf("nhap c: ");
	scanf("%f",&c);
		if(a+b>c && b+c>a && c+a>b){
			float cv=a+b+c ;
			float d;
		float p= cv/2 ;			
			d = sqrt(p*(p-a)*(p-b)*(p-c));
			printf ("\n ba so tren la ba canh cua tam giac");
			printf ("\n chu vi la: %f",cv);
			printf("\n dien tich la: %f",(d));
		}else{
			printf("khong la ba canh cua tam giac");
		}
	}
	
