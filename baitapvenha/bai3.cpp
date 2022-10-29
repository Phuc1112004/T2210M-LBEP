#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang:");
    scanf ("%d",&n);
    int ary[n];
	for(int i = 0; i< n; i++){
		printf("a[%d] =",i);
		scanf("%d", &ary[i]);
	}    
    int x;
    printf("nhap x: ");
    scanf("%d",&x);
    for (int i=0; i<n; i++){
    	if(ary[i]==x){
    		printf ("co trong mang");
    		return 0;
		}
	}
	printf(" khong co trong mang");
}


