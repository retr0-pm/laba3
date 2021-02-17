#include <stdlib.h>
#include "list.h"

void search_price(game *games, int n){

	printf("Please enter the price range of the game in format a - b, where a is from and b - to: ");

	float discount_price;
        int from, to;
        scanf("%d - %d",&from, &to); getchar();

        for(int i = 0; i<n; i++){

		if (games[i].discount > 0){
                                discount_price = (games[i].price * (100 - games[i].discount) / 100);
		}
		else{
			discount_price = -1;
		}
                if (((games[i].price >= from) && (games[i].price <= to)) || ((discount_price >= from) && (discount_price <= to))){
                	printf(" Id: %d\n",i+1);
                	printf("Name: %s\n",games[i].name);
                	printf("Price: %.2f",games[i].price);
                	if (games[i].discount > 0){
                              	printf(" (%.2f)\n",discount_price);
                        	printf("Discount: %.0f%%",games[i].discount);
                	}
                	printf("\nDeveloper: %s\n", games[i].developer);
        	        printf("Weight: %.2f GB\n", games[i].weight);
	                printf("Year: %d\n", games[i].year);

                }
        }
}

