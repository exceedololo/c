#include <unistd.h>

int main(void)
{
	int k;
	k = '0';
	while( k <= '9')
	{
		write(1, &k, 1);
		k++;
	}
	write(1, "\n", 1);
	return(0);
}
