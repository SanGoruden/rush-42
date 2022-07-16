void	ft_putchar(char c);

void	print_line(int x, int *y, char border, char middle)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar(border);
		else
			ft_putchar(middle);
		i++;
	}
	*y = *y - 1;
	ft_putchar('\n');
}

void	print_rush(int x, int *y)
{
	int	i;

	i = 0;
	print_line(x, y, 'o', '-');
	while (*y > 1)
		print_line(x, y, '|', ' ');
	if (*y == 1)
		print_line(x, y, 'o', '-');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	print_rush(x, &y);
}
