//this file tests per tetriminos if it conforms to the correct form
//will use the fn from the limit.c file, specifying how many sets of tetriminos there are
#include <stdio.h>
int ft_vhashdot(char *str);
int	ft_12dots(char *str);
int	ft_n(char *str) //fn counts no. of "\n\n", ie no. of tetriminos
{
	char	*c; //declare string c for "\n\n"
	int		i; //counter for each element in string str
	int		n; //counter for no. of "\n\n" present in string, ie no. of tetriminos
	int		k; //counter for each element in string c

	c = "\n\n";
	i = 0;
	n = 0;
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
		n = 999;
	return (n);
}

int	ft_test(char *str) //fn tests whether no. of tetriminos is within limit, and shows no. if within limit
{
	int	n; //placeholder for output value

	n = ft_n(str);
	if (n >= 1 && n <= 26)
		return (n);
	else
		n = 999; //return error output value
	return (n);
}
//might need to overhaul the 4x4 and quantities functions, or use some kind of string split function to split per \n\n
int	ft_per(char *str)
{//might need a variable for the string so that until it reaches the 1st/2nd/26th set of \n\n
	int	n; //placeholder for no. of tetriminos present
	int	j; //placeholder for output value

	n = ft_n(str);
	j = 0;
	if (n >= 1 && n <= 26)
	{
		while (n <= 26)
		{
			if (ft_12dots(str) == 0) //this doesn't work, need this to recognise it on a per \n\n basis
//			if (ft_vhashdot(str) == 0) //this works as it recognises when a foreign character is present
				return (j);
			else
				j = 98;
			n++;
		}
	}
	else
		j = 97;
	return (j);
}
//issues, we need to increment n, after each set of \n\n we come across in string, trying to find a similar libft fn
//could use notion of len and decrementing, thus working backwards, which is worth experimenting with
//or could alter the striter/i function to apply a certain function to each element of string, in our case, apply it per \n\n
//consider strchr fn too - meaning we might need to overhaul and consider on a line by line basis for each tetriminos
//consider a count if fn too
int	ft_testper(char *str)
{
	int	n;
	int	j;
	int	i;

	i = 0;
	n = ft_n(str);
	j = 0;
	while (str[i] != '\0')
	{
		if (n >= 1 && n <= 26)
		{
			while (n <= 26)
			{
				if (ft_vhashdot(str) == 0)
//				if (ft_12dots(str) == 0)
					return (j);
				else //this doesn't work
					j = 96;
				n++;
			}
		}
		else
			j = 95;
		i++;
	}
	return (j);
}

int	main()
{
	char a[] = "first\n\nsecond\n\n";
	char b[] = "stri\nng";
	char c[] = ".##.\n..##\n....\n....\n\n............\n\n";

	printf("%d\n", ft_test(a)); //shows 2 - correct
	printf("%d\n", ft_test(b)); //shhows 999 - correct
	printf("*************\n");
	printf("%d\n", ft_per(a)); //shows 98 - correct
	printf("%d\n", ft_per(c)); //shows 98
	printf("*************\n");
	printf("%d\n", ft_testper(a)); //shows 95
	printf("%d\n", ft_testper(c)); //shows 0 - correct
	printf("*************\n");
	printf("%d\n", ft_testper(c)); //
	return (0);
}
