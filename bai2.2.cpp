#include <stdio.h>
int main(){
	int x,y,a,b;
   do{
	printf("\n Nhap a:");
	scanf("%d",&a);	
	printf("\n Nhap b:");
	scanf("%d",&b);	
	if(a<=0 || b<=0)
	printf("   sai! \n hay nhap lai!!!");
	
}
	while (a<=0 || b<=0);
	x=a;
	y=b;
    while (a!=b){
		if(a>b){
			a-=b;
		}
			b-=a;
	}
	printf("\n uoc chung lon nhat la:%d",a);
	printf("\n boi chung nho nhat la:%d",(x*y)/a);
}
	
