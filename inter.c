#include <unistd.h>

int	main(int ac, char **av)
{
	int	inter[256] = {0};
	
	if (ac == 3)
	{
		char	*s2 = av[2];
		char	*s1 = av[1];

		while (*s2)
		{
			if (inter[(int) *s2] == 0)
					inter[(int) *s2] = 1;
			s2++;
		}
		while (*s1)
		{
			if (inter[(int) *s1] == 1)
			{
				write (1, s1, 1);
				inter[(int) *s1] = 0;
			}
			s1++;
		}
	}
	write(1,"\n", 1);
	return (0);
}
