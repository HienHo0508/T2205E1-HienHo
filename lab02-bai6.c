#include <stdio.h>
int main()
{int somon;
int diemthi;
int tongcong;
int diemtrungbinh;
tongcong =0;
somon = 1;
while (somon <=3){printf("nhap diem thi\n");
scanf("%d",&diemthi);
tongcong =tongcong + diemthi;
somon = somon + 1;
}
printf("tong cong diem 3 mon toan ly hoa la%d",tongcong);

diemtrungbinh = tongcong /3;

printf("diem trung binh la %d\n",diemtrungbinh);


return 0;
}


// bai tap nhom 1: Vong lap While ket hop If
