#include<stdio.h>
int main()
{
  //khai báo bi?n S = 0 d? tính t?ng các ph?n t? t? 1 d?n n là s? nh? nh?t d? t?ng S < 10000
  int S = 0;
  int n = 0;
  // s? d?ng vòng l?p while v?i di?u ki?n S < 10000
  while(S < 10000)
  {
    //bu?c nh?y c?a vòng l?p là n++
    n++;
    //c? sau m?i vòng l?p thì t?ng S s? du?c c?ng d?n v?i n cho d?n khi S > 10000 thì thoát kh?i vòng l?p
    S = S + n;
  }
  //sau khi thoát thì ta có n và t?ng S
  printf("\nS? nh? nh?t d? t?ng t? 1 d?n nó l?n hon 10000 là %d",n);
  printf("\nT?ng các s? t? 1 d?n %d là: %d",n, S);
}
