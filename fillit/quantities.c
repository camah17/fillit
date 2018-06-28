//this file outlines the quantities required for the specs
//doesn't consider the order in which they come in.

int	ft_4hashes(char *str) //fn confirming if there are 4 hashes present
{
	int	i; //counter for each element in string
	int	n; //counter for no. of hashes

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 35)
			n++;
		i++;
	}
	if (n == 4)
		return (0);
	else
		return (1); //return 1 if there aren't 4 hashes
	return (0);
}

int	ft_12dots(char *str) //fn confirming if there are 12 dots present
{
	int	i; //counter for each element in string
	int	n; //counter for no. of dots

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 46)
			n++;
		i++;
	}
	if (n == 12)
		return (0);
	else
		return (1); //return 1 if there aren't 12 dots
	return (0);
}

int	ft_4lines(char *str) //fn confirming if there are 4 lines
{
	int	i; //counter for each element in string
	int	n; //counter for no. of lines

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 10)
			n++;
		i++;
	}
	if (n == 3)
		return (0);
	else
		return (1); //return 1 if there aren't 4 lines
	return (0);
}

int	ft_vquantities(char *str) //fn verifies the conditions above. Returns 1 if it doesn't
{
	int	n; //placeholder for output value

	n = 0;
	if (ft_4hashes(str) == 0 && ft_12dots(str) == 0 && ft_4lines(str) == 0)
		return (n);
	else
		n = 1;
	return (n);
}
/*
#include <stdio.h>

int	main()
{
	char a[] = ".##.\n##..\n....\n....";
	char b[] = "..##";
//note, if there's a foreign character, it won't recognise it here. Need the other conditions in the other files to confirm this
	printf("zero means that there are 4 hashes. Outcome:%d\n", ft_4hashes(a)); //displays 0 - correct
	printf("zero means that there are 12 dots. Outcome:%d\n", ft_12dots(a)); //displays 0 - correct
	printf("zero means that there are 4 lines. Outcome:%d\n", ft_4lines(a)); //displays 0 - correct
	printf("\n");
	printf("zero means that there are 4 hashes. Outcome:%d\n", ft_4hashes(b));//displays 1 - correct
	printf("zero means that there are 12 dots. Outcome:%d\n", ft_12dots(b)); //displays 1 - correct
	printf("zero means that there are 4 lines. Outcome:%d\n", ft_4lines(b)); //displays 1 - correct
	printf("\n");
	printf("zero means that all conditions have been satisfied. Outcome:%d\n", ft_vquantities(a)); //displays 0 - correct
	printf("zero means that all conditions have been satisfied. Outcome:%d\n", ft_vquantities(b)); //displays 1 - correct
	return (0);
}*/
