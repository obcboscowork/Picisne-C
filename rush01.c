void ft_putchar(char c);

void ft_print(int column, char fst, char btwn, char trd)
{
	int i;
	i = 1;

	while(i <= column)
	{
		if(i == 1)
		ft_putchar(fst);

		else if(i == column)
		ft_putchar(trd);

		else
		ft_putchar(btwn);
		
		i++;
	}
	ft_putchar('\n');
}
void rush(int x, int y)
{
	int column;
	int line;
	int i;

	column = x;
	line = y;
	i = 1;

	if(column >=1 && line >=1)
	{
		while(i <= line)
		{
			if(i == 1)
			ft_print(column, '/', '*', '\\');

			else if(i == line)
			ft_print(column, '\\', '*', '/');
			
			else
			ft_print(column, '*', ' ', '*');

			i++;
		}
	}
                else if(i == column)
                ft_putchar(trd);

                else
                ft_putchar(btwn);

                i++;
        }
        ft_putchar('\n');
}
void rush(int x, int y)
{
        int column;
        int line;
        int i;

        column = x;
        line = y;
        i = 1;

        if(column >=1 && line >=1)
        {
                while(i <= line)
                {
                        if(i == 1)
                        ft_print(column, '/', '*', '\\');

                        else if(i == line)
                        ft_print(column, '\\', '*', '/');

                        else
                        ft_print(column, '*', ' ', '*');

                        i++;
                }
        }
}}

			

