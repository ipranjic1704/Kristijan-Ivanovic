#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void aps_vrijednost();

char menu()
{
    char izbor;
    printf("Izaberi vrstu programa s kojom želiš raditi.\n");
    printf("1. Apsolutna vrijednost\n");
    printf("2. Percentili\n");
    printf("3. Konverzija brojevnih sustava\n");
    printf("4. Hiperbolički tangens\n");
    printf("5. Inverz matrice 2x2\n");
    printf("6. Eksponencijalna distribucija\n");
    printf("7. Narcisoidni broj\n");
    printf("8. Izračun koeficijenta korisnosti\n");
    printf("X ----> izlaz iz programa\n");
    printf("IZBOR:");
    scanf(" %c", &izbor);

    if(izbor == '1')
    {
       aps_vrijednost();
    }
    else if(izbor == '2')
    {
        //funkcija
    }
    else if(izbor == '3')
    {
        //funkcija
    }
    else if(izbor == '4')
    {
        //funkcija
    }
    else if(izbor == '5')
    {
        //funkcija
    }
    else if(izbor == '6')
    {
        //funkcija
    }
    else if(izbor == '7')
    {
        //funkcija
    }
    else if(izbor == '8')
    {
        //funkcija
    }

    return izbor;
}

int main()
{
    char c;
    do
    {
        c = menu();
    } while (c != 'X' && c != 'x');


    return 0;
}


void aps_vrijednost()
{
    float a;
    printf("Unesi a: ");
    scanf("%f", &a);
    float aps_a;
    aps_a = fabs(a);
    printf("Apsolutna vrijednost unesenog broja je %f", aps_a);

    printf("\n\n\n");
}

