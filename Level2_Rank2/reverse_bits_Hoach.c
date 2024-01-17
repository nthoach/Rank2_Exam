unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 0;
	unsigned char	res = 0;

	while (i < 8)
	{
		res = res | (((octet << i) & 128) >> (7 - i));
		i++;
	}
	return (res);
}

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main(void)
{
	unsigned char n = 9;
	print_bits(n);
	write(1, "\n", 1);
	print_bits(reverse_bits(n));
	return (0);
}
