#include <unistd.h>

int main(int argc, char *argv[])
{


	while (argc > 0)
	{
		if (argc != '\0')
		{
	int i;

	i=0;
	while (argv[0][i] != '\0')
	{
		//write(1, argv[0], i);
		i++;
	}
	write(1, argv[0], i);
	write(1, "\n", 1);
	return(0);
}
}
}
