#include<stdio.h>
#include<string.h>
// cach1:
void chuyeninhoa(char []){
		for(int i=0;i< strlen(s);i++){
		if(s[i]>=97 && s[i]<=122)
			s[i]-=32;
	   }
	printf("chuoi sau khi chuyen la : %s",s);
}     // viet kieu ham



	
//cach2:
int main(){
	char s[50];
	printf("Nhap chuoi bat ki:");
	scanf("%s",s);
	for(int i=0;i< strlen(s);i++){
		if(s[i]>=97 && s[i]<=122)
			s[i]-=32;
	   }
	printf("chuoi sau khi chuyen la : %s",s);
}  // chay chuong trinh
