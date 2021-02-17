#include <stdio.h>
#include "list.h"

int n_of_str(char *f){
	int n = 0;
	FILE *b;
	b = fopen(f,"r");
	while(!(feof(b))){
		if(fgetc(b) == '\n'){
			n++;
		}
	}
	fclose(b);
	return n;
}
