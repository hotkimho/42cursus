#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	print_string(char *str)
{
	if (str)
		return (write(1, str, ft_strlen(str)));
	else
		return (write(1, "(null)", 6));
}
