#include <stdio.h>
#include <limits.h>
void visualizza(int arr[], int *p)
{
    for (int i = 0; i < *p; i++)
    {
        printf("%d ", arr[i]);
    }
}
void inserimento(int arr[], int *i)
{
    scanf("%d", &arr[*i++]);
}

void modifica(int arr[], int pos)
{
    int num;
    scanf("%d", &num);
    arr[pos] = num;
}
void elimina(int arr[], int pos, int dim)
{
    for (int i = pos + 1; i < dim; i++)
    {
        arr[i - 1] = arr[i];
    }
}
int ricerca(int arr[], int num, int DIM)
{
    for (int i = 0; i < DIM; i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}
int main()
{
    int num, i = 0, opz, pos, ric;
    int arr[SHRT_MAX];
    printf("Inserisci dei numeri\n");
    do
        {
            scanf("%d", &num);
            arr[i] = num;
            i++;
        } while (num != -1);
    do
    {
        printf("\n");
        printf("premere 1 per mostrare il contenuto dell'array\n");
        printf("premere 2 per inserire un elemento in coda\n");
        printf("premere 3 per cambiare un elemento\n");
        printf("premere 3 per cambiare un elemento\n");
        printf("premere 3 per cambiare un elemento\n");
        printf("premere 4 per eliminare un elemento\n");
        printf("premere 5 per ricercare un elemento\n");
        printf("premere 0 per terminare\n");
        printf("\n");
        do
        {
            printf("Scegli un'opzione: ");
            scanf("%d", &opz);
        } while (opz < 0 && opz > 6);
        switch (opz)
        {
        case 1:
            printf("Gli elementi dell'array sono:\n");
            visualizza(arr, &i);
            break;
        case 2:
            printf("Inserisci il numero che vuoi mettere in coda:\n");
            inserimento(arr, &i);
            break;
        case 3:
            printf("In che posizione vuoi modificare l'elemento?\n");
            do
            {
                scanf("%d", &pos);
            } while (pos > 0 && pos < i);
            printf("Inserisci un numero\n");
            modifica(arr, pos);
            break;
        case 4:
            printf("In che posizione vuoi eliminare l'elemento?\n");
            do
            {
                scanf("%d", &pos);
            } while (pos > 0 && pos < i);
            elimina(arr, pos, i);
            break;
        case 5:
            printf("Quale è il numero che vuoi ricercare?\n");
            scanf("%d", &ric);
            ric = ricerca(arr, ric, i);
            if (ric == -1)
                printf("L'elemento ricercato non è presente nell'array\n");
            else
                printf("L'elemento si torva in posizione %d\n", ric);
            break;
        }
    } while (opz != 0);
    return 0;
}
