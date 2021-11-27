#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main()
{
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
        setColor(4);
        printf("\nPilihan salah, enter untuk mengulang");
        setColor(15);
        getch();
        main();
        break;
    }
}

void rumahPola()
{
    int tinggi;
    char komponen;
    int depan;

    printf("Tentukan tinggi dari cerobong, atap dan dinding :");
    scanf(" %d", &tinggi);
    printf("Masukkan komponen rumah :");
    scanf(" %c", &komponen);

    for(int i=0; i<tinggi; i++)
    {
        setColor(15);
        for(int k=0; k<tinggi; k++)
        {
            printf(" ");
        }
        for(int j=0; j<tinggi; j++)
        {
            printf("%c", komponen);
        }
        printf("\n");
    }
    for(int i=1; i<=tinggi; i++)
    {
        setColor(1);
        for(int k=1; k<=tinggi-i; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=(2*i-1); j++)
        {
            printf("%c", komponen);
            depan=j;
        }
        for(int l=1; l<=(tinggi*3); l++)
        {
            setColor(4);
            printf("%c", komponen);
        }
        printf("\n");
    }
    for(int i=1; i<=tinggi; i++)
    {
        setColor(14);
        for(int j=1; j<=depan; j++)
        {
            printf("%c", komponen);
        }
        for(int l=1; l<=(tinggi*3); l++)
        {
            setColor(2);
            printf("%c", komponen);
        }
        printf("\n");
        setColor(15);
    }
    printf("\nEnter untuk kembali");
    getch();
    main();
}

