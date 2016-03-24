#include <stdio.h>
/*
	ok
*/
void lol(){
}
int main(){
/*
	win
*/
	lol();
	char *s = "#include <stdio.h>%c%c*%c%cok%c*%c%cvoid lol(){%c}%cint main(){%c%c*%c%cwin%c*%c%c%clol();%c%cchar *s = %c%s%c;%c%cprintf(s,10,47,10,9,10,47,10,10,10,10,47,10,9,10,47,10,9,10,9,34,s,34,10,9,10);%c}";
	printf(s,10,47,10,9,10,47,10,10,10,10,47,10,9,10,47,10,9,10,9,34,s,34,10,9,10);
}