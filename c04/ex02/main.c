
#include<unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int main()
{
    ft_putnbr(-1234);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(123456789);
    write(1, "\n", 1);
    return 0;
}

