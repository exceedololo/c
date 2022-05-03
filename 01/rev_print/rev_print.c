#include <unistd.h>
void ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
return (i);
}
int main(int argc, char *argv[])
{
	int i;
	int lem;
	int tmp;
	i = 0;

	if (argc == 2)
	{
		lem = ft_strlen(argv[1]);
		lem--;
		while (i < lem)
		{
			tmp = argv[1][i];
			argv[1][i] = argv[1][lem];
			argv[1][lem] = tmp;
			i++;
			lem--;
		}
		ft_putstr(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}
