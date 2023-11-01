#include <stdlib.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)(pointer1 + i)
			!= *(unsigned char *)(pointer2 + i))
			return (*(unsigned char *)(pointer1 + i)
			- *(unsigned char *)(pointer2 + i));
		i++;
	}
	return (0);
}
