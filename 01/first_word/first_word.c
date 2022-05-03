#include <unistd.h>

int main(int argc, char *argv[])
{
	 while (argc == 2)
	 {
		 if (argc != '\0')
		 {
			 int i;
			 i = 0;
			 while (argv[1][i] != '\0')
			 {
				 i++;
				 if (argv[1][i] == ' ')
					 break;
			 }
			 write(1, argv[1], i);
			 write(1, "\n", 1);
			 return (0);
		 }
	 }
}

