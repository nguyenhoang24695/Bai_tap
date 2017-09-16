#include <stdio.h>
#include <stdlib.h>

main() {
    int q;
    int *px;
//    Nhập số lượng giá trị cho mảng
    printf("Nhap so luong gia tri cho bo nho: \n");
    scanf("%i", &q);
//    Dùng funtion calloc để xác định số lượng bộ nhớ cần cung cấp
      px = (int *) calloc(q,sizeof(int));
//    Vòng lặp để nhập giá trị
    for (int i = 0; i < q; ++i) {
        printf("Nhap gia tri vao cho tung bo nho: ");
        scanf("%i", px + i);
    }
//    Lệnh in ra địa chỉ bộ nhớ đã nhập
    printf("Dia chi bo nho da nhap la:\n");
    for (int j = 0; j < q; ++j) {
        printf("Dia chi Gia tri thu %i la: %d\n", j + 1, px + j);
    }
} 