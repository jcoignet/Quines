#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#define SOUL "#include <string.h>%c#include <stdlib.h>%c#include <stdio.h>%c#include <fcntl.h>%c#define SOUL %c%s%c%cint main(int ac, char **av){%cchar *name, *cmd, *src;%cint i = %d;%cif (i == 0) {return 0;}%celse if (strcmp(av[0], %c./Sully%c)) {i--;}%cac++;%casprintf(&src, %cSully_%cd.c%c, i);%casprintf(&name, %cSully_%cd%c, i);%casprintf(&cmd, %cgcc -Wall -Wextra -Werror -o %cs %cs.c ; ./%cs%c, name, name, name);%cint fd = open(src, O_CREAT | O_WRONLY);%cif (fd < 0) {return 1;}%cdprintf(fd,SOUL,10,10,10,10,34,SOUL,34,10,10,10,i,10,10,34,34,10,10,34,37,34,10,34,37,34,10,34,37,37,37,34,10,10,10,10,10,10);%csystem(cmd);%creturn 0;%c}"
int main(int ac, char **av){
char *name, *cmd, *src;
int i = 5;
if (i == 0) {return 0;}
else if (strcmp(av[0], "./Sully")) {i--;}
ac++;
asprintf(&src, "Sully_%d.c", i);
asprintf(&name, "Sully_%d", i);
asprintf(&cmd, "gcc -Wall -Wextra -Werror -o %s %s.c ; ./%s", name, name, name);
int fd = open(src, O_CREAT | O_WRONLY);
if (fd < 0) {return 1;}
dprintf(fd,SOUL,10,10,10,10,34,SOUL,34,10,10,10,i,10,10,34,34,10,10,34,37,34,10,34,37,34,10,34,37,37,37,34,10,10,10,10,10,10);
system(cmd);
return 0;
}