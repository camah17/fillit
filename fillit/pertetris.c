//this fn will test how we can analyse each set of tetriminos when we come across each set of \n\n
#include <stdio.h>
int ft_vhashdot(char *str);
int ft_12dots(char *str);

int	ft_n(char *str)
{
	int	i;
	int	n;
	int	k;
	char *c;
	int	j;

	j = 999;
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
			while (str[i] <= n + 17) //attempted to break up this limit code and integrate some analysis per tetris, but doesn't work
			{
//				if (ft_12dots(str) == 0)
				if (ft_vhashdot(str) == 0)
					j = 0;
				i++;
			}
			k++;
		}
		i++;
	}
	return (j);
}
//issue - how to separate the string per \n\n
int	main()
{
	char a[] = "first\n\nsecond\n\n";
	char b[] = "stri\nng";
	char c[] = ".##.\n..##\n....\n....\n\n............\n\n";
    printf("%d\n", ft_n(a)); //shows 999 - correct
	printf("%d\n", ft_n(b)); //shows 999 - correct
	printf("%d\n", ft_n(c)); //shows 0 - correct - doesn't work for the 12 dots fn, as it can't separate per \n\n
	printf("*************\n");
	printf("*************\n");
	return (0);
}
