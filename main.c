
#include "stdio.h"
#include "string.h"

extern size_t ft_strlen(char *s);

extern int ft_strcmp(char *a, char *b);

int main()
{
	printf("Testing strlen...\n");
	char *str = "Hola caracola";
	printf("\"%s\": real len: %lu | calculated len: %lu\n", str, strlen(str), ft_strlen(str));

	str = "";
	printf("\"%s\": real len: %lu | calculated len: %lu\n", str, strlen(str), ft_strlen(str));

	str = 0;
	printf("Null string length: %lu\n", ft_strlen(0));


	printf("\nTesting strcmp...\n");

	str = "abc";
	char *str1 = "abc";
	printf("\"%s\" - \"%s\": real strcmp: %i | ft_strcmp: %i\n", str, str1, strcmp(str, str1), ft_strcmp(str, str1));

	str = "";
	str1 = "";
	printf("\"%s\" - \"%s\": real strcmp: %i | ft_strcmp: %i\n", str, str1, strcmp(str, str1), ft_strcmp(str, str1));

	str = "abc";
	str1 = "abd";
	printf("\"%s\" - \"%s\": real strcmp: %i | ft_strcmp: %i\n", str, str1, strcmp(str, str1), ft_strcmp(str, str1));

	str = "abd";
	str1 = "abc";
	printf("\"%s\" - \"%s\": real strcmp: %i | ft_strcmp: %i\n", str, str1, strcmp(str, str1), ft_strcmp(str, str1));

	str = 0;
	str1 = "abc";
	ft_strcmp(str, str1);
	printf("\"%s\" - \"%s\": ft_strcmp: %i\n", str, str1, ft_strcmp(str, str1));

	str = "abd";
	str1 = 0;
	printf("\"%s\" - \"%s\": ft_strcmp: %i\n", str, str1, ft_strcmp(str, str1));

	str = "a";
	str1 = "abc";
	printf("\"%s\" - \"%s\": real strcmp: %i | ft_strcmp: %i\n", str, str1, strcmp(str, str1), ft_strcmp(str, str1));

	str = "abd";
	str1 = "a";
	printf("\"%s\" - \"%s\": real strcmp: %i | ft_strcmp: %i\n", str, str1, strcmp(str, str1), ft_strcmp(str, str1));
}
