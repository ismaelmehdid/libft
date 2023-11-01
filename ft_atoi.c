int	ft_atoi(const char *str)
{
	int	i;
	int	temp;
	int	countm;

	countm = 0;
	temp = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
		|| str[i] == '+' || str[i] == '-')
	{
		if ((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] == '+' || str[i + 1] == '-'))
			return (0);
		i++;
	}
	if (str[i - 1] == '-')
		countm++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = temp * 10 + str[i] - '0';
		i++;
	}
	if (countm == 1)
		return (-temp);
	return (temp);
}
