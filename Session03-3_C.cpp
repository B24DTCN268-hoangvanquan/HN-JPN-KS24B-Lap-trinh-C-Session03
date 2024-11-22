#include <stdio.h>
#include <math.h>  
int main() {
    float r, ChuVi, DienTich;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    ChuVi = 2 *3.14 * r;  
    DienTich =3.14* r * r;  
    printf("Chu vi hinh tron: %.2f\n", ChuVi);
    printf("Dien tich hinh tron: %.2f\n", DienTich);

    return 0;
}
