#include <stdio.h>
int main(){
	
	int n;
	int t;
	int max =0 ;
	do
	{
	printf("\n Nhap so nguyen duong :");
	scanf("%d",&n);	
}
    while(n<0 && printf("nhap sai vui long nhap lai!"));
    while (n > 0) {
        t = n % 10;
        if (t > max)
		max = t;
        n /= 10;
    }
    printf("chu so lon nhat trong so do la:%d ",max);
}
    

