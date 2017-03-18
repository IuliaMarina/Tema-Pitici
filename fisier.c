#include <stdio.h>
#include <stdlib.h>

#define MEMORIE_INSUFICIENTA 1

struct point {
	int treex;
	int treey;
};
	
int main () {
	int lightx, lighty, intensity;
	struct point *pct;
	int n, i;
	scanf("%d", &n);
	pct = (struct point*) malloc(n * sizeof(struct point));
	if (pct == NULL) {
		printf("Nu avem suficienta memorie sa alocam vectorul Punct\n");
		return MEMORIE_INSUFICIENTA;
	}
	
	for(i = 0; i < n; ++i) {
       //scanf("%d", &(pct+i)->treex);
	   //scanf("%d", &(pct+i)->treey);
	   scanf("%d", &(pct[i].treex));
	   scanf("%d", &(pct[i].treey));
	}
	
	for (i=0; i<n; ++i) { 
		//printf("%d , %d\n", (pct+i)->treex, (pct+i)->treey);
		printf("%d , %d\n", pct[i].treex, pct[i].treey);
	}
	
	return 0;	   
}