#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
	
}
int main()
{
	char *str;
	str = "sadgwadg";
	printf("%d",ft_strlen(str));
	return(0);
}

