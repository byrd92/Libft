#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int i;
    int j;
    
    i = 0;
    j = 0;
    str = (char*)malloc((strlen(s1)+strlen(s2) + 1)*sizeof(char));
    if (str == NULL)
        return (0);
    while (s1[i])
    {
        str[i] = s1[i];
    }
    while (s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = 0;
    return (str);
}

int main (void)
{
    char a[6] = "hola ";
    char b[7] = "que tal";
    printf("%s\n", ft_strjoin(a, b));
    return (0);
}