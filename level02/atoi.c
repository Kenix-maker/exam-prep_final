int		ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	sign = 1;
	res = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
