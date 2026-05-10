void ft_putchar(char c);

void ft_print(int column, char fst, char btwn, char lst)
{
	int i = 1;
	while(i <= column)
	{
		if(i == 1)
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
	int i;
	int line = y;
	int column = x;
	i = 1;
	
	if(column >= 1 && line >= 1)
	{
		while(i <= line)
		{
			if(i == 1)
			ft_print(column, 'o', '-', 'o');
			
			else if(i == line)
			ft_print(column, 'o','-', 'o');

			else 
			ft_print(column,'|', ' ', '|');
			
			i++;
		}
	}
}
