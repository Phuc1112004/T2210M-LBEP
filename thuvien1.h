#include<stdio.h>
#include<math.h>

//bai1
int ChuViTamGiac(int a,int b,int c){
	int x = a+b+c;
	return x;
}

//bai2
int DienTich(int a, int b,int c){
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

//bai3
int TinhTong(int n,int str,int s){
	for (;n!=0;){
		str=n%10;
		s=s+str;
		n=n/10;
	}
	return s;
}

//bai4
int UCLN(int a,int b){
	while (a*b!=0){
		if(a>b){
			a=a%b;
		}
		    b=b%a;
	}
	return a+b;
}

//bai5
int BCNN(int a, int b,int step,int kq){
         if(a>b){
         	step=a;
		 }else{
		 
		 step=b;
	    }
	    for(int i=step;i<=a*b;i++){
	    	if(i%a==0 && i%a==0){
	    		kq=i;
			}
		}
		return kq;
    }
    
//bai6
bool check_SoChinhPhuong(int n){
	for(int i=1;i<=n/2;i++){
		if(i*i==n){
		return true;
	    }
	} 
	return false;
}
//bai7
int TimSo(int s=0,int n=0){
	while(s<10000){
		n++;
		s+=n;
    }
	return n;
}

//bai8
bool check_SoGiamDan(int n){
    int gan=n;
    int ChuSoCuoi=gan%10;
    while(gan!=0){
     	int ChuSoKeCuoi=gan%10;
     	gan/=10;
	if(ChuSoCuoi>=ChuSoKeCuoi){
		return false;
	}else{
		return true;
		}
	}
}

