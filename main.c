#include <stdio.h>

int main()
{
    unsigned int milk = 0, sugar = 0;
    double price;

    if(milk== 0 && sugar == 0){
        printf("Kaffee so schwarz wie mein Humor\n");
    } else if(milk != 0 && sugar != 0){
        printf("Kaffee mit Milch und Zucker\n");
    } else if(milk == 0 && sugar == 1){
        printf("Kaffee mit Zucker ohne Milch\n");
    } else if(milk == 1 && sugar == 0){
        printf("Kaffee mit Milch ohne Zucker\n");
    } else {
        printf("Ausnahmefehler! Informieren Sie den Kundendienst!\n");
    }

    printf("\n\n");
    return 0;
}