void tokoWarisanFTI()
{
    char beli_lagi;
    char nama_barang[10][30];
    strcpy(nama_barang[0], "Flash Disk Toshiba 4 GB");
    strcpy(nama_barang[1], "Flash Disk Toshiba 8 GB");
    strcpy(nama_barang[2], "Flash Disk Toshiba 16 GB");
    strcpy(nama_barang[3], "Flash Disk Toshiba 32 GB");
    strcpy(nama_barang[4], "Flash Disk Sandisk 4 GB");
    strcpy(nama_barang[5], "Hard Disk WD 500 GB");
    strcpy(nama_barang[6], "Hard Disk WD 1 TB");
    strcpy(nama_barang[7], "Hard Disk Dell 500 GB");
    strcpy(nama_barang[8], "Hard Disk Dell 1 TB");
    strcpy(nama_barang[9], "Tongsis");
    int harga_barang[10] = {50000, 65000, 90000, 110000, 75000, 700000, 900000, 670000, 800000, 60000};
    int keranjang[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int menu=1, jml, total, total_semua=0, uang, kembali=0, id;

    printf("\n\t-------------------------------------------------\n");
    printf("\t|      Daftar dan Harga Barang Toko FTI         |\n");
    printf("\t|-----------------------------------------------|\n");
    printf("\t| ID  |  Nama Barang            | Harga Barang  |\n");
    printf("\t|-----|-----------------------------------------|\n");
    printf("\t| 1.  | Flash Disk Toshiba 4 GB | Rp. 50000     |\n");
    printf("\t| 2.  | Flash Disk Toshiba 8 GB | Rp. 65000     |\n");
    printf("\t| 3.  | Flash Disk Toshiba 16GB | Rp. 90000     |\n");
    printf("\t| 4.  | Flash Disk Toshiba 32GB | Rp. 110000    |\n");
    printf("\t| 5.  | Flash Disk Sandisk 4 GB | Rp. 75000     |\n");
    printf("\t| 6.  | Hard Disk WD 500 GB     | Rp. 700000    |\n");
    printf("\t| 7.  | Hard Disk WD 1 TB       | Rp. 900000    |\n");
    printf("\t| 8.  | Hard Disk Dell 500 GB   | Rp. 670000    |\n");
    printf("\t| 9.  | Hard Disk Dell 1 TB     | Rp. 800000    |\n");
    printf("\t|10.  | Tongsis                 | Rp. 60000     |\n");
    printf("\t|-----------------------------------------------|\n\n\n");


    int id_keranjang = 0;

    do{
    printf("Masukkan Kode Belanjaan Anda : ");
    scanf("%d",&menu);
    id = menu - 1;

        if(menu>=1&&menu<=10)
        {
            keranjang[id_keranjang] = id;
            printf("Item anda : %s \n", nama_barang[id]);
            printf("Jumlah Pembelian Item : ");
            scanf("%d",&jml);
            total=harga_barang[id]*jml;
            total_semua += total;
            printf("beli lagi? (y/n) : ");
            scanf("%s", &beli_lagi);
            if(beli_lagi=='y'){
                id_keranjang++;
            }
        }
        else
        {
            printf("Menu Pilihan Kamu Tidak Ada !!!\n");
        }
    }
    while(beli_lagi=='y');


    setColor(14);
    printf("\n\nStruck Belanja");
    printf("\n----------------");
    printf("\nDaftar Barang : ");
    for(int i=0; i<10; i++){
        if(keranjang[i]== -1){
            continue;
        }else{
            printf("%s, ", nama_barang[keranjang[i]]);
        }
    }
    printf("\nTotal yang harus dibayar : Rp. %d,-", total_semua);
    do
    {
        printf("\nUang Anda : Rp. ");
        scanf("%d", &uang);
        if(uang >= total_semua)
        {
            kembali = uang - total_semua;
            printf("Kembalian : Rp. %d", kembali);
        }
        else
        {
            printf("Uang anda kurang!");
        }
    }while(uang < total_semua);

    setColor(15);
    printf("\n\nEnter untuk kembali");
    getch();
    main();
}

void bendera()
{
    int input, c, l=1, z=1, q=1;

    printf("Tuliskan ukuran bendera : ");
    scanf("%d", &input);

    for (int n=1; n<=3; n++)
    {
        for (int i=1; i<=input; i++)
        {
            for(int m=1; m<=3; m++)
            {
                for(int j=1; j<=i; j++)
                {
                    setColor(11);
                    printf("x ");
                }
                for(int k=input; k>=i; k--)
                {
                    setColor(4);
                    printf("y ");
                }
            }
            printf("\n");
        }
    }

    setColor(15);
    printf("\nEnter untuk kembali");
    getch();
    main();
}
void author()
{
    int x;
    double y;
    char text1[]=    "\n\n \t\t\t Oleh : ";
    char text2[]=    "\n\n \t\t\t - Yosafat Rendi Prayoga ";
    char text3[]=    "\n\n \t\t\t 672021055 ";
    char text4[]=    "\n\n \t\t\t - Lanyta Setyani Gunawan ";
    char text5[]=    "\n\n \t\t\t 672021047 ";
    printf("\n");
    setColor(14);
    for(x=0; text1[x]!=NULL; x++)
    {
        printf("%c",text1[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    setColor(9);
    printf("\n");
    for(x=0; text2[x]!=NULL; x++)
    {
        printf("%c",text2[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    for(x=0; text3[x]!=NULL; x++)
    {
        printf("%c",text3[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    setColor(13);
    printf("\n");
    for(x=0; text4[x]!=NULL; x++)
    {
        printf("%c",text4[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    for(x=0; text5[x]!=NULL; x++)
    {
        printf("%c",text5[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    setColor(15);
    printf("\n\nEnter untuk kembali");
    getch();
    main();
}

void exitt()
{
    int x;
    double y;
    char text1[]=    "\n\n \t\t\t SEE YOU ";
    char text2[]=    "\n\n \t BYE BYE! ";
    char text3[]=    "\t\t\t DADAH! ";
    char text4[]=    "\n\n \t\t\t <(^_^)> ";
    printf("\n");
    setColor(14);
    for(x=0; text1[x]!=NULL; x++)
    {
        printf("%c",text1[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    setColor(11);
    printf("\n");
    for(x=0; text2[x]!=NULL; x++)
    {
        printf("%c",text2[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    for(x=0; text3[x]!=NULL; x++)
    {
        printf("%c",text3[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    setColor(14);
    printf("\n");
    for(x=0; text4[x]!=NULL; x++)
    {
        printf("%c",text4[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    getch();
    system("taskkill/IM cb_console_runner.exe");
}

void setColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
