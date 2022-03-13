//es 1 array
# include <stdio.h>
# define DIM 4
int main()
{
   int i;
   int num[DIM];
   for(i = 0; i < DIM, i++){
       printf("Inseirsci un numero: \n");
       scanf("%d", &num[i]);
   }
   printf("I numeri che sono stati inseriti sono: \n");
   for(i = 0; i < DIM, i++){
       printf("%d ", num[i]);
   }
   return 0;
}

//es 2 array
# include <stdio.h>
# define DIM 5
int main()
{
   int i;
   int[DIM] num;
   for(i = 0; i < DIM, i++){
       printf("Inseirsci un numero: \n");
       scanf("%d", &num[i]);
   }
   printf("I numeri scritti al contrario sono: \n");
   for(i = DIM - 1; i >= 0, i--){
       printf("%d ", num[i]);
   }
   return 0;
}

//es 5 array
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	int i, lungh = 0, j, val = 0;
    char stringa;
    //prendo la lughezza totale della stringa
	for (i = 1; i < argc; i++)
	{
		lungh = lungh + strlen(argv[i]);
	}
    //includo gli spazi e tolgo la pos 1 di argv
	lungh = lungh + argc - 2;
	stringa[lungh];
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			stringa[val] = argv[i][j];
            val++;
		}
		stringa[val] = ' ';
        val++;
	}
	printf("La stringa è: %s", stringa);
	return 0;
}
