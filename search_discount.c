#include <stdlib.h>
#include "list.h"

void search_discount(game *games, int n){

	printf("The list of games with discount:\n");

        for(int i = 0; i<n; i++){
                if (games[i].discount > 0){
                	printf(" Id: %d\n",i+1);
        	        printf("Name: %s\n",games[i].name);
	                printf("Price: %.2f",games[i].price);
                        float discount_price = (games[i].price * (100 - games[i].discount) / 100);
                        printf(" (%.2f)\n",discount_price);
                        printf("Discount: %.0f%%",games[i].discount);
                	printf("\nDeveloper: %s\n", games[i].developer);
                	printf("Weight: %.2f GB\n", games[i].weight);
                	printf("Year: %d\n", games[i].year);

                }
        }
}
