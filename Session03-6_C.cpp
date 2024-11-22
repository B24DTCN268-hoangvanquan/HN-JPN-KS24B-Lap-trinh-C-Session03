#include <stdio.h>

int main() {
    float CanhDay, ChieuCao, DienTich;
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &CanhDay);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &ChieuCao);
    DienTich = 0.5 * CanhDay * ChieuCao;
    printf("Dien tich tam giac: %.2f\n", DienTich);

    return 0;
}

