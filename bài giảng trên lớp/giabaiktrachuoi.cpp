#include<stdio.h>
#include<string.h>
int main(){
	char a[100], b[50];
	printf("nhap chuoi a:");
	scanf("%s",a);
	printf("nhap chuoi b:");
	scanf("%s",b);
	int c=0;
	for(int i=0;i<strlen(a);i++){
	if(a[i]==b[0]){
		for(int j;j<strlen(b);j++){
			if(a[i+j]=b[j]){
				c++;
			}
		}
	}
	if(c==strlen(b)){
		break;
	}else{
		c=0;
	    }
	}
	if(c==strlen(b)){
		printf("chuoi b co xuat hien trong chuoi a");
	}
	else{
	printf("chuoi b khong xuat hien trong chuoi a");
	}
}
