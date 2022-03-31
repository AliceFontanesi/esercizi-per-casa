#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int num, pos;
    printf("Inserisci il numero da cercare: \n");
    scanf("%d", &num);
    pos = posizione(argc, argv, num);
    if(pos < 0)
        printf("Numero non presente");
    else
        printf("Il numero si trova in posizione %d", pos);
    return 0;
}
int posizione(int dim, char **arr, int num)
{
    for (int i = 1; i < dim; i++) {
        if(num == atoi(arr[i]))
            return i;
    }
    return -1;
}
