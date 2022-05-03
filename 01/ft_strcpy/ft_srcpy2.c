#include <stdio.h>
char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while(*s2 != '\0')
	{
		*s1= *s2;
		s1++;
		s2++;
	}
	return (s1);
}
int main()
{
    char s2[] = "abaza";
    char s1[10]="";

    ft_strcpy(s1, s2);
    printf("%s\n", s1);
    return(0);
}

