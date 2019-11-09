#include "includes/libftprintf.h"
#include "libft/libft.h"
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void  test_d()
{
  printf("\n\ntest handle d, i\n\n");
  printf("    printf %.10d\n", -12);
  ft_printf(" ft_printf %.10d\n", -12);
  printf("    printf %d\n", 0);
  ft_printf(" ft_printf %d\n", 0);
  printf("    printf %.0d\n", 0);
  ft_printf(" ft_printf %.0d\n", 0); 
  printf("    printf %05d\n", 0);
  ft_printf(" ft_printf %05d\n", 0);
  printf("    printf %05d\n", 10);
  ft_printf(" ft_printf %05d\n", 10);  
  printf("    printf %+05.12d\n", 123);
  ft_printf(" ft_printf %+05.12d\n", 123);
  printf("    printf %+05.12d\n", -123);
  ft_printf(" ft_printf %+05.12d\n", -123);
  printf("    printf %hhd\n", 123456789);
  ft_printf(" ft_printf %hhd\n", 123456789);
  printf("    printf %hd\n", 123456789);
  ft_printf(" ft_printf %hd\n", 123456789);
  printf("    printf %#lld\n", -9223372036854775807);
  ft_printf(" ft_printf %#lld\n", -9223372036854775807);
  printf("    printf % hd\n", 2147483649);
  ft_printf(" ft_printf % hd\n", 2147483649);
  printf("    printf %d\n", -2147483648);
  ft_printf(" ft_printf %d\n", -2147483648);
}

void  test_unsigned()
{
  printf("\n\ntest handle unsigned\n\n");
  printf("Test unsigned\n");
  printf("    printf %0+2u\n", 0);
  ft_printf(" ft_printf %0+2u\n", 0);
  printf("    printf %+#.0u\n", 0);
  ft_printf(" ft_printf %+#.0u\n", 0);
  printf("    printf %+#.0o\n", 0);
  ft_printf(" ft_printf %+#.0o\n", 0);
  printf("    printf %+#.0x\n", 0);
  ft_printf(" ft_printf %+#.0x\n", 0);
  printf("    printf %-0+25o|\n", 125);
  ft_printf(" ft_printf %-0+25o|\n", 125);
  printf("    printf %-0+25u|\n", 125);
  ft_printf(" ft_printf %#-0+25u|\n", 125);
  printf("    printf %#-0+25o|\n", 125);
  ft_printf(" ft_printf %#-0+25o|\n", 125);
  printf("    printf %+#025hx|\n", 0);
  ft_printf(" ft_printf %+#025hx|\n", 0);
  printf("    printf %#hx|\n", 125123481234);
  ft_printf(" ft_printf %#hx|\n", 125123481234);
  printf("    printf %#0+25.-llX|\n", 125123481234);
  ft_printf(" ft_printf %#0+25.-llX|\n", 125123481234);
  printf("    printf %#0+25.-12X|\n", 0);
  ft_printf(" ft_printf %#0+25.-12X|\n", 0);
  printf("    printf %#0+25.-12X|\n", 10);
  ft_printf(" ft_printf %#0+25.-12X|\n", 10);
  printf("    printf %0#15.x|\n", 0);
  ft_printf(" ft_printf %0#15.x|\n", 0);
  printf("    printf %#x|\n", 0);
  ft_printf(" ft_printf %#x|\n", 0);
}

