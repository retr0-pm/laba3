#include <stdio.h>

typedef struct game {
	char name[128];
	float price;
	char developer[128];
	float weight;
	float discount;
	int year;
}game;

void add(char *f, int n);
game *f_to_arr(char *f, int n);
void removee(game *games, char *f, int n);
void change(game *games, char *f, int n);
int n_of_str(char *f);
void output(game *games, int n);
void search_name(game *games, int n);
void search_developer(game *games, int n);
void search_price(game *games, int n);
void search_discount(game *games, int n);

