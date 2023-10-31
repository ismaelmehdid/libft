#include <stdlib.h>

char	*ft_strchr(const char *string, int searchedChar)
{
	if (!searchedChar)
		return (NULL);
	while (*string)
	{
		if (*string == searchedChar)
			return ((char *)string);
		string++;
	}
	return (0);
}