void  test_ef()
{
  long double n = 0./0.;
  double n4 = 0./0.;
  long double n1 = 1./0.;
  long double n2 = 999999.98123;
  long double n3 = -0.00000000000012345712348989789718971;
  double n5 = 0.999;
  double n6 = 9999991234897987;
  double b6 = 9999991234897987;
  double b = .0000000000000000000000000009999991234897987;
  long double b3 = -0.00000000000012345712348989789718971;
  long double b2 = 999999999999.9999;
  double x = 12318718971.1234;
  double x1 = 999999.912348;

  printf("\n\ntest handle e, f, g\n\n");
  printf("    printf %.1400le\n", pow(10., -308.));
  ft_printf(" ft_printf %.1400le\n", pow(10., -308.));
  printf("    printf %.1400le\n", pow(10., 308.));
  ft_printf(" ft_printf %.1400le\n", pow(10., 308.));
  printf("    printf %.4lf\n", 1238.12347);
  ft_printf(" ft_printf %.4lf\n", 1238.12347);
  printf("    printf %.1400lf\n", pow(10., -308.));
  ft_printf(" ft_printf %.1400lf\n", pow(10., -308.));
  printf("    printf %.1400lf\n", pow(10., 308.));
  ft_printf(" ft_printf %.1400lf\n", pow(10., 308.));
  printf("    printf % +#15.e\n", x1);
  ft_printf(" ft_printf % +#15.e\n", x1);
  printf("    printf %.e|\n", 0.);
  ft_printf(" ft_printf %.e|\n", 0.);
  printf("    printf %#.f\n", 0.);
  ft_printf(" ft_printf %#.f\n", 0.);
  printf("    printf %#.e|\n", 0.);
  ft_printf(" ft_printf %#.e|\n", 0.);
  printf("    printf %.f\n", 0.);
  ft_printf(" ft_printf %.f\n", 0.);
  printf("    printf %#.f\n", 0.);
  ft_printf(" ft_printf %#.f\n", 0.);
  printf("    printf %+0#15.f\n", 0.);
  ft_printf(" ft_printf %+0#15.f\n", 0.);
  printf("    printf %+#.12e\n", 0.);
  ft_printf(" ft_printf %+#.12e\n", 0.);
  printf("    printf %Lf\n", n);
  ft_printf(" ft_printf %Lf\n", n);
  printf("    printf %-#12.f|\n", n4);
  ft_printf(" ft_printf %-#12.f|\n", n4);
  printf("    printf %#015.2Le\n", n1);
  ft_printf(" ft_printf %#015.2Le\n", n1);
  printf("    printf %Lf\n", n2);
  ft_printf(" ft_printf %Lf\n", n2);
  printf("    printf %+ 15.1Lf\n", n2);
  ft_printf(" ft_printf %+ 15.1Lf\n", n2);
  printf("    printf %#015.Lf\n", n2);
  ft_printf(" ft_printf %#015.Lf\n", n2);
  printf("    printf %Le\n", n3);
  ft_printf(" ft_printf %Le\n", n3);
  printf("    printf %0+50.150Lf\n", n3);
  ft_printf(" ft_printf %0+50.150Lf\n", n3);
  printf("    printf %.f\n", n5);
  ft_printf(" ft_printf %.f\n", n5);
  printf("    printf %#.e\n", n6);
  ft_printf(" ft_printf %#.e\n", n6);
  printf("    printf %.e\n", n6);
  ft_printf(" ft_printf %.e\n", n6);
  printf("    printf %#.Le\n", n3);
  ft_printf(" ft_printf %#.Le\n", n3);
  printf("    printf %.Le\n", n3);
  ft_printf(" ft_printf %.Le\n", n3);
  printf("    printf %.14g\n", b);
  ft_printf(" ft_printf %.14g\n", b);
  printf("    printf %.g\n", b6);
  ft_printf(" ft_printf %.g\n", b6);
  printf("    printf %#.g\n", b);
  ft_printf(" ft_printf %#.g\n", b);
  printf("    printf %#.Lg\n", b3);
  ft_printf(" ft_printf %#.Lg\n", b3);
  printf("    printf %.Lg\n", b3);
  ft_printf(" ft_printf %.Lg\n", b3);
  printf("    printf %#.Lg\n", b2);
  ft_printf(" ft_printf %#.Lg\n", b2);
  printf("    printf %.Lg\n", b2);
  ft_printf(" ft_printf %.Lg\n", b2);
  printf("    printf %.5g\n", b6);
  ft_printf(" ft_printf %.5g\n", b6);
  printf("    printf %#.25g\n", x);
  ft_printf(" ft_printf %#.25g\n", x);
  printf("    printf %.150g\n", x);
  ft_printf(" ft_printf %.150g\n", x);
  printf("    printf %.1400lf\n", pow(9., -308.));
  ft_printf(" ft_printf %.1400lf\n", pow(9., -308.));
}

void  test_c()
{
  char c = 'a';
  wchar_t t = L'€';

  printf("\n\ntest handle c\n\n");
  printf("    printf %0#15.c\n", c);
  ft_printf(" ft_printf %0#15.c\n", c);
  printf("    printf %lc\n", t);
  ft_printf(" ft_printf %lc\n", t);
  printf("    printf %c\n", t);
  ft_printf(" ft_printf %c\n", t);
}

