#include <stdio.h>


int main() {
int x;
x=89 ;

printf("Valeur de la variable x : %d \n",x);

int *y ;
y = &x ;

printf("Valeur de la variable x en passant par le pointeur y : %d\n",*y);
printf("On affecte la valeur 20 via *y\n");

*y=20 ;

printf("Valeur de la variable x :%d",x);


}
