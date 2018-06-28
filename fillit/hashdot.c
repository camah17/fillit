int ft_hashdot(char *str) //fn confirming that there are no foreign chars. Issue is that it marks as correct if one of 3 essential chars is missing.
{
	int i; //counter for each element of string
	int n; //placeholder for outcome
	
	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 35 && str[i] != 46 && str[i] != 10) //if there isn't a newline, and a # and a dot, then return 1.
			n = 1; //what about applying same logic to say that there must be #.nl present, then return 0 if so - no need
		i++;
	}
	return (n);
}

int	ft_blank(char *str) //fn confirming that string isn't blank
{
	int	n; //placeholder for output value

	n = 0;
	if (str[0] == '\0')
		n = 1;
	return (n);
}

int	ft_vhashdot(char *str) //fn verifies that there's no foreign character and that the string isn't blank
{
	int	n; //placeholder for output value

	n = 0;
	if (ft_hashdot(str) == 0 && ft_blank(str) == 0)
		return (n);
	else
		n = 1;
	return (n);
}
/*
#include <stdio.h>

int	main()
{
	char a[] = "##..\n.##.\n....\n....";
	char b[] = "hh..\n..#\n.#";
	char c[]= "##..";
	char d[] = "hh..";
	char e[] = "##..\n";
	char f[] = "hh.#\n";
	char g[] = " ";
	char h[] = "";
	printf("zero means that there's no foreign char, outcome:%d\n", ft_hashdot(a)); //displays 0 - correct
	printf("zero means that there's no foreign char, outcome:%d\n", ft_hashdot(b)); //displays 1 - correct
	printf("zero means that there's no foreign char, outcome:%d\n", ft_hashdot(c)); //displays 0 - correct - missing one of the 3 essential characters
	printf("zero means that there's no foreign char, outcome:%d\n", ft_hashdot(d)); //displays 1 - correct
	printf("zero means that there's no foreign char, outcome:%d\n", ft_hashdot(e)); //displays 0 - correct
	printf("zero means that there's no foreign char, outcome:%d\n", ft_hashdot(f)); //displays 1 - correct
	printf("zero means that there's no foreign char, outcome:%d\n", ft_hashdot(g)); //displays 1 - correct
	printf("zero means that there's no foreign char, outcome:%d\n", ft_hashdot(h)); //displays 0 - incorrect - as this fn shouldn't apply to this string
	printf("\n");
	printf("1 means that the string is blank, outcome:%d\n", ft_blank(g)); //displays 0 - correct
	printf("1 means that the string is blank, outcome:%d\n", ft_blank(h)); //displays 1 - correct
	printf("\n");
	printf("zero means the condition of no foreign char has been satisfied + string isn't blank. Outcome:%d\n", ft_vhashdot(a)); //displays 0 - correct
	printf("zero means the condition of no foreign char has been satisfied + string isn't blank. Outcome:%d\n", ft_vhashdot(b)); //displays 1 - correct
	printf("zero means the condition of no foreign char has been satisfied + string isn't blank. Outcome:%d\n", ft_vhashdot(c)); //displays 0 - correct
	printf("zero means the condition of no foreign char has been satisfied + string isn't blank. Outcome:%d\n", ft_vhashdot(d)); //displays 1 - correct
	printf("zero means the condition of no foreign char has been satisfied + string isn't blank. Outcome:%d\n", ft_vhashdot(e)); //displays 0 - correct
	printf("zero means the condition of no foreign char has been satisfied + string isn't blank. Outcome:%d\n", ft_vhashdot(f)); //displays 1 - correct
	printf("zero means the condition of no foreign char has been satisfied + string isn't blank. Outcome:%d\n", ft_vhashdot(g)); //displays 1 - correct
	printf("zero means the condition of no foreign char has been satisfied + string isn't blank. Outcome:%d\n", ft_vhashdot(h)); //displays 1 - correct
	return (0);
}*/
