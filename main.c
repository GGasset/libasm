
#include "stdio.h"
#include "string.h"

extern size_t ft_strlen(char *s);

int main()
{
	printf("Testing strlen...");
	char *str = "Hola caracola";
	printf("\"%s\": real len: %lu | calculated len: %lu\n", str, strlen(str), ft_strlen(str));

	str = "";
	printf("\"%s\": real len: %lu | calculated len: %lu\n", str, strlen(str), ft_strlen(str));

	str = "______________________________________________________________________________________________________________________________________________________________________________";
	printf("\"%s\": real len: %lu | calculated len: %lu\n", str, strlen(str), ft_strlen(str));
}
