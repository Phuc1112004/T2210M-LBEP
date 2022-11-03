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
	int maxtong = 0;
	int tong = 0;
	for (int i = 0; i < n; i++){
		if (mang[i] => 0){
			tong+=mang[i];
			if(tong>maxtong)
				maxtong=tong;
		}else{
			tong = 0;
		}
	}
	printf("tong so duong lien tiep lon nhat la:%d", maxtong);
	return 0;
}
