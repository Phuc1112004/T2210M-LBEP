#include <stdio.h>

//bai1:
int bai1(){
	int n;
	int x=0;
	do{
	
	printf("\n nhap so nguyen duong n:");
	scanf("%d",&n);
    }
    while (n<=0 && printf(" nhap sai vui long nhap lai!"));
	while (n!=0){
		int sd=n%10;
		x=x*10+sd;
		n=n/10;
	}
	printf("so do la:%d",x);
	return 0;
}
 
 //bai2
 int bai2(){
 	int a,b,c;
 	printf("nhap a:");
 	scanf("%d",&a);
 	printf("nhap b:");
 	scanf("%d",&b);
 	printf("nhap c:");
 	scanf("%d",&c);
 	if(a>b){
 		if(a>c){
 			printf("%d la max",a);
		 } 
		 	printf("%d la max",c);
	 }else{
	 	if(b>c){
	 			printf("%d la max",b);
		 }
			printf("%d la max",c);
	 }
 }
 
 //bai3:
 int bai3(){
 	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int x0=0;
	int x1=1;
	int x2=1;
	for(int i=3;i<=n;i++){
		x0=x1;
		x1=x2;
		x2=x0+x1;
	}
	printf("so do la :%d",x2);
 }

//bai4
int bai4(){
  int n;
  long S;
  S = 0;
  int i = 1;
  printf("nhap n: ");
  scanf("%d", &n);
 
  for(int i = 1; i <=n; i++)
    {
        S = S + i;
    }
  printf("tong la %ld ", S);
}

//bai5
int bai5(){
  int n;
  float S;
  int i = 1;
  printf("nhap n: ");
  scanf("%d", &n);
 
  for(int i = 1; i <=n; i++)
    {
        S = S + (float)1/i;
    }
  printf("tong la %f ", S);
}
 void menu(){
 	int choice;
 	do{
 		printf("\n ------- menu chuong trinh -------\n");
 		printf("1.Tim so lon nhat trong 3 so nguyen\n");
 		printf("2.Tim so dao nguoc cua 1 so nguyen\n");
 		printf("3.Tim so thu n trong day Fibonaci\n");
 		printf("4.Tinh tong S=1+2+3+…+n \n");
 		printf("5.Tinh tong S=  1 + 1/2+1/3 +. . .+1/n \n");
 		printf("moi ban lua chon:");
 		scanf("%d",&choice);
 		switch(choice){
 			case 1:
 				bai1();
 				break;
		    case 2:
 				bai2();
 				break;
 			case 3:
 				bai3();
 				break;
 			case 4:
 				bai4();
 				break;
 			case 5:
 				bai5();
 				break;
		 }
	 }while (choice>0 && choice<6);
 }
int main(){
	menu();
}

