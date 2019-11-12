/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** display number
*/

void my_putchar(char c);

void	my_putnbr(int nb)
{
	if (nb < 0) {
		nb = nb * - 1;
		my_putchar('-');
		my_putnbr(nb / 10);
	} else if (nb >= 10) {
		my_putnbr(nb / 10);
	}
	my_putchar(nb % 10 + '0');
}
