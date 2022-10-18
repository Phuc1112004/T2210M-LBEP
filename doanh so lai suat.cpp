#include <stdio.h>
#include <math.h>

int main(){
	float doanh_so;
	float hoa_hong;
	printf("nhap doanh so: ",doanh_so);
	scanf("%f",&doanh_so);
	if (doanh_so <= 100){
		hoa_hong = doanh_so * 5/100;
		printf("\n tong doanh so là: %f",doanh_so);
		printf("\n thi hoa hong la:%f",hoa_hong);
	}else{
		if(doanh_so<=300){
			hoa_hong = doanh_so * 10/100 ;
			printf("\n tong doanh so là: %f",doanh_so);
		    printf("\n thi hoa hong la:%f",hoa_hong);
	         }else{
	        hoa_hong = doanh_so * 20/100 ;
	        printf("\n doanh so la:%f",doanh_so);
	        printf("\n thi hoa hong la: %f",hoa_hong);
		}
	}
}

