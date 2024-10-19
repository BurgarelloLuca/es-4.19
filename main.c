#include <stdio.h>

int main() {
    int i;
    int n;
    int primo;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    for(i=2; i<n; i++) {
        if(n%i==0) {
            primo=1;
        }
    }
    if(primo==1) {
            printf("Il numero non e' primo");
        }else {
            printf("Il numero e' primo");
        }
        return 0;
    }
