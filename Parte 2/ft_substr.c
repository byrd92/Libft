#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	i = 0;
	str = (char*)malloc(len*sizeof(char));
	if (str == NULL)
		return (0);
	while(s[start])
	{
		str[i++] = s[start];
		start++;
	}
	return (str);
}

int	main(void)
{
	char s[12]= "hola que tal";

	printf("%s\n", ft_substr(s, 4, 12));
	return (0);
}
