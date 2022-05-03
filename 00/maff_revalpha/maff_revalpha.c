#include <unistd.h>

int main(void)
{
//	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
//	return(0);

	int i;

	char chet;
	char nechet;
	
	nechet = 'z';
	chet = 'Y';
	while(chet >= 'A')
	{
		write(1, &nechet, 1);
		write(1, &chet, 1);
		nechet = nechet - 2;
		chet = chet - 2;
	}
		write(1, "\n", 1);
		return(0);
	}
