//this file tests whether the form is a 4x4 //code here now redundant as it has been replaced with fn newline below.
/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is19(char *str) //fn confirming whether string is 19 chars, making it 20 for \0 doesn't work
{
	int	n; //placeholder for stringlen

	n = ft_strlen(str);
	if (n == 20) //could use this logic for a 4 char x 4 line basis, so on a line by line basis
		return (0);
	else
		return (1);
}*/

int	ft_newline(char *str) //fn confirming if there's a new line after each line and when there are multiple tetriminos
{
	int	j; //counter for every 5th element in string

	j = 4;
	if (str[j + 1] == '\0')
		return (1);
	while (str[j + 1] != '\0')
	{
		if (str[j] == '\n')
		{
		   j = j + 5;
		   if (str[j + 1] == '\n')
			   j++;
		}
		else
			return (1);
	}
	return (0);
}

int	ft_v4x4(char *str) //fn verifies the conditions above. Returns 1 if it doesn't
{
	int	n; //placeholder for output value

	n = 0;
	if (ft_newline(str) == 0/* && ft_is19(str) == 0*/)
		return (n);
	else
		n = 1;
	return (n);
}

#include <stdio.h>

int	main()
{
	char a[] = ".##.\n..##\n....\n....\n\n....\n....\n....\n....\n\0";
	char b[] = "....#\n....\n....\n";

//	printf("strlen of a:%d\n", ft_strlen(a)); //displays 19 - correct
//	printf("zero means that there's 19 chars, outcome:%d\n", ft_is19(a)); //displays 0 - correct
	printf("zero means that there's a newline per line, outcome:%d\n", ft_newline(a)); //displays 0 - correct
	printf("***************\n");

//	printf("strlen of b:%d\n", ft_strlen(b)); //displays 4 - correct
//	printf("zero means that there's 19 chars, outcome:%d\n", ft_is19(b)); //displays 1 - correct
	printf("zero means that there's a newline per line, outcome:%d\n", ft_newline(b));//displays 1 - correct
	
	printf("***************\n");
	printf("zero means that ft_newline and ft_is19 of string A is satisfied. Outcome:%d\n", ft_v4x4(a)); //displays 0 - correct
	printf("zero means that ft_newline and ft_1s19 of string B is satisfied. Outcome:%d\n", ft_v4x4(b)); //displays 1 - correct
	return (0);
}