void  test_s()
{
  char *st = NULL;
  wchar_t *s = NULL;
  wchar_t *p = L"€€€€€€";
  char *str = "Hello world";

  printf("\n\ntest handle s\n\n");
  printf("null\n");
  printf("    printf %.4s\n", st);
  ft_printf(" ft_printf %.4s\n", st);
  printf("\nreturn    printf %d\n", printf("%.4s", str));
  printf("\n");
  printf("\nreturn ft_printf %d\n", ft_printf("%.4s", str));
  printf("\n");
}

void  test_versions()
{
  FILE *fp;
  char *vas_str = NULL;
  char *vs_str = NULL;
  char vsn_str[15];
  char vn_str[15];
  char str[4];
  char str1[4];

  printf("\n\ntest printf versions\n\n");
  printf("ft_asprintf return %d\n", ft_asprintf(&vas_str, "Hello %0500hd\n", 12));
  printf("ft_asprintf result %s|\n", vas_str);
  printf("   asprintf return %d\n", asprintf(&vs_str, "Hello %0500hd\n", 12));
  printf("   asprintf result %s|\n", vs_str);
  fp = fopen("test", "w");
  printf("ft_fprintf return %d\n", ft_fprintf(fp, "Hello %05hd\n", 158));
  fclose(fp);
  fp = fopen("test1", "w");
  printf("   fprintf return %d\n", fprintf(fp, "Hello %05hd\n", 158));
  fclose(fp);
  printf("return ft_dprintf %d\n", ft_dprintf(2, "Hello %05hd\n", 12));
  printf("return    dprintf %d\n", dprintf(2, "Hello %05hd\n", 12));
  printf("return ft_sprintf %d %s\n", ft_sprintf(vsn_str, "Hello %05hd\n", 12), vsn_str);
  printf("return    sprintf %d %s\n", sprintf(vn_str, "Hello %05hd\n", 12), vn_str);
  printf("return ft_snprintf %d\n%s\n", snprintf(str, 4, "%s", "1234567890"), str);
  printf("return    snprintf %d\n%s\n", ft_snprintf(str1, 4, "%s", "1234567890"), str1);
}

void  test_dispatcher()
{
  printf("\n\ntest %\n\n");
  printf("   printf Hello%%dM%<%%%\n");
  ft_printf("ft_printf Hello%%dM%<%%%\n");
  printf("   printf %%%\n");
  ft_printf("ft_printf %%%\n");
  printf("   printf %%%%d\n", 1);
  ft_printf("ft_printf %%%%d\n", 1);
}

void  test_numbered()
{
  int n = 15;
  int d = 4;

  printf("\n\ntest numbered arguments\n\n");
  printf("    printf %1$*1$.*1$d\n", 10);
  ft_printf(" ft_printf %1$*1$.*1$d\n", 10);
  printf("    printf %3$0*1$.*2$s\n", 18, 5, "Hello world");
  ft_printf(" ft_printf %3$0*1$.*2$s\n", 18, 5, "Hello world");
  printf("    printf %3$#*2$.*1$g\n", 4, 10, 9.99999);
  ft_printf(" ft_printf %3$#*2$.*1$g\n", 4, 10, 9.99999);
  /* You're not supposed to use both formats */
  printf("\ntest undefined behaviour\n");
  printf("    printf %+0**1$d\n", 10, 4);
  ft_printf(" ft_printf %+0**1$d\n", 10, 4);
  printf("    printf %+0*1$*d\n", 10, 4);
  ft_printf(" ft_printf %+0*1$*d\n", 10, 4);
  printf("    printf %+01$*3$.*2$f\n", 1., 4, 12);
  ft_printf(" ft_printf %+01$*3$.*2$f\n", 1., 4, 12);
  printf("    printf %1$*d\n", 10, 4);
  ft_printf(" ft_printf %1$*d\n", 10, 4);
  printf("\nregular tests\n");
  printf("    printf %1$*4$.*8$x\n", 10, 4, 5, 6, 8, 9, 5, 1);
  ft_printf(" ft_printf %1$*4$.*8$x\n", 10, 4, 5, 6, 8, 9, 5, 1);
  printf("    printf %1$*2$.*3$f\n", 1., 4, 2);
  ft_printf(" ft_printf %1$*2$.*3$f\n", 1., 4, 2);
  printf("    printf %01$*3$.*2$f\n", 1., 4, 8);
  ft_printf(" ft_printf %01$*3$.*2$f\n", 1., 4, 8);
  printf("    printf %01$+3$.*2$f\n", 1., 4, 8);
  ft_printf(" ft_printf %01$+3$.*2$f\n", 1., 4, 8);
  printf("    printf %01$+*3$.*2$f\n", 1., 4, 8);
  ft_printf(" ft_printf %01$+*3$.*2$f\n", 1., 4, 8);
  printf("    printf %1$2$3$f\n", 1., 4, 8);
  ft_printf(" ft_printf %1$2$3$f\n", 1., 4, 8);
  printf("    printf %1$2$3$f\n", 1., 4, 8);
  ft_printf(" ft_printf %1$2$3$f\n", 1., 4, 8);
  printf("    printf %1$*2$*3$f\n", 1., 4, 12);
  ft_printf(" ft_printf %1$*2$*3$.*1$f\n", 1, 4, 12);
}

