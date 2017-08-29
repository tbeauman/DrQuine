#include <stdio.h>
int f(){return 0;}
/*
  com1
*/
int main(){
	f();
	char *s="#include <stdio.h>%cint f(){return 0;}%c/*%c  com1%c*/%cint main(){%c	f();%c	char *s=%c%s%c;%c/*%c  com2%c*/%c	printf(s,10,10,10,10,10,10,10, 34, s, 34,10,10,10,10,10,10,10);%c	return(0);%c}%c";
/*
  com2
*/
	printf(s,10,10,10,10,10,10,10, 34, s, 34,10,10,10,10,10,10,10);
	return(0);
}
