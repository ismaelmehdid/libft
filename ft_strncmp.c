#include <stdlib.h>

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = 0;
	if (first[0] == '\0' && second[0] == '\0')
		return (0);
	while (i != length)
	{
		if (second[i] != first[i])
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}
