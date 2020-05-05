#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Tugas nomor 1.
    int n;
    printf("Masukkan Jumlah nilai n: ");
    scanf("%d", &n);
    printf("========================\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("x");
        }
        printf("\n");
    }


    //Tugas Nomor 2.
    char huruf[5] = {'A', 'B', 'C', 'D', 'E'};
    int nilai;

    printf("\n");
    printf("Tugas Nomor 2\n");
    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);
    printf("=================\n");

    if (nilai >= 85 && nilai <= 100)
    {
        printf("Nilai Huruf: %c\n", huruf[0]);
    }
    else if (nilai >= 75 && nilai <= 84)
    {
        printf("Nilai Huruf: %c\n", huruf[1]);
    }
    else if (nilai >= 65 && nilai <= 74)
    {
        printf("Nilai Huruf: %c\n", huruf[2]);
    }
    else if (nilai >= 55 && nilai <= 64)
    {
        printf("Nilai Huruf: %c\n", huruf[3]);
    }
    else if (nilai >= 0 && nilai <= 54)
    {
        printf("Nilai Huruf: %c\n", huruf[4]);
    }
    else
    {
        printf("Maaf Nilai Yang Anda Massukan Salah\nMohon Coba Lagin\n");
    }

    //Tugas Nomor 2.
    printf("\n");
    printf("Tugas Nomor 3\n");
    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);
    printf("====================\n");

    if (nilai % 2 == 0)
    {
        printf("Nilai ini adalah GENAP\n");
    }
    else
    {
        printf("Nilai ini adalah GANJIL\n");
    }
    return 0;
}
