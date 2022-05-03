#include <unistd.h>

int main(void)
{
/*	write(1, "aBcDeFgGiJkLmNoPqRsTuVwXyZ\n", 29);
	return(0);
	*/

	char nechet;
	char chet;
	
	nechet = 'a';
	chet = 'B';
	while (chet <= 'Z')
	{
		write(1, &nechet, 1);
		write(1, &chet, 1);
		nechet = nechet +2;
		chet = chet + 2;
	}
		write(1, "\n", 1);
		return(0);
}

