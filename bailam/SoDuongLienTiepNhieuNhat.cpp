#include <stdio.h>
int main(){
	int n;
    printf("nhap so phan tu cua mang:");
    scanf("%d",&n);
    int mang[n];
    for(int i;i<n;i++){
    printf("mang[%d]=",i);
    scanf("%d",&mang[i]);
  	}
	int dem = 0;
	int kyluc = 0;
	for (int i = 0; i < n; i++){
		if (mang[i] > 0){
			dem++;
			if (dem > kyluc){ 
				kyluc = dem;
			}
		}else{
			dem = 0;
		}
	}
	printf("Co nhieu nhat %i so duong lien tiep canh nhau.", kyluc);
	return 0;
}
