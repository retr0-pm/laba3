#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char *argv[]){

	int flag = 9;
	int op = 1;
	int n;
	game *games;

	FILE *test;
	if(!(test = fopen(argv[1],"r"))){
		fclose(test);
		printf("Read error");
		exit(1);
	}
	else{
		fclose(test);
	}

	printf("Welcome! This is a prototype of the Steam Library\n");
	printf("There are you can perform some of the operations below on the library of game associated with the file\n");
	printf("You should select an action from the list\nCommands list:\n");
	printf("1. Display the current list of games and and their description\n");
        printf("2. Search by name\n");
        printf("3. Search by developer\n");
        printf("4. Search by price\n");
        printf("5. Search by discounts\n");
        printf("6. Add the game to the list\n");
        printf("7. Remove the game from the list\n");
        printf("8. Change the game from the list\n");
        printf("0. Exit\n");

	while((flag!=0) &&(op!=0)){
		printf("Please choose your action: ");
		scanf("%d",&op); getchar();
		switch(op){

			case 1:
				n = n_of_str(argv[1]);
				if (n == 0){
					printf("Your list is empty\n");
					break;
				}
				else{
					games = f_to_arr(argv[1],n);
					output(games,n);
					free(games);
					break;
				}

			case 2:
				n = n_of_str(argv[1]);
	                                if (n == 0){
                                        printf("Your list is empty\n");
                                        break;
                                }
				games = f_to_arr(argv[1],n);
				search_name(games,n);
				free(games);
				break;

			case 3:
                                n = n_of_str(argv[1]);
                                if (n == 0){
                                        printf("Your list is empty\n");
                                        break;
                                }
                                games = f_to_arr(argv[1],n);
                                search_developer(games,n);
				free(games);
                                break;


			case 4:
                                n = n_of_str(argv[1]);
                                if (n == 0){
                                        printf("Your list is empty\n");
                                        break;
                                }
                                games = f_to_arr(argv[1],n);
                                search_price(games,n);
                                break;

			case 5:
                                n = n_of_str(argv[1]);
                                if (n == 0){
                                        printf("Your list is empty\n");
                                        break;
                                }
                                games = f_to_arr(argv[1],n);
                                search_discount(games,n);
				free(games);
                                break;

			case 6:
				n = n_of_str(argv[1]);
				add(argv[1],n);
				break;

			case 7:
				n = n_of_str(argv[1]);
				games = f_to_arr(argv[1],n);
				if(n == 0){
					printf("Your list is empty\n");
					break;
				}
				removee(games, argv[1], n);
				free(games);
				break;

			case 8:
				n = n_of_str(argv[1]);
				games = f_to_arr(argv[1],n);
				if(n == 0){
					printf("Your list is empty\n");
					break;
				}
				change(games,argv[1],n);
				free(games);
				break;

			case 9:
				break;

			default:
				flag = 0;
				break;

		}
	}

	printf("Good Luck!\n");

	return 0;
}
