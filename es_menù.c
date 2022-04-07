#include <stdio.h>
#define DIM 100
int main()
{
    int num, i = 0, opz, pos, ric;
    int arr[DIM];
    printf("Inserisci dei numeri");
    do
    {
        scanf("%d", &num);
        arr[i] = num;
        i++;
    } while (num != -1);
    printf("premere 1 per mostrare il contenuto dell'array\n");
    printf("premere 2 per inserire un elemento in coda\n");
    printf("premere 3 per cambiare un elemento\n");
    printf("premere 3 per cambiare un elemento\n");
    printf("premere 3 per cambiare un elemento\n");
    printf("premere 4 per eliminare un elemento\n");
    printf("premere 5 per ricercare un elemento\n");
    printf("premere 0 per terminare\n");
    do
    {
        printf("Scegli un'opzione");
        scanf("%d", &opz);
    } while (opz < 0 && opz > 5);
    switch (opz)
    {
        case 1:
            printf("Gli elementi dell'array sono:\n");
            visualizza(arr, DIM)
            break;
        case 2:
            printf("Inserisci un numero:\n");
            inserimento(arr, &i)
            break;
        case 3:
            printf("In che posizione vuoi modificare l'elemento?\n");
            do
            {
               scanf("%d", &pos);
            } while (pos > 0 && pos < DIM);
            modifica(arr, pos);
            break;
        case 4:
            printf("In che posizione vuoi eliminare l'elemento?\n");
            do
            {
               scanf("%d", &pos);
            } while (pos > 0 && pos < DIM);
            elimina(arr, pos, DIM);
            break;
        case 5:
            printf("Quale è il numero che vuoi ricercare?\n");
            scanf("%d", &ric);
            ric = ricerca(arr, ric, DIM)
            if (ric == -1)
                printf("L'elemento ricercato non è presente nell'array\n");
            else
                printf("L'elemento si torva in posizione %d\n", ric);
            break;
            case 0:
                return 0; //da rivedere
                break;
    }
    void visualizza(int arr[], int DIM)
    {
        for (int i = 0; i < DIM; i++)
        {
            printf(arr[i] + " ");   
        }
    }
    void inserimento(int arr[], int *i)
    {
        scanf("%d", &arr[*i++];)
    }
    void modifica(int arr[], pos)
    {
        int num;
        scanf("%d", &num);
        arr[pos] = num;
    }
    void elimina(int arr[], int pos, int DIM)
    {
        for (int i = pos + 1; i < DIM; i++)
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
}
