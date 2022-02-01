#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int c;

    c = 0;
    while ((src[c] != '\0') && (c < n))
    {
        dest[c] = src[c];
        c++;
    }
    while (c < n)
    {
        dest[c] = '\0';
        c++;
    }
    return (dest);
}

int    main()
{
    char array1[] = "abcdef";
    char array2[] = "1234";
    char *p_array2;

    printf("After \n");
    printf("1: %s 2: %s \n",array1,array2);
    p_array2 = ft_strncpy(array1,array2,2);
    printf("Before \n");
    printf("1: %s 2: %s \n",array2,p_array2);

}
