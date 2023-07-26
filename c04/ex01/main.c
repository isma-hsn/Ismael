
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char str[] = "Hello, world!";

	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}

