#include <stdio.h>

int main(){
int i,n,min,aux,j;
printf("cuantos numeros guardaras: ");
scanf("%d", &n);

int list[n];
    for(i=0; i<n; i++){
        printf("numero guardado en %d:", i);
        scanf("%d", &list[i]);
    }
    for(i=0; i<n-1; i++){
        min=i;
        for (j= i+1; j<n; j++){
            if(list[j] < list[min]){
                min = j;
            }
        }
        if(min != i){
            aux       = list[min];
            list[min] = list[i];
            list[i]   = aux;
        }
    }
	for(i=0; i<n; i++){
		printf("%d,",list[i]);
	}
}