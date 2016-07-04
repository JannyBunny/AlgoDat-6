#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMP_NUM 5

const char passw1[] = {"123uhu456"};
const char passw2[] = {"146xyz678"};
const char passw3[] = {"321oha789"};


void pwAbfrage (const char passw[]);
void findString (char *c);
int main(void)
{
    pwAbfrage(passw1);
    char *c1 = "astro";
    char *c2 = "mobil";
    char *c3 = "stift";
    findString(c1);
    findString(c2);
    findString(c3);
    return 0;
}


void pwAbfrage (const char passw[ ])
{
    char pw[10];
    printf("Passwortabfrage: ");
    scanf("%s",&pw);
    int i;
    int korrekt=0;
    for (i=0;i<9;i++)
    {
        //printf("Schleife %d Eingegeben PW[%c]; Passsw[%c] \n",i,pw[i],passw1[i]);
        if (pw[i] == passw[i]) {
            korrekt += 1;
        }
    }
    if (korrekt==i)
        printf("Das Passwort war korrekt!");
    else
        printf("Das Passwort war falsch!");

}
void findString (char *c)
{
    const char * list[ ] = {
                            "astronomie", "stifthalter", "mobile",
                            "sternthaler", "astrophysik", "astronaut", "mobilar",
                            "stiften",  "theater", "stiftfarbe", "mobilitaet"
                            };
    int i;
    int korrekt=0;
    for (i=0;i<11;i++)
    {
        if (strncmp(list[i], c, COMP_NUM)==0)
        {
            korrekt+=1;
        }
    }
    printf("\nFuer String %s gab es %d Treffer",c,korrekt);
}
