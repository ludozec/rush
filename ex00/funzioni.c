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
	if 
coppia *array(char *path)
{
	

int main()
{
	printf("%d",ft_atoui("000345"));
	return 0;
}
