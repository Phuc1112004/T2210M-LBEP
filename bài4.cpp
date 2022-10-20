#include <stdio.h>
 
int main(){
    int n, x;
    printf(" nhap so:");
    scanf("%d", &n);
    int so_dao = 0;
    while(n > 0){
        x = n % 10;
        so_dao = so_dao * 10 + x;
        n = n / 10;
    }
    printf("so dao nguoc la :%d", so_dao);
}
