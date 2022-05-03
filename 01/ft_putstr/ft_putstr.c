#include <unistd.h>
//void
int ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return(0);
}
/*
int main ()
{
    char *str;

    str = "awg29yghunah7yjifgyw7yhuijgt24<F6";
	ft_putstr(str);
    return  0;
}
*/
