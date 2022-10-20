#include <stdio.h>
int main(){
    int n;
	int i=0;
	int ketqua =0;
       printf("nhap so nguyen:");
	    scanf("%d",&n);
	while (i<n){
		if( i%2==0 && i%3==0)
		{
			ketqua =i;
		}
		++i;
	}
		printf("so do la:%d",ketqua);
}

