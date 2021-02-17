#include <stdio.h>
#include "list.h"

void add(char *f,int n){

	printf("Please enter your game details:\n");

	char b_name[50];
	float b_price;
	char b_developer[50];
	float b_weight;
	float b_discount;
	int b_year;
	int j;

	printf("Name: "); fgets(b_name, 127, stdin);
	while(b_name[j] != '\n'){
		j++;
	}
	b_name[j] = '\0';
	j = 0;
        printf("Price: "); scanf("%f",&b_price); getchar();
        printf("Developer: "); fgets(b_developer, 127, stdin);
        while(b_developer[j] != '\n'){
                j++;
        }
        b_developer[j] = '\0';
        j = 0;
        printf("Weight: "); scanf("%f",&b_weight); getchar();
        printf("Discount: "); scanf("%f",&b_discount); getchar();
        printf("Year: "); scanf("%d",&b_year); getchar();

        FILE *b;
        b = fopen(f,"a");

        fprintf(b,"%s,",b_name);
        fprintf(b,"%f,",b_price);
        fprintf(b,"%s,",b_developer);
        fprintf(b,"%f,",b_weight);
        fprintf(b,"%f,",b_discount);
        fprintf(b,"%d\n",b_year);

        fclose(b);
}


