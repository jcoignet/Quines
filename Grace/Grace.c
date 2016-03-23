/*
	Some info
*/
#include <stdio.h>
#include <fcntl.h>
#define FILENAME "./Grace_kid.c"
#define SOUL "/*%c%cSome info%c*/%c#include <stdio.h>%c#include <fcntl.h>%c#define FILENAME %c%s%c%c#define SOUL %c%s%c%c#define FT()int main(){int fd = open(FILENAME, O_CREAT | O_WRONLY);if (fd < 0) {return 1;}dprintf(fd, SOUL,10,9,10,10,10,10,34,FILENAME,34,10,34,SOUL,34,10,10);return 0;}%cFT()"
#define FT()int main(){int fd = open(FILENAME, O_CREAT | O_WRONLY);if (fd < 0) {return 1;}dprintf(fd, SOUL,10,9,10,10,10,10,34,FILENAME,34,10,34,SOUL,34,10,10);return 0;}
FT()