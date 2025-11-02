#include <stdio.h>

int main(void) {
    int k; 

    do{
        printf("Podaj numer:");
        if(scanf("%d", &k) != 1) {//Jeśli wprowadzona zostanie wartość niebędąca liczbą, zostanie ona wyczyszczona.
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        k = 0;
        printf("Błąd: Musisz wprowadzić dodatnią liczbę całkowitą.\n");
        continue;
        }
    if ( k <= 0) {
        printf("Błąd: Liczba musi być większa niż 0.\n");
    }
}while (k <= 0);

printf("\nLiczby z zakresu 50–100, podzielne przez %d:\n", k);

for (int i = 50; i <= 100; i++ ){
    if(i% k == 0){
    printf("%d\n", i);
    }
}
return 0;
}
