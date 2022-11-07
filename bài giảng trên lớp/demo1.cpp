#include<stdio.h>
#include <iostream>
int main(){
	int x=10;
	int *p;// p la con tro
	p=&x;// luu dia chi o nho khac
	x++;
	(*p)+=5;
	//x+5;
	std::cout<<&p;
}
