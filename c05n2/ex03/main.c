
#include <stdio.h>

int	ft_recursive_power(int nb, int power);


int	main(void)
{
	int base = 2;
	int exponent = 3;
	int result = ft_recursive_power(base, exponent);
	
	printf("%d to the power of %d is %d\n", base, exponent, result);
	return (0);
}
