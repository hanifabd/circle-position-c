#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Created By
    ///BAGAS ALFIAN FIRMANSYAH (A11.2017.10104)
    ///HANIF YULI ADBILLAH P (A11.2017.10105)
    ///TORIQ ISNANDAR (A11.2017.10124)


    puts("");
    printf("SELAMAT DATANG DI PROGRAM RUMUS KEDUDUKAN 2 LINGKARAN, SELAMAT MENGERJAKAN !!!\n");
    puts("");
    printf("    ***   ***  ********     ***   ****      ***  ***   ***  *********\n");
    printf("    ***   ***  *********    ***   *****     ***  ***   ***  *********\n");
    printf("    ***   ***  ***    ***   ***   ******    ***  ***   ***  ***      \n");
    printf("    ***   ***  ***     ***  ***   *** ***   ***  ***   ***  *********\n");
    printf("    ***   ***  ***     ***  ***   ***  ***  ***  ***   ***  *********\n");
    printf("    ***   ***  ***    ***   ***   ***   *** ***  ***   ***        ***\n");
    printf("    *********  *********    ***   ***    ******  *********  *********\n");
    printf("    *********  ********     ***   ***     *****  *********  *********\n");
    puts("");
    printf("SELAMAT DATANG DI PROGRAM RUMUS KEDUDUKAN 2 LINGKARAN, SELAMAT MENGERJAKAN !!!\n\n");
    system("pause");
    system("cls");

    printf("RUMUS_KEDUDUKAN_2_LINGKARAN\n\n");
    float x21,y21,x1,y1,c1,x22,y22,x2,y2,c2;
    float a1,b1,r1,a2,b2,r2,d, rtot;

    printf("Lingkaran 1\n");
    printf("Kontasta X^2    : ");scanf("%f", &x21);
    printf("Kontasta Y^2    : ");scanf("%f", &y21);
    printf("Kontasta X      : ");scanf("%f", &x1);
    printf("Kontasta Y      : ");scanf("%f", &y1);
    printf("Kontasta C      : ");scanf("%f", &c1);

    puts("");
    printf("Lingkaran 2\n");
    printf("Kontasta X^2    : ");scanf("%f", &x22);
    printf("Kontasta Y^2    : ");scanf("%f", &y22);
    printf("Kontasta X      : ");scanf("%f", &x2);
    printf("Kontasta Y      : ");scanf("%f", &y2);
    printf("Kontasta C      : ");scanf("%f", &c2);

    printf("\n\n--------------------------------------Titik Puncak dan JariJari-----------------------------------------\n");
    printf("\nPersamaan Lingkaran 1 -> %.0fX^2 + %.0fY^2 - %.0fX + %.fY + %.0f", x21,y21,x1,y1,c1);
    if(x1<0 && y1<0)
    {
        a1=abs(x1)/2;
        b1=abs(y1)/2;
        printf("\nTitik Puncak x = %.2f dan y = %.2f ---- (%.2f ; %.2f)", a1, b1, a1, b1);
        r1=sqrt((a1*a1)+(b1*b1) - c1);
        printf("\nJari Jari  = %.2f", r1);
    }
    else if(x1>0)
    {
        a1=-x1/2;
        b1=abs(y1)/2;
        printf("\nTitik Puncak x = %.2f dan y = %.2f ---- (%.2f ; %.2f)", a1, b1, a1, b1);
        r1=sqrt((a1*a1)+(b1*b1) - c1);
        printf("\nJari Jari  = %.2f", r1);
    }
    else if(y1>0)
    {
        a1=abs(x1)/2;
        b1=-y1/2;
        printf("\nTitik Puncak x = %.2f dan y = %.2f ---- (%.2f ; %.2f)", a1, b1, a1, b1);
        r1=sqrt((a1*a1)+(b1*b1) - c1);
        printf("\nJari Jari  = %.2f", r1);
    }
    else if(x1>0 && y1>0)
    {
        a1=-x1/2;
        b1=-y1/2;
        printf("\nTitik Puncak x = %.2f dan y = %.2f ---- (%.2f ; %.2f)", a1, b1, a1, b1);
        r2=sqrt((a1*a1)+(b1*b1) - c1);
        printf("\nJari Jari  = %.2f", r1);
    }

    printf("\n\nPersamaan Lingkaran 2 -> %.0fX^2 + %.0fY^2 - %.0fX + %.0fY + %.0f", x22,y22,x2,y2,c2);
    if(x2<0 && y2<0)
    {
        a2=abs(x2)/2;
        b2=abs(y2)/2;
        printf("\nTitik Puncak x = %.2f dan y = %.2f ---- (%.2f ; %.2f)", a2, b2, a2, b2);
        r2=sqrt((a2*a2)+(b2*b2) - c2);
        printf("\nJari Jari  = %.2f", r2);
    }
    else if(x2>0 && y2<0)
    {
        a2=-x2/2;
        b2=abs(y2)/2;
        printf("\nTitik Puncak x = %.2f dan y = %.2f ---- (%.2f ; %.2f)", a2, b2, a2, b2);
        r2=sqrt((a2*a2)+(b2*b2) - c2);
        printf("\nJari Jari  = %.2f", r2);
    }
    else if(y2>0 && x2<0)
    {
        a2=abs(x2)/2;
        b2=-y2/2;
        printf("\nTitik Puncak x = %.2f dan y = %.2f ---- (%.2f ; %.2f)", a2, b2, a2, b2);
        r2=sqrt((a2*a2)+(b2*b2) - c2);
        printf("\nJari Jari  = %.2f", r2);
    }
    else if(x2>0 && y2>0)
    {
        a2=-x2/2;
        b2=-y2/2;
        printf("\nTitik Puncak x = %.2f dan y = %.2f ---- (%.2f ; %.2f)", a2, b2, a2, b2);
        r2=sqrt((a2*a2)+(b2*b2) - c2);
        printf("\nJari Jari  = %.2f", r2);
    }

    printf("\n\n------------------------------------------------Nilai D-------------------------------------------------\n");
    d=abs(sqrt(((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1))));
    printf("\nJarak Antara Kedua Lingkaran = %.2f", d);

    rtot=r1+r2;
    printf("\n\n------------------------------------------Kedudukan Lingkaran-------------------------------------------");
    if(d>rtot)
    {
        printf("\n\n|D| > RTOTAL \nKedudukan Kedua Lingkaran Adalah Saling Berjauhan\n\n");
    }
    else if(d<rtot)
    {
        printf("\n\n|D| < RTOTAL \nKedudukan Kedua Lingkaran Adalah Saling Berpotongan\n\n");
    }
    else if(d==rtot)
    {
        printf("\n\n|D| = RTOTAL \nKedudukan Kedua Lingkaran Adalah Bersinggungan\n\n");
    }
    return 0;
}
