#ifndef _MAIN_H_
#define _MAIN_H_

char *_memset(char *s, char b, unsigned int n);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
void set_string(char **s, char *to);
#endif
