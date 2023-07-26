#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int		chek_b(char *base);

void	recur(int nbr, char *base, int i);


int  main(void)
{
	int nbr = 15;
	char base[] = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base);
	return (0);
}
