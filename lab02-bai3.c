#include <stdio.h>
#include <conio.h>
main()
{
float so_thu_nhat, so_thu_hai;
float tong;
float hieu;
float tich;
float thuong;
printf("nhap so nguyen thu nhat\n");
scanf("%f",&so_thu_nhat);
printf("nhap so nguyen thu hai\n");
scanf("%f",&so_thu_hai);
tong = so_thu_nhat + so_thu_hai;
printf("tong cua hai so la  %.0f\n",tong);

hieu = so_thu_nhat - so_thu_hai;
printf("hieu cua hai so la  %.0f\n",hieu);

tich = so_thu_nhat * so_thu_hai;
printf("tich cua hai so la  %.0f\n",tich);

thuong = so_thu_nhat / so_thu_hai;
printf("thuong cua hai so la  %.2f\n",thuong);


}


