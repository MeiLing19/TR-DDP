#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void main(){
    int menu;
    char ans;

do{
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
        case 1: system("cls") ; polarumah(); break;
        case 2: system("cls") ; tokofti(); break;
        case 3: system("cls") ; bendera(); break;
        case 4: system("cls") ; author(); break;
        case 5: system("cls") ; exittt(); break;
        default: printf("Pilihan Salah Enter untuk mengulang\n") ;getch();system("cls"); break;
    }
}
void bendera(){
        int input, c, l=1, z=1, q=1;

    printf("Tuliskan ukuran bendera : ");
    scanf("%d", &input);

    for(int i=1; i<=1; i++){
        for(int j=1; j<=input; j++){
            for(int k=1; k<=j; k++){
                printf("x ");
            }
            for(int c=input; c>=j; c--){
                printf("y ");
            }
            for(int j=1; j<=l; j++){
                printf("x ");
            }
            for(int c=input; c>=j; c--){
                printf("y ");
            }l++;
            for(int j=2; j<=l; j++){
                printf("x ");
            }
            for(int c=input; c>=j; c--){
                printf("y ");
            }
            printf("\n");
            }
    for(int i=2; i<=2; i++){
        for(int j=1; j<=input; j++){
            for(int k=1; k<=j; k++){
            printf("x ");
            }
            for(int c=input; c>=j; c--){
                printf("y ");
            }
            for(int j=1; j<=z; j++){
                printf("x ");
            }
            for(int c=input; c>=j; c--){
                printf("y ");
            }z++;
            for(int j=2; j<=z; j++){
                printf("x ");
            }
            for(int c=input; c>=j; c--){
                printf("y ");
            }
            printf("\n");
            }
    for(int i=3; i<=3; i++){
        for(int j=1; j<=input; j++){
            for(int k=1; k<=j; k++){
                printf("x ");
            }
            for(int c=input; c>=j; c--){
                printf("y ");
            }
            for(int j=1; j<=q; j++){
                printf("x ");
            }
            for(int c=input; c>=j; c--){
                printf("y ");
            }q++;
            for(int j=2; j<=q; j++){
                printf("x ");
            }
            for(int c=input; c>=j; c--){
                printf("y ");
            }
            printf("\n");
                }
            }
        }
    }
}
    while(menu == 1);
    return 0;
