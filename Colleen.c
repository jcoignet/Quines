#include <stdio.h>
/*
	ok
*/
int main(){
/*
	win
*/
	char *s = "#include <stdio.h>%c%c%c%c%cok%c%c%c%cint main(){%c%c%c%c%cwin%c%c%c%cchar *s = %c%s%c;printf(s,10,47,42,10,9,10,42,47,10,10,47,42,10,9,10,42,47,10,34,9,34,10);%c}";
	printf(s, 10, 47, 42, 10, 9, 10, 42, 47, 10, 10, 47, 42, 10, 9, 10, 42, 47, 10, 34, 9, 34, 10);
}