#include <unistd.h>

int	main(int agc, char **agv)
{
	int	i;

	i = 0;
	if (agc == 2)
	{
		while (agv[1][i])
		{
			if (agv[1][i] >= 'a' && agv[1][i] <= 'z')
				agv[1][i] = 'z' - (agv[1][i] - 'a');
			else if (agv[1][i] >= 'A' && agv[1][i] <= 'Z')
				agv[1][i] = 'Z' - (agv[1][i] - 'A');	
			write(1, &agv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}