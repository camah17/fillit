//this file tests that all 3 functions are correct
//to test on command line:
//gcc -o test hashdot.c 4x4.c quantities.c main.c
//./test
//need to comment out the mains in the other files
#include <stdio.h>

int ft_v4x4(char *str); //fn tests whether 4x4 string

int ft_vquantities(char *str); //fn tests whether correct no. of #.\n exist ************ need to include the terminating \n\n *******

int ft_vhashdot(char *str); //fn tests that there are no foreign chars

int	ft_vn(char *str); //fn test that there are b/w 1 - 26 tetriminos **************** showing as incorrect as quantities file needs to change

int	ft_vall(char *str) //fn tests that all 3 functions above are correct
{
	int	n; //placeholder for output value.

	n = 0;
	if (ft_v4x4(str) == 0 && ft_vquantities(str) == 0 && ft_vhashdot(str) == 0)
//	if (ft_v4x4(str) == 0 && ft_vquantities(str) == 0 && ft_vhashdot(str) == 0
//			&& ft_vn(str) == 0)
		return (n);
	else
		n = 1;
	return (n);
}

int	main()
{
	char a[] = ".##.\n..##\n....\n....\0";
	char b[] = "....#";
	char c[] = "hh..\n..#\n.#";

	printf("string A if correct, output is zero. outcome:%d\n", ft_vall(a)); //displays 0 - correct
	printf("string B if correct, output is zero. outcome:%d\n", ft_vall(b)); //displays 1 - correct
	printf("string C if correct, output is zero. outcome:%d\n", ft_vall(c)); //displays 1 - correct
	return (0);
}
