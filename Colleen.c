#include <stdio.h>
/*
	ok
*/
int main(){
/*
	win
*/
	char *s = "#include <stdio.h>%c%c*%c%cok%c*%c%cint main(){%c%c*%c%cwin%c*%c%c%cchar *s = %c%s%c;%c%cprintf(s,10,47,10,9,10,47,10,10,47,10,9,10,47,10,9,34,s,34,10,9,10);%c}";
	printf(s,10,47,10,9,10,47,10,10,47,10,9,10,47,10,9,34,s,34,10,9,10);
}