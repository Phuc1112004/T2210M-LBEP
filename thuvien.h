#include <stdio.h>
int timsodaonguoc(int n){
	int x =0;
	while (n!=0){
		int sd =n%10;
		x=x*10+sd;
		n/=10;
		
	}
	return x;
}

void showmenu(){
	printf("1.pho ga\n");
	printf("2.pho bo\n");
	printf("3.pho ca\n");
	printf("4.pho lon\n");
}

bool ktsoduong(int n){
	if(n>0){
		return true;
	}
	return false;
}

bool ktsnt(int n){
	if(n<2){
		return false;
	}
	if(n<4){
		return true;
	}
	int i=2;
	while(i<n/2){
		if(n%i==0){
		return false;
	}
	i++;
    }
       return true;
}
