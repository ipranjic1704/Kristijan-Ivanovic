#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void aps_vrijednost();
void percentili();


int usporedi(const void *a, const void *b)
{
    float fa = *(const float*)a;
    float fb = *(const float*)b;
    if (fa < fb)
        return -1;
    if (fa > fb)
        return 1;
    return 0;
}


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
    scanf(" %c", &izbor);       //Stavljamo razmak ispred %c kako bi scanf zanemari \n za koji postoji mogucnost da se ucita kroz scanf

    if(izbor == '1')
    {
       aps_vrijednost();
    }
    else if(izbor == '2')
    {
        percentili();
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

void percentili()
{
    int a;
    printf("Unesi koliko elemenata zelis imati: ");
    scanf("%d", &a);
    float polje[a];

    for(int i = 0; i < a; i++) {
        printf("Unesi %d. element polja: ", i+1);
        scanf("%f", &polje[i]);
    }

    // Sortiraj niz
    qsort(polje, a, sizeof(float), usporedi);

    int perc;
    printf("Unesi percentil koji trazis (1-99): ");
    scanf("%d", &perc);

    if (perc <= 0 || perc >= 100) {
        printf("Percentil mora biti između 1 i 99.\n");
        return;
    }

    // Izračun pozicije
    float poz = (perc / 100.0) * (a - 1); // a-1 jer indeksi idu od 0
    int donja = (int)poz;
    int gornja = donja + 1;
    float tezina = poz - donja;

    float vrijednost;
    if (gornja < a) {
        vrijednost = polje[donja] + tezina * (polje[gornja] - polje[donja]);
    } else {
        vrijednost = polje[donja]; // ako je pozicija točno na kraju
    }

    printf("\n%d. percentil iznosi: %.2f\n", perc, vrijednost);

    printf("\n\n");
}
