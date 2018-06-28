//allowed functions: exit, open, close, write, read, malloc, free
//Makefile to include: all, clean, fclean, re, compile with WWW
//
//will begin with writing conditions specifying in/correct scenarios.
//description:
//4 x 4 - done so but as an entire string on 19 chars, without newline on the very end.
//# or . 
//4 blocks of hashes only
//must connect with another # on either of its 4 sides

//should probs try to think of creating functions that treat each element separately:
//one fn for 4x4 test - done, as noted above
//another fn for the hash dot test
//another fn for the correct linkage of the hashes.

#include <string.h>

int	ft_hashdot(char *str) //fn showing 1 if there's a string with a foreign char
{
	int	i;
	int n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{		
		if (str[i] != 35 && str[i] != 46)
			n = 1;
		i++;
	}
	return (n);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_isc(int c)
{
	int	n;

	n = 1;
	if (c == 35)
		n = 0;
	return (n);
}

#include <stdio.h>

int	main()
{
	char a[] = "#...";
	char b[] = "H...";
	char c = '#';
	char d = 'H';
	char e[] = "#...";
	char f[] = "#....";

	printf("%d is good\n", ft_hashdot(a)); //displays 0, correct
	printf("%d is erroneous\n", ft_hashdot(b)); //displays 1, correct
	printf("strlen of %s:%d\n", e, ft_strlen(e)); //shows 4 - correct
	printf("strlen of %s:%d\n", f, ft_strlen(f)); //shows 5 - correct

//	printf("%c, is %d + is supposed to show 0\n", c, ft_isc(c));
//	printf("%c, is %d + is supposed to show 1\n", d, ft_isc(d));
	return (0);
}
