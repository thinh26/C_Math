#include <stdio.h>

int main()
{
	//Nhap loai phep tinh va hai so can tinh:
  int a,b;
	char ch;
  	printf("Nhap phep tinh can lam (+ - * /): ");
	scanf("%c",&ch);
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
    //Cac truong hop:
	switch (ch)
    {
      //Khi phep tinh la phep cong:
        case '+': printf("%d cong %d = %d",a,b,a+b); break;
      //Khi phep tinh la phep tru:
        case '-': printf("%d tru %d = %d",a,b,a-b); break;
      //Khi phep tinh la phep nhan:
        case '*': printf("%d nhan %d = %d",a,b,a*b); break;
      //Khi phep tinh la phep chia:
        case '/': printf("%d chia %d = %d",a,b,a/b); break;
      //Khi nhap sai phep tinh:
        default: printf("Khong hop le !");
     }
}
