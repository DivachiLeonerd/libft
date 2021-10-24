int	ft_atoi(const char *str)
{
	int negative_counter;
	int	number;
	int	i;

	i = 0;
	number = 0;
	negative_counter = 0;
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <=57) || (str[i] == 43 || str[i] == 45))
		{
			if (str[i] == 45)
			{
				negative_counter++;
				i++;
			}
			else if (str[i] == 43)
			{
				i++;			
			}
			else if (str[i] >= 10)
			{
				number = (str[i] - 48) * 10 + number;
			}
			else if (str [i] < 10)
			{
				number = str[i] - 48;
			}
		}
		return (number);
	}
	
}