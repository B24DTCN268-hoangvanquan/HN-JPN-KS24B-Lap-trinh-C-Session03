#include <stdio.h>

int main() {
    float Toan, Van, Anh, TongDiem, DiemTrungBinh;
    printf("Nhap diem mon Toan: ");
    scanf("%f", &Toan);
    printf("Nhap diem mon Van: ");
    scanf("%f", &Van);
    printf("Nhap diem mon Anh: ");
    scanf("%f", &Anh);
    TongDiem = Toan + Van + Anh;
    DiemTrungBinh = TongDiem / 3;
    printf("Tong diem: %.2f\n", TongDiem);
    printf("Diem trung binh: %.2f\n", DiemTrungBinh);

    return 0;
}
