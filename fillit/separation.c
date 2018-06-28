#include <stdio.h>
#include <stdlib.h>

int	ft_n(char *s) //fn finds no. of times it comes accross "**", ie no. of words
{
	int	i;
	int	n;
	int	k;
	char	*c;

	i = 0;
	n = 0;
	c = "**";
	while (s[i] != '\0')
	{
		k = 0;
		while (s[i + k] == c[k])
		{
			if (s[i + 1] == c[k + 1])
				n++;
			k++;
		}
		i++;
	}
	return (n);
}

int	*ft_copy(char *s) //fn finds length of each tetris, so should include length of singular "*"
{
	char	*c;
	int	i;
	int	len;
	int	k;

	c = "**";
	len = 0;
	i = 0;
	while (s[len] != '\0')
	{
		k = 0;
		while (s[len + k] == c[k])
		{
			if (s[len + 1] == c[k + 1])
				n++;
			k++;
//what i aim to do here is to count each element in string and stop until it reaches **


