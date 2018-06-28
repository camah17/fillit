//need a function to identify multiple tetriminos in a file.
//Yue mentioned that i need another char for \0!!!!!!
//so after our initial 19 chars, need a condition specifying if there is something at index 20/21
//or could have a counter per 19 chars. then count, and impose limit of having 1 - 26

//might need to link all the former conditions first.
/*
int ft_is19(char *str);

int	ft_multiple(char *str) //unfinished
{
	int	i; //counter for each element in string
	int	n; //placeholder for output value

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (ft_is19(str) != 0) //tests whether there is more than one set of tetriminos
		{
			if (str[19] == '\n') //if next element is a new line, then proceed, so n will increment, meaning that we've potentially come across another tetriminos set
				n++; //so n here will be = 1
		}
		i++;
	}
}
*/
//might not be able to impose limits on the no. tetriminos without having some kind of word/char splitting fn
/*int ft_limit(char *str)
{
	int i; //counter for each element in string
	int n; //placeholder for output value
	
	i = 0;
	n = 0;
	if (ft_vall(str) == 0) //are we looping or are we imposing the limit up to 26 here??
		n++; //inclusion of this fn is weird as what if there's more than 1 tetriminos in the doc?? as it will be nullified anyhow if there's more than one
	while (str[i] != \0)
	{
		while (n >= 1 && n <= 26) //this will only work once it knows how to identify more than 1 tetriminos in the doc
		{
			ft_vall(str);
			n++;
		}
		i++;
	}
	return (n);
}*/

//can we make a fn for a count if there are 19 chars, then increment per set?
//or need it be something like a word count, with a delimiter?
//can also consider a string split after the 19th char.
//might need the delimiter to be a \n after the fourth line.
//might need some kind of starting index per new set of tetriminos

//need some kind of loop for the 4th new line.
//take a simpler example:
//deffo need to do a string split with "\n\n" as the string's delimitor.
int	ft_m(char *str)
{
	int	i; //counter for each element in string
	int	n; //counter for no. of tetriminos
	int	k; //placeholder for start of new tetriminos

	i = 0;
	n = 1;
	k = 0;
	while (str[i] != '\0')
	{
//		if (str[i] == '\n' && str[i + 1] == '\n') //alternative way to write the below
		if (str[i] == '\n')
			i++;
		if (str[i] == '\n')
		{
			n++;
			k++; //how can i make this the element of separation - do i do: while (str[k] == relevant index no.
		}
		i++;
	}
	return (n);
}
#include <stdio.h>
int	main()
{
	char a[] = ".test..ing.\0";
	char b[] = "tetris\none\n\ntetris\ntwo\n\ntetris\nthree";
	printf("%s\n", b);
	printf("no. of tetris:%d\n", ft_m(b));
	return (0);
}
