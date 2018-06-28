#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int ft_vhashdot(char *str);
int ft_12dots(char *str);

int	ft_n(char *str) //this fn works out no. of times it comes across \n\n
{
	int	i;
	int	k;
	int	n;
	char	*c;

	i = 0;
	n = 0;
	c = "**";
//	c = "\n\n";
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
	return (n);
}

char	*ft_copy(char *str)
{
	char	*c;
//	char	c;
	char	*tab;
	int		len;
	int		i;
//	int		j;

//	c = '\n';
//	c = '*';
//	j = 0;
	i = 0;
	len = 0;
	c = "**";
	while (str[len] != '\0' && str[len] != 42)// && str[len + 1] != 42)
		len++;
	tab = (char*)malloc(sizeof(*tab) * (len + 1));
	if (tab)
	{
//		while (i < len && str[i] != '\0' && str[i] != c)
		while (i <= len && str[i] != '\0' && str[i] != 42)// && str[i + 1] != 42)
		{
			tab[i] = str[i];
			i++;
		}
		tab[i] = '\0';
	}
	return (tab);
}

char	**ft_split(char *str)
{
	char	*c;
	char	**table;
	int		j;
	int		i;

	j = 0;
	i = 0;
	c = "**";
	if (str == NULL)
		return (NULL);
	table = (char**)malloc(sizeof(*table) * (ft_n(str) + 5));
	if (table) //might need to alter the loop below to mimic the ft_n maybe - further to this, need to find a way to amalgamate the two...
	{
		while (*str != '\0')
		{
			while (*str != '\0' && *str == 42)// str[i + 1] == c)
				str++;
			while (*str != '\0' && *str != 42)// && str[i + 1] != c)
			{
				table[j] = ft_copy(str);
				j++;
				while (*str != '\0' && *str != 42)// && str[i + 1] != c)
					str++;
			}
		}
		table[j] = NULL;
	}
	return (table);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
//need to resolve this by looking at the loops in the split function
//might need to draw inspo from the loop and use it in some way to split it per \n\n, as i had been trying to do with the pertetris file.
void	printtables(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		ft_putchar('+');
		ft_putstr(tab[i]);
		ft_putchar('_');
		i++;
	}
}
int	main()
{
	char a[] = "first\ntetris\n\nsecond\ntetris\n\n";
	char b[] = "stri\nng";
	char c[] = ".##.\n..##\n....\n....\n\n............\n\n";
	char d[] = "first*tetris**second*tetris**"; //this recognises each * as a string separation... also, ***** on the end reflect the need for the size
//find where the length fault lies, and try to find a solution to the * vs ** issue - perhaps adjust the loop
//need it to at least recognise per set of \n\n
//could create a new function under all of this to say when we meet \n\n, cos it has already split it all according to \n
	printf("%d\n", ft_n(a)); //shows 2 - correct
	printf("%d\n", ft_n(b)); //shows 0 - correct
	printf("%d\n", ft_n(c)); //shows 2 - correct
	printf("%d\n", ft_n(d)); //shows 4 - correct
	printf("***************\n");
//	printtables(ft_split(a));
//	free(ft_split(a));
	printf("***************\n");
	printtables(ft_split(d));
	free(ft_split(d));
	return (0);
}
