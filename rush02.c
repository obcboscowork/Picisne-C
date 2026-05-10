void ft_putchar(char c);

void ft_print(int column, char fst, char btwn, char lst)
{
	int i =1;
	while(i <= column)
	{
		if(i ==1)
		ft_putchar(fst);

		else if(i == column)
		ft_putchar(lst);

		else
		ft_putchar(btwn);

		i++;
	}
	ft_putchar('\n');

}

void rush(int x, int y)
{
	int i = 1;
	int column = x;
	int line = y;

	if(column >=1 && line>=1)
	{
		while(i <= line)
		{

		if(i == 1)
		ft_print(column, 'A', 'B', 'A');
		
		else if(i == line)
		ft_print(column, 'C', 'B', 'C');

		else
		ft_print(column, 'B', ' ', 'B');

		i++;
		}
		
	}
}

