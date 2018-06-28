//this file has now been replaced with limit.c
//attempt to create a word count fn to count no. of sets of tetriminos we have, using \n\n as the delimiter
//could try to write it as if k == \n && k + 1 == '\n' - this is done for the word count type fn, which only works when form is correct
//or could make the string's delimiter \n\n straight away - this is done for the strstr type fn, which needed tweeking to work fine
//these fns will work fine assuming that the strings don't terminate with \n\n - oh but they do....***********
#include <stdio.h>
int	ft_mult(char *str, char *c)
{
	int	i; //counter for each element in string str
	int	n; //counter for no. of "\n\n" present in string
	int	k; //counter for each element in string c
	int	j; //test output variable

	j = 100;
	i = 0;
	n = 0;
//	k = 0; //if here, gives incorrect result by thinking there's an additional set of "\n\n"
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] == c[k]) //similar to strstr fn
		{
//			if (str[i + 1] == '\n')
			if (str[i + 1] == c[k + 1]) //shows different result to line above when string ends with \n - ie, it shows correct result!
				n++;
//			i++; //not needed for second if condition
			k++; //not needed for first if condition
		}
		i++;
	}
	if (n >= 0 && n <= 26) //added this if/else condition for testing purposes
		return (n);
	else
		return (j); //return error output value
	return (n);
}
int	ft_m(char *str) //this fn won't show correct no. of "\n\n" if there aren't any, or when the form is incorrect
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\n' && str[i + 1] != '\n' && str[i] != '\0')
			i++;
		if (str[i] == '\n' && str[i + 1] == '\n' && str[i] != '\0')
			n++;
		while (str[i] == '\n' && str[i] != '\0')
			i++;
		i++;
	}
	return (n);
}
int	ft_vnum(char *str) //renders incorrect result...
{
	int	n;
	char c;

	n = ft_mult(str, &c);
	if (n >= 1 && n <= 26)
		return (n);
	else
		n = 999;
	return (n);
}
//need to find a way to identify how to analyse each set:
//need to lay down that per string, when the ft_m condition is satisfied, then we can impose a limit of having upto 26 sets of \n\n, meaning max 26 tetriminos
//then need to state that per string, given n number of sets of \n\n, eg, analyse it until it reaches the first set of \n\n
//so for this bit, might need to assign a few variables to say that until "\n\n" is reached. Might need to be phrased like, analyse string until it equals the first set of \n\n
//next loop will be analyse the string after n = 1 but before n =2, so until it reaches the second set of \n\n. So per \n\n set will have an int counter variable attached to it
int	main()
{
	char a[] = "first tetris\n\nsecond tetris\n\nthird tetris\n\nfake \ntet\nris\n"; //if \n\n is at start, all fns show that there are 3 sets of \n\n...
	char b[] = "\n\n";
	char c[] = "stri\ng\n"; //when this terminates with \n, all equations are incorrect, but w/out \n, ft_mult shows as correct
	char d[] = "first\ntetris\n\nsecond\ntetris\n\nthird\ntetris\n\nfourth\ntetris\n\n";
	
	printf("%s", d);
	printf("no. of sets of tetris:%d\n", ft_mult(a, b)); //shows 3 - correct
	printf("no. of sets of tetris:%d\n", ft_mult(c, b)); //shows 0 - correct
	printf("no. of sets of tetris:%d\n", ft_mult(d, b)); //shows 4 - correct
	printf("no. of sets of tetris:%d\n", ft_m(a)); //shows 3 - correct
	printf("no. of sets of tetris:%d\n", ft_m(c)); //shows 3 - INCORRECT
	printf("no. of sets of tetris:%d\n", ft_m(d)); //shows 4 - correct
	printf("string valid?: %d\n", ft_vnum(a));
	printf("string valid?: %d\n", ft_vnum(c));
	return (0);
}
