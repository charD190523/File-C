


#include<stdio.h>
#include <string.h>

int main() {
  char string[50] = "Hel1lo! We1 are learn2ing abo2ut st1rtok";
  // Lấy token đầu tiên
  char * token = strtok(string, "12");
  // Lấy ra toàn bộ token
  while( token != NULL ) {
     printf( " %s\n", token ); //In mỗi token ra
     token = strtok(NULL, "12");
  }
  return 0;
}

Hel1

l1 str_tạm=1 are learn2ing abo21rtok
    -> token = Hel
l2 str_tạm= are learn2ing abo2ut st1
lo! We


lx -> str_tạm=rtok
toke=but st

lx+1 -> str_tạm=NULL
toke=rtok

lx+1 -> str_tạm=NULL
toke=NULL