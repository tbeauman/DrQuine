#include <stdio.h>
#include <stdlib.h>
/*
  commentaire genial
*/
#define LOL
#define MDR
#define F(x)int main(){FILE *fd = fopen("Grace_kid.c","w");if (fd == NULL){printf("open failed"); return 1;}fprintf(fd, x, 10,10,10,10,10,10, 10,34,34,34,34,34,34, 10, 34, x, 34, 10);fclose(fd);return 0;}
F("#include <stdio.h>%c#include <stdlib.h>%c/*%c  commentaire genial%c*/%c#define LOL%c#define MDR%c#define F(x)int main(){FILE *fd = fopen(%cGrace_kid.c%c,%cw%c);if (fd == NULL){printf(%copen failed%c); return 1;}fprintf(fd, x, 10,10,10,10,10,10, 10,34,34,34,34,34,34, 10, 34, x, 34, 10);fclose(fd);return 0;}%cF(%c%s%c)%c")
