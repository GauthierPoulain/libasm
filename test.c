#include "./test.h"

#include <stdio.h>
#include <string.h>
#include <time.h>

void	ft(char *str, int itr)
{
	clock_t	begin = clock();
	int		i;
	size_t	tmp;
	i = 0;
	while (i < itr)
	{
		tmp = ft_strlen(str);
		i++;
	}
	clock_t	end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("ft   = %f\nlen = %zu\n", time_spent, tmp);
}

void	real(char *str, int itr)
{
	clock_t	begin = clock();
	int		i;
	size_t tmp;
	i = 0;
	while (i < itr)
	{
		tmp  = strlen(str);
		i++;
	}
	clock_t	end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("real = %f\nlen = %zu\n", time_spent, tmp);
}

size_t	xstrlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	my(char *str, int itr)
{
	clock_t	begin = clock();
	int		i;
	size_t tmp;
	i = 0;
	while (i < itr)
	{
		tmp = xstrlen(str);
		i++;
	}
	clock_t	end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("x    = %f\nlen = %zu\n", time_spent, tmp);
}

int main(void)
{
	char *str = "salut c'ejrgiewhgiuhewgireiughriouewhgiuhewghgest enorme";
	int itr = 10000000;

	setbuf(stdout, NULL);

	real(str, itr);
	ft(str, itr);
	my(str, itr);
	return (0);
	// int		fd;
	// char	buff;

	// fd = 0;
	// return ft_read(fd, &buff, 1);
}
