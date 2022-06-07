#include <stdio.h>
int main()
{float so_buoi_hoc=20;
float so_buoi_co_mat;
float diem_toi_da=20;
float diem_thi;
printf("Tong ket mon ly thuyet\n");

printf("nhap so buoi co mat mon ly thuyet\n");
scanf("%f",&so_buoi_co_mat);



if (so_buoi_co_mat < (0.75*so_buoi_hoc )) {printf("ban phai hoc lai ly thuyet\n");}
else  {printf("ban du dieu kien thi ly thuyet\n");

printf("nhap diem thi ly thuyet \n");
scanf("%f",&diem_thi);



if ( diem_thi >=(0.6*diem_toi_da)) {printf("thi dat ly thuyet\n");}
else {printf("thi truot ly thuyet\n");}}

float so_buoi_hocth=20;
float so_buoi_co_matth;
float diem_toi_dath=15;
float diem_thith;
printf("Tong ket mon thuc hanh\n");

printf("nhap so buoi co mat mon thuc hanh\n");
scanf("%f",&so_buoi_co_matth);



if (so_buoi_co_matth < (0.75*so_buoi_hocth)) {printf("ban phai hoc lai thuc hanh\n");}
else {printf("ban du dieu kien thi thuc hanh\n");
printf("nhap diem thi thuc hanh\n");
scanf("%f",&diem_thith);
if (diem_thith >= (0.6*diem_toi_dath)) {printf("thi dat thuc hanh\n");}
else {printf("thi truot thuc hanh\n");}}

float so_buoi_hocbtl=20;
float so_buoi_co_matbtl;
float diem_toi_dabtl=10;
float diem_thibtl;
printf("Tong ket mon bai tap lon\n");

printf("nhap so buoi co mat mon bai tap lon\n");
scanf("%f",&so_buoi_co_matbtl);



if (so_buoi_co_matbtl < (0.75*so_buoi_hocbtl )) {printf("ban phai hoc lai bai tap lon\n");}
else {printf("ban du dieu kien thi bai tap lon\n");
printf("nhap diem thi bai tap lon\n");
scanf("%f",&diem_thibtl);
if (diem_thibtl >= (0.6*diem_toi_dabtl)) {printf("thi dat bai tap lon\n");}
else {printf("thi truot bai tap lon\n");}}
return 0;}












