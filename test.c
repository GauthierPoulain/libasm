#include "./test.h"

#include <stdio.h>
#include <string.h>
#include <time.h>

size_t	test_ft_strlen(char *str, int itr)
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
	return (tmp);
}

size_t	test_real_strlen(char *str, int itr)
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
	return (tmp);
}

size_t	test_ft_strcmp(char *str1, char * str2, int itr)
{
	clock_t	begin = clock();
	int		i;
	size_t	tmp;
	i = 0;
	while (i < itr)
	{
		tmp  = ft_strcmp(str1, str2);
		i++;
	}
	clock_t	end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("ft   = %f\ndiff = %zu\n", time_spent, tmp);
	return (tmp);
}

size_t	test_real_strcmp(char *str1, char * str2, int itr)
{
	clock_t	begin = clock();
	int		i;
	size_t tmp;
	i = 0;
	while (i < itr)
	{
		tmp = strcmp(str1, str2);
		i++;
	}
	clock_t	end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("real = %f\ndiff = %zu\n", time_spent, tmp);
	return (tmp);
}

void	test_strlen(char *str, int iter)
{
	test_real_strlen(str, iter);
	test_ft_strlen(str, iter);
}

void	test_strcmp(char *str1, char *str2, int iter)
{
	test_real_strcmp(str1, str2, iter);
	test_ft_strcmp(str1, str2, iter);
}

int main(void)
{
	setbuf(stdout, NULL);
	// test_strlen("", 10000000);
	test_strcmp("010", "0", 10000000);
	return (0);
}
