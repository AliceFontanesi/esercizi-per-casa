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
