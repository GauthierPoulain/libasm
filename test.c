#include "./test.h"

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

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

char	*test_real_strcpy(char *dst, char *src, int itr)
{
	clock_t	begin = clock();
	int		i;
	char *tmp;
	i = 0;
	while (i < itr)
	{
		tmp = strcpy(dst, src);
		i++;
	}
	clock_t	end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("real = %f\ndiff = %s\n", time_spent, tmp);
	return (tmp);
}

char	*test_ft_strcpy(char *dst, char *src, int itr)
{
	clock_t	begin = clock();
	int		i;
	char *tmp;
	i = 0;
	while (i < itr)
	{
		tmp = ft_strcpy(dst, src);
		i++;
	}
	clock_t	end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("ft   = %f\ndiff = %s\n", time_spent, tmp);
	return (tmp);
}

void	test_strlen(char *str, int iter)
{
	printf("test strlen\n");
	test_real_strlen(str, iter);
	test_ft_strlen(str, iter);
}

void	test_strcmp(char *str1, char *str2, int iter)
{
	printf("test strcmp\n");
	test_real_strcmp(str1, str2, iter);
	test_ft_strcmp(str1, str2, iter);
}

void	test_strcpy(char *dst, char *src, int iter)
{
	printf("test strcpy\n");
	test_real_strcpy(dst, src, iter);
	test_ft_strcpy(dst, src, iter);
}

int main(void)
{
	setbuf(stdout, NULL);
	char *strcpysrc = "salut";
	char strcpydst[6] = "";
	// test_strlen("1000", 20000000);
	// test_strcmp("010", "0", 20000000);
	test_strcpy(strcpydst, strcpysrc, 10000000);
	return (0);
}
