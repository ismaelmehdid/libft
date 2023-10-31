#include <stdlib.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;
	char	*str;

	str = pointer;
	i = 0;
	while (i != count)
	{
		*str = (unsigned char)value;
		str++;
		i++;
	}
}
