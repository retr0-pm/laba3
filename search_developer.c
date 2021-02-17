#include <stdlib.h>
#include <string.h>
#include "list.h"

void search_developer(game *games, int n){

	printf("Please enter the developer of the game");

        int j;
        char target[128];
        fgets(target, 127, stdin);
        while(target[j] != '\n'){
                j++;
        }
        target[j] = '\0';
        j = 0;

        for(int i = 0; i<n; i++){
                if (strcmp(games[i].developer,target) == 0){
                printf(" Id: %d\n",i+1);
                printf("Name: %s\n",games[i].name);
                printf("Price: %.2f",games[i].price);
                if (games[i].discount > 0){
                        float discount_price = (games[i].price * (100 - games[i].discount) / 100);
                        printf(" (%.2f)\n",discount_price);
                        printf("Discount: %.0f%%",games[i].discount);
                }
                printf("\nDeveloper: %s\n", games[i].developer);
                printf("Weight: %.2f GB\n", games[i].weight);
                printf("Year: %d\n", games[i].year);

                }
        }
}
