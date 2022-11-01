#include<stdio.h>
#include<string.h>
int main(){

char s[50];
    int i;
    printf("nhap chuoi:");
    scanf("%s",s);
    int NguyenAm=0;
    int KiTuKhac=0;
    while(s[i]!=NULL){
	if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
	        NguyenAm++;
	    }else{
	    	KiTuKhac++;
		}
	    i++;
    } 
	printf("chuoi co so nguyen am la : %d \n chuoi co so ki tu khac la : %d",NguyenAm,KiTuKhac);
}

