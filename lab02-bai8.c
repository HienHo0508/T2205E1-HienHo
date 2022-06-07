#include <stdio.h>
main()
{

int a=15;
float b= 2.34;
char hoccode = "c";
double g= 2.34;
long int d= 15;
long double e= 15;
printf("kieu int: %d bytes\n", sizeof(a));
printf("kieu float: %d bytes\n", sizeof(b));
printf("kieu chart: %d bytes\n", sizeof("c"));
printf("kieu long int: %d bytes\n", sizeof(d));
printf("kieu long double:  %d bytes\n", sizeof(e));
printf("kieu double: %d bytes\n", sizeof(g));
}
