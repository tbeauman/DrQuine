#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int i = 5;
	if (i<0) return 1;
	if (strchr(__FILE__, 95))i--;
	char *s = "#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%c#include <unistd.h>%cint main(){%c	int i = %d;%c	if (i<0) return 1;%c	if (strchr(__FILE__, 95))i--;%c	char *s = %c%s%c;%c	char fn[18] = %c%c;%c	sprintf(fn, %cSully_%%d.c%c, i);%c	char command[100] = %c%c;%c	if (i > 0)%c		sprintf(command, %c/usr/bin/clang -Wall -Wextra -Werror %%s -o Sully_%%d ; ./Sully_%%d%c, fn, i, i);%c	else%c		sprintf(command, %c/usr/bin/clang -Wall -Wextra -Werror %%s -o Sully_%%d%c, fn, i);%c	FILE *fd = fopen(fn, %cw%c);%c	if (fd == NULL)%c		printf(%copen failed%c);%c	fprintf(fd, s, 10, 10, 10, 10, 10, i, 10, 10, 10, 34, s, 34, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10);%c	fclose(fd);%c	system(command);%c	return 0;%c}%c";
	char fn[18] = "";
	sprintf(fn, "Sully_%d.c", i);
	char command[100] = "";
	if (i > 0)
		sprintf(command, "/usr/bin/clang -Wall -Wextra -Werror %s -o Sully_%d ; ./Sully_%d", fn, i, i);
	else
		sprintf(command, "/usr/bin/clang -Wall -Wextra -Werror %s -o Sully_%d", fn, i);
	FILE *fd = fopen(fn, "w");
	if (fd == NULL)
		printf("open failed");
	fprintf(fd, s, 10, 10, 10, 10, 10, i, 10, 10, 10, 34, s, 34, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10);
	fclose(fd);
	system(command);
	return 0;
}
