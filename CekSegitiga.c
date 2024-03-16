//Nama File        : cekSegitiga
//Deskripsi        : Mengetahui bentuk segitiga berdasarkan input sisi
//Pembuat          : Ananda Bintang Pratama
//Tanggal Pembuatan: 28/02/24

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int s1, s2, s3;

    //Algoritma
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);
    if(s1 >= 1 && s2 >= 1 && s3 >= 1){
        if(s1 == s2 && s1 == s3 && s2 == s3){
            printf("Segitiga Sama Sisi");
        }
        else if(s1 == s2 || s1 == s3 || s2 == s3){
            printf("Segitiga Sama Kaki");
        }
        else{
            printf("Segitiga Sembarang");
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }

    return 0;
}
