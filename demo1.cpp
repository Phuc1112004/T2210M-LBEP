#include<stdio.h>
int main()
{
  //khai b�o bi?n S = 0 d? t�nh t?ng c�c ph?n t? t? 1 d?n n l� s? nh? nh?t d? t?ng S < 10000
  int S = 0;
  int n = 0;
  // s? d?ng v�ng l?p while v?i di?u ki?n S < 10000
  while(S < 10000)
  {
    //bu?c nh?y c?a v�ng l?p l� n++
    n++;
    //c? sau m?i v�ng l?p th� t?ng S s? du?c c?ng d?n v?i n cho d?n khi S > 10000 th� tho�t kh?i v�ng l?p
    S = S + n;
  }
  //sau khi tho�t th� ta c� n v� t?ng S
  printf("\nS? nh? nh?t d? t?ng t? 1 d?n n� l?n hon 10000 l� %d",n);
  printf("\nT?ng c�c s? t? 1 d?n %d l�: %d",n, S);
}
