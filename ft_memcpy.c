#include <stdlib.h>

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t		i;
	char		*strdest;
	const char	*strsrc;

	strdest = destination;
	strsrc = source;
	i = 0;
	while (i < size)
	{
		*strdest = *strsrc;
		strdest++;
		strsrc++;
		i++;
	}
	*strdest = '\0';
	return (destination);
}