void  test_b()
{
  printf("\n\ntest handle b\n\n");
  ft_printf(" ft_printf %0.15b\n", 0);
  ft_printf(" ft_printf %0b\n", 0);
  ft_printf(" ft_printf %b\n", 2147483647);
  ft_printf(" ft_printf %012.0b\n", 125);
}

void  test_handle_empty()
{
  printf("\n\ntest handle empty\n\n");
  printf("   printf %#0+ 15.12m\n", 3);
  ft_printf("ft_printf %#0+ 15.12m\n", 3);
  printf("   printf %#0+ -15.12", 3);
  printf("\n");
  ft_printf("ft_printf %#0+ -15.12", 3);
  printf("\n");
}

void  test_null()
{
  printf("\n\ntest null pointers\n\n");
  printf("    printf %p\n", 0);
  ft_printf(" ft_printf %p\n", 0);
  printf("    printf %s\n", 0);
  ft_printf(" ft_printf %s\n", 0); 
  printf("    printf %p\n", NULL);
  ft_printf(" ft_printf %p\n", NULL);
  printf("    printf %s\n", NULL);
  ft_printf(" ft_printf %s\n", NULL); 
}

void  test_format()
{
  char *format = NULL;
  char *res;
  char *res1;
  int fd = -1;

  printf("\n\ntest illegal input (versions)\n\n");
  printf("ft_printf return %d", ft_printf(format, 1, 2));
  printf("\n");
  printf("   printf return %d", printf(format, 1, 2));
  printf("\n");
  printf("ft_asprintf return %d", ft_asprintf(&res, format, 1, 2));
  printf("\n");
  printf("   asprintf return %d", asprintf(&res1, format, 1, 2));
  printf("\n");
  printf("ft_printf return %d", ft_dprintf(fd, "%d %d\n", 1, 2));
  printf("\n");
  printf("   printf return %d", dprintf(fd, "%d %d\n", 1, 2));
  printf("\n");
  printf("ft_fprintf return %d", ft_fprintf(NULL, "%d %d\n", 1, 2));
  printf("\n");
  printf("fprintf segfaults on this\n");
  // printf("   fprintf return %d", fprintf(NULL, "%d %d\n", 1, 2));
  printf("ft_snprintf return %d", ft_snprintf(format, 4, "%d %d\n", 1, 2));
  printf("\n");
  // printf("   snprintf return %d", snprintf(format, 4, "%d %d\n", 1, 2));
  printf("snprintf segfaults on this\n");
  printf("ft_sprintf return %d", ft_sprintf(format, "%d %d", 1, 2));
  printf("\n");
  // printf("   sprintf return %d", sprintf(format, "%d %d", 1, 2));
  // printf("\n");
  printf("sprintf segfaults on this\n");

}

void  test_all()
{
  test_dispatcher();
  test_versions();
  test_d();
  test_b();
  test_null();
  test_numbered();
  test_unsigned();
  test_ef();
  test_c();
  test_s();
  test_handle_empty();
  test_format();
}
int	main()
{
  setlocale(LC_ALL, "");

  test_all();
}
