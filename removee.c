#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void removee(game *games, char *f, int n){

	int p;
	printf("Please enter game id which you want do remove: ");
	scanf("%d",&p); getchar();

	p--;

        FILE *b;
        b = fopen(f, "w");
        for(int i = 0;i<n;i++){
		if(i != p){
                	fprintf(b,"%s,",games[i].name);
                	fprintf(b,"%f,",games[i].price);
                	fprintf(b,"%s,",games[i].developer);
                	fprintf(b,"%f,",games[i].weight);
                	fprintf(b,"%f,",games[i].discount);
                	fprintf(b,"%d",games[i].year);
			if(i!=(p-1)){
				 fprintf(b,"\n");
			}
		}
        }
        fclose(b);
}
