#include<stdio.h>
int main()
{
  //khai báo biến n là số cần kiểm tra
  int n;
  //sử dụng vòng lặp do..while để yêu cầu nhập vào số nguyên dương nguyên
  //nếu n < 0 thì yêu cầu nhập lại
  do
  {
    printf("\nNhập vào số nguyên dương n: ");
    scanf("%d", &n);
    if(n < 0)
    {
      printf("\nSố n phải >= 0, vui lòng nhập lại !"); 
    }
  }while(n < 0);
 
  printf("\nSố %d có toàn các chữ số chẵn hay không?\n", n);
  //khai báo biên check để kiểm tra đúng sai
  int check = 1;
  //dùng vòng lặp while để kiểm tra nếu chữ số trong n là số chẵn thì 
  //check = 1, ngược lại không phải thì check = 0
  while(n /= 10)
  {
    if((n % 10) % 2 == 1)
    {
      check = 0;
      break;
    }
  }
  //nếu check = 1 thì đúng
  if(check == 1)
  {
    printf("Dung !");
  }
  //ngược lại là sai
  else
  {
    printf("Sai");
  }
 
  printf("\n-----------------------------------\n");
  printf("Chương trình này được đăng tại Freetuts.net");
}