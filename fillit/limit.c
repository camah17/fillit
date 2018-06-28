//this fn shows how many tetriminos we have and whether we're within limit
#include <stdio.h>

int	ft_number(char *str, char *c)
{
	int	i; //counter for each element in string str
	int	n; //counter for no. of "\n\n" present in string, ie no. of tetriminos
	int	k; //counter for each element in string c
	int	j; //placeholder for output in case of error

	i = 0;
	n = 0;
	j = 999;
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] == c[k]) //inspired by strstr fn
		{
			if (str[i + 1] == c[k + 1])
				n++; //increment n when we come accross a "\n\n"
			k++;
		}
		i++;
	}
	if (n >= 1 && n <= 26)
		return (n);
	else
		return (j); //return error output value
	return (n);
}

int	ft_n(char *str) //serves same as fn above, but prototype different - might need to use this version to conform in the main.c file
{
	char	*c; //declare string c for "\n\n"
	int		i; //counter for each element in string str
	int		n; //counter for no. of "\n\n" present in string, ie no. of tetriminos
	int		k; //counter for each element in string c

	i = 0;
	n = 0;
	c = "\n\n";
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] == c[k])
		{
			if (str[i + 1] == c[k + 1])
				n++;
			k++;
		}
		i++;
	}
	if (n >= 1 && n <= 26)
		return (n);
	else
		n = 99; //return error output value
	return (n);
}

int	ft_vnumber(char *str, char *c) //to verify that the limits are adhered to
{
	int	n; //placecholder for output value

	n = 0;
	if (ft_number(str, c) >= 1 && ft_number(str, c) <= 26)
		return (n);
	else
		n = 1; //return error output value
	return (n);
}

int	ft_vn(char *str) //serves same as fn above, but prototype different
{
	int	n; //placecholder for output value

	n = 0;
	if (ft_n(str) >= 1 && ft_n(str) <= 26)
		return (n);
	else
		n = 1; //return error output value
	return (n);
}

int	main()
{
	char a[] = "stri\nng\n";
	char b[] = "first\n\nsecond\n\n"; //not sure if correct form terminates with \n or \n\n
	char c[] = "\n\n";

	printf("%s", b);
/*	printf("%d\n", ft_number(a, c)); //shows 999 - correct
	printf("%d\n", ft_number(b, c)); //shows 2 - correct
	printf("%d\n", ft_vnumber(a, c)); //shows 1 - correct
	printf("%d\n", ft_vnumber(b, c)); //shows 0 - correct
	printf("************\n");
	printf("%d\n", ft_n(a)); //shows 99 - correct
	printf("%d\n", ft_n(b)); //shows 2 - correct
	printf("%d\n", ft_vn(a)); //shows 1 - correct
	printf("%d\n", ft_vn(b)); //shows 0 - correct
*/	return (0);
}
