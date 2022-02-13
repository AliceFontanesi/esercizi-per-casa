# include <stdio.h>
int main()
{
    int a, b;
    do
    {
        printf("Inserisci un numero \n");
        scanf("%d", &a);
    } while (a <= 0);
    b = -a;
    printf("I numeri compresi nell'intervallo tra il numero inserito e il suo opposto sono: \n");
    for (int i = b; i <= a; i++)
    {
        printf("%d \n", i);
    }
    return 0;
}
