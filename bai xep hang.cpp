#include <stdio.h>
#include <math.h>

int main(){
	float diem_kiem_tra,diem_giua_ky,diem_cuoi_ky;
	printf("\n nhap diem kiem tra:");
	scanf("%f",&diem_kiem_tra);			
    printf("\n nhap diem giua ky:");
    scanf("%f",&diem_giua_ky);
    printf("\n nhap diem cuoi ky:");
	scanf("%f",&diem_cuoi_ky);
	float diem_tb=0;
	diem_tb = (diem_kiem_tra+diem_giua_ky+diem_cuoi_ky)/3 ;
	if (diem_tb>=9){
		printf("\b hang A");
	}else{
		if(diem_tb<9 && diem_tb>=7){
		
			printf("\b hang B");
		}else{
			if(diem_tb<7 && diem_tb>=5){
			
			printf("\b hang C");
		    }else{
			printf("\b hang F");
		}
	}
  }
}

