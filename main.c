#include <stdio.h>
#include <stdlib.h>

void rumahPola();
void tokoWarisanFTI();
void bendera();
void author();
void exitt();

void main(){
    int menu;

    system("cls");
    printf("TR DDP : \n");
    printf("1. Rumah Pola \n");
    printf("2. Toko Warisan FTI \n");
    printf("3. Bendera \n");
    printf("4. Author \n");
    printf("5. Exit \n");
    printf("Pilihan : ");

    scanf("%d", &menu);
    switch(menu)
    {
        system("cls");
        case 1:
            system("cls");
            rumahPola();
            break;
        case 2:
            system("cls");
            tokoWarisanFTI();
            break;
        case 3:
            system("cls");
            bendera();
            break;
        case 4:
            system("cls");
            author();
            break;
        case 5:
            system("cls");
            exitt();
            break;
        default:
            printf("\nPilihan salah, enter untuk mengulang");
            getch();
            main();
            break;
    }
}

void rumahPola(){
    printf("haloo ini rumah pola");
}

void tokoWarisanFTI(){
    printf("haloo ini rumah pola");
}

void bendera(){
    printf("haloo ini rumah pola");
}

void author(){
    printf("haloo ini rumah pola");
}

void exitt(){
    printf("haloo ini rumah pola");
}
