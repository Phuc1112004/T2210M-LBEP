#include<stdio.h>
int main(){
    int n;
    int max=1;
    do{   
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n <= 0)
        {
            printf("\n nhap lai di sai roi ngu vai !");
        }
    }
	 while(n <= 0);
	 
    for(int i=1;i<=n-1;i++)
	{
        if(N%i==0 && i%2==1){
            if(i>max){
                max=i;
            }
        } 
    }
    printf("Uoc so le lon nhat la:%d \n",max);
}
