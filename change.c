#include <stdio.h>
#include "list.h"

void change(game *games, char *f, int n){

	int i;
	printf("Here you can change the parametrs of the game by ID (Serial Number)\n");
	printf("Please enter a game ID from the list or enter 0 to go back: ");
	scanf("%d",&i); getchar();
	int p = 8;
	int j;

	while((p!=0) && (i!=0)){
		printf("Enter an action that you need or 8 to get help: ");
		scanf("%d",&p);
		switch(p){
			case 1:
				printf("Name: ");
				j = 0;
        			fgets(games[i-1].name, 127, stdin);
        			while(games[i-1].name[j] != '\n'){
                			j++;
        			}
        			games[i-1].name[j] = '\0';
				break;
			case 2:
                                printf("Price: ");
				scanf("%f",&games[i-1].price); getchar();
				break;
			case 3:
				printf("Developer: ");
			        j = 0;
        			fgets(games[i-1].developer, 127, stdin);
        			while(games[i-1].developer[j] != '\n'){
        			        j++;
        			}
        			games[i-1].developer[j] = '\0';
                                break;
			case 4:
                               printf("Weight: ");
                                scanf("%f",&games[i-1].weight); getchar();
                                break;
			case 5:
                               printf("Discount: ");
                                scanf("%f",&games[i-1].discount); getchar();
                                break;
			case 6:
                                printf("Year: ");
                                scanf("%d",&games[i-1].year); getchar();
                                break;
			case 7:
				printf("Game ID: ");
				scanf("%d",&i);getchar();
				break;
			case 8:
				printf("Choose an action from the proposed:\n");
        			printf("Enter 1 to change name\n");
        			printf("Enter 2 to change price\n");
        			printf("Enter 3 to change developer\n");
        			printf("Enter 4 to change weight\n");
        			printf("Enter 5 to change discount\n");
        			printf("Enter 6 to change year\n");
        			printf("Enter 7 to change ID\n");
				printf("Enter 8 to viev instruction again\n");
        			printf("Enter 0 to go back\n");
				break;
			default:
				p = 0;
				break;

		}
	}

        FILE *b;
        b = fopen(f, "w");
        for(int i = 0;i<n;i++){
        	fprintf(b,"%s,",games[i].name);
        	fprintf(b,"%f,",games[i].price);
        	fprintf(b,"%s,",games[i].developer);
        	fprintf(b,"%f,",games[i].weight);
        	fprintf(b,"%f,",games[i].discount);
        	fprintf(b,"%d\n",games[i].year);
        }
        fclose(b);

}
