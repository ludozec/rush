// #include "funzioni.h" //
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

unsigned int	ft_atoui(char *str) //ritorna -1 se viene dato un num negativo o se il primo carattere diverso da uno spazio non e' una cifra (errore = -1) //
{
	unsigned int result;

	result = 0; 
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r') 
		str++;
	if (*str == '+')
		str++;
	if !(*str >= '0' && *str <= '9')
		return (-1);
	while (*str >= '0' && *str <= '9') 
	{
		 result = result * 10 + (*str - '0');
		 str++;
	}
	if (*str == '.')
	{
		while (*str )
		{
			if (*str > '0' && *str <= '9')  
	return (result);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	check_key(char *str)
{
	if (str[0] == '+')
		str++;
	if (str[0] < '0' || str[0] > '9') 
                return (-1);
	while(*str)
	{
		if (*str < '0' || *str > '9')
			return (-1);
	}
	return (1);
}

int	countlines(char *str)
{
	int c;

	c = 1;
	while (*str)
	{
		if (*str == '\n')
			c++;
		str++;
	}
	return (c);
}

char	*ft_strncpy(char *src, unsigned int b, unisgned int n)
{
	unsigned int	i;
	char	*dest;

	dest = malloc(n - b);
	i = b;
	while (i < n && src[i])
	{
		dest[i] = src[i - b];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

s_couple *array(char *str)
{
	int	i;
	int	sep;
	int	beg;
	s_couple	*array;
	int	n;
	
	array = malloc(countlines(str) * sizeof(s_couple));
	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			i++;
		beg = i;
		sep = 0;
		while (str[i] != '\n')
		{
			if (str[i] == ':' && str[sep] != ':')
				sep = i;
			i++;
		}
		array[n].key = ft_strncpy(str, beg, sep - 1);
		
