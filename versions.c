#include "includes/libftprintf.h"
#include "libft/libft.h"
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>

void    test_fprintf()
{
    FILE *fp;
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    FILE *fp4;
    FILE *fp5;

    fp = fopen("test", "w");
    fp1 = fopen("test1", "w");
    fp2 = fopen("test2", "w");
    fp3 = fopen("test3", "w");
    fp4 = fopen("test4", "w");
    fp5 = fopen("test5", "w");
    printf("%d\n", ft_fprintf(fp, "%s", ""));
    printf("%d\n", fprintf(fp1, "%s", ""));
    printf("%d\n", ft_fprintf(fp2, "%s", NULL));
    printf("%d\n", fprintf(fp3, "%s", NULL));
    printf("%d\n", ft_fprintf(fp4, "%s", "Hello World here we go again I guess Hello Darling\n"));
    printf("%d\n", fprintf(fp5, "%s", "Hello World here we go again I guess Hello Darling\n"));
}

void    test_asprintf()
{
    char *str;
    char *str1;

    printf("%d\n", ft_asprintf(&str, ""));
    printf("%s\n", str);
    printf("%d\n", asprintf(&str1, ""));
    printf("%s\n", str1);
    printf("%d\n", ft_asprintf(&str, "Hello World here we go again I guess Hello Darling\n"));
    printf("%s\n", str);
    printf("%d\n", asprintf(&str1, "Hello World here we go again I guess Hello Darling\n"));
    printf("%s\n", str1);
    printf("%d\n", ft_asprintf(&str, NULL));
    printf("%s\n", str);
    printf("%d\n", asprintf(&str1, NULL));
    printf("%s\n", str1);
}

void    test_dprintf()
{
    int fd;

    fd = 1;
    printf("%d\n", ft_dprintf(fd, "%s\n", ""));
    printf("%d\n", dprintf(fd, "%s\n", ""));
    printf("%d\n", ft_dprintf(fd, "%s\n", "Hello World here we go again I guess Hello Darling\n"));
    printf("%d\n", dprintf(fd, "%s\n", "Hello World here we go again I guess Hello Darling\n"));
    printf("%d\n", ft_dprintf(fd, "%s\n", NULL));
    printf("%d\n", dprintf(fd, "%s\n", NULL));
}

void    test_sprintf()
{
    char str[0];
    char str1[0];
    char str2[100];
    char str3[100];
    char str4[10];
    char str5[10];

    printf("test sprintf\n");
    printf("%d\n", ft_sprintf(str, ""));
    printf("%s\n", str);
    printf("%d\n", sprintf(str1, ""));
    printf("%s\n", str1);
    printf("%d\n", ft_sprintf(str2, "Hello World here we go again I guess Hello Darling\n"));
    printf("%s\n", str2);
    printf("%d\n", sprintf(str3, "Hello World here we go again I guess Hello Darling\n"));
    printf("%s\n", str3);
    printf("%d\n", ft_sprintf(str4, "", NULL));
    printf("%s\n", str4);
    printf("%d\n", sprintf(str5, "", NULL));
    printf("%s\n", str5);   
}

void    test_snprintf()
{
    char str[0];
    char str1[0];
    char str2[100];
    char str3[100];
    char str4[10];
    char str5[10];

    printf("test snprintf\n");
    printf("%d\n", ft_snprintf(str, 0, ""));
    printf("%s\n", str);
    printf("%d\n", snprintf(str1, 0, ""));
    printf("%s\n", str1);
    printf("%d\n", ft_snprintf(str2, 5, "Hello World here we go again I guess Hello Darling\n"));
    printf("%s\n", str2);
    printf("%d\n", snprintf(str3, 5, "Hello World here we go again I guess Hello Darling\n"));
    printf("%s\n", str3);
    printf("%d\n", ft_snprintf(str4, 4, "", NULL));
    printf("%s\n", str4);
    printf("%d\n", snprintf(str5, 4, "", NULL));
    printf("%s\n", str5);   
}

void    test_versions()
{
    /* allocate string */
    test_asprintf();
    /* file * */
    test_fprintf();
    /* fd */
    test_dprintf();
    /* pre allocate buffer, assume size INT_MAX + 1 */
    test_sprintf();
    /* pre allocate buffer with given size
    If size is 0, no Null terminator, else always terminated
    write size -1. Return how many chars WOULD be written*/
    test_snprintf();
}

int main()
{
    test_versions();
}