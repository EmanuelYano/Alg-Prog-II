#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

int main(int argc, char **argv){   
    int n;
    char c;
    char n1[100];
    int r[5] = { 0 };
    int i = 0;

    scanf("%d", &n);

    while (i<n)
    {

        scanf("%s %c", n1, &c);

        if (c == 'X'){
            r[0]++;
        }else if (c == 'H'){
            r[1]++;
        }else if (c == 'E'){
            r[2]++;
        }else if (c == 'A'){
            r[3]++;
        }else{
            r[4]++;
        }
        i++;
    }

    printf("%d Hobbit(s)\n", r[0]);
    printf("%d Humano(s)\n", r[1]);
    printf("%d Elfo(s)\n", r[2]);
    printf("%d Anao(s)\n", r[3]);
    printf("%d Mago(s)\n", r[4]);

    return 0;

}