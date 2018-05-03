#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	if (nb == -2147483648)
		ft_putstr("-2147483648" + 0);
}
