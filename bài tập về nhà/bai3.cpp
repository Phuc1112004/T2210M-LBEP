#include<stdio.h>
#include<string.h>
int main(){
	char a[100], b[100];
	printf("nhap chuoi a:");
	scanf("%s",a);
	printf("nhap chuoi b:");
	scanf("%s",b);
	int found=0;
    for(int i=0;i<= b[100];i++){
    	if(strchr(a,b[i])){
    		found=1;
        }else{
        	found=0;
        	break;
		}
	}
	if(found==1){
		printf("chuoi b co xuat hien trong chuoi a");
	}
	else{
	printf("chuoi b khong xuat hien trong chuoi a");
	}
}
