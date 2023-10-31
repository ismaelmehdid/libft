int	isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (1);
	return (0);
}
