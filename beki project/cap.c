#include<stdio.h>
//#include "main.h"
/**
 * cap_string -capitalize each word of a string
 *
 * @str: parameter
 * Return: return capitalized string
 */
int main(void)
{
    int i=0;
    char s;
    printf("enter the value of strin:  ");
scanf("%s",s);
 if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0') /* iterate through string */
	{
		/* if lowercase and prior char is separator, capitalize*/
		if ((s[i] >= 'a' && s[i] <= 'z')
			&& (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
			|| s[i - 1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
 printf("your string after capitalized: %s\n",s);
	return (0);

}
