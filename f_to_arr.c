#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

game *f_to_arr(char *f, int n){

        game *games = (struct game*)malloc(n*sizeof(struct game));
	int j = 0;
        FILE *b;
        b = fopen(f, "r");
        for(int i = 0; i < n; i++){
		//fscanf(b,"%[^,]", games[i].name );
          	//fscanf(b,"%f",&games[i].price);
                //fscanf(b,"%[^,]", games[i].developer);
                //fscanf(b,"%f",&games[i].weight);
                //fscanf(b,"%f",&games[i].discount);
                //fscanf(b,"%d",&games[i].year);
		fscanf(b,"\n%[^,],%f,%[^,],%f,%f,%d",games[i].name,&games[i].price,games[i].developer,&games[i].weight,&games[i].discount,&games[i].year);
        }
	fclose(b);
	return games;
}
