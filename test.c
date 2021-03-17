#include "./test.h"

#include <stdio.h>
#include <string.h>
#include <time.h>

void	test_ft_strlen(char *str, int itr)
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

void	test_real_strlen(char *str, int itr)
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

void	test_strlen(char *str, int iter)
{
	test_real_strlen(str, iter);
	test_ft_strlen(str, iter);
}

int main(void)
{
	setbuf(stdout, NULL);
	test_strlen("salut j'adore faire des tests", 10000000);
	return (0);
}
