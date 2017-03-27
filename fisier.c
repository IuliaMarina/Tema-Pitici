#include <stdio.h>
#include <math.h.>

/*struct point {
	float treex;
	float treey;
};*/
#define FALS 0
#define ADEVARAT 1

int este_prim(int a) {
	int d;
	for(d = 2; d < a / 2; d++){
		if(a % d == 0){
			return FALS;
		}
	}
	
	return ADEVARAT;
}


int main () {
	float treex[100];
	float treey[100];
	float lightx, lighty, intensity;
	scanf("%f", &lightx);
	scanf("%f", &lighty);
	scanf("%f", &intensity);
	int n, i;
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%f", &treex[i]);
		scanf("%f", &treey[i]);
	}
	/*for (i=0; i<n; i++) {
		printf("x = %.2f, y = %.2f\n", treex[i], treey[i]);
	}*/
	float intensitateaCalculata[100];
	int ultimacifraint, ultimaCifraAnterior, ultimaCifraCurent, ultimaCifraViitor;
	int val1, val2, val3, val4;
	
	int indiceCopacIdeal = -1;
	for (i=1; i<n-1; i++) {
		intensitateaCalculata[i] = 1/(pow((lightx-treex[i]),2)+ pow((lighty-treey[i]),2))*intensity;
		ultimacifraint = (int)intensitateaCalculata[i] % 10;
		printf("ultima cifra a copacului: %d\n", ultimacifraint);
		
		ultimaCifraAnterior = (int)treey[i-1] % 10;
		ultimaCifraCurent = (int)treey[i] % 10;
		ultimaCifraViitor = (int)treey[i+1] % 10;
		
		val1 = ultimacifraint;
		val2 = val1 * 10 + ultimaCifraAnterior;
		val3 = val2 * 10 + ultimaCifraCurent;
		val4 = val3 * 10 + ultimaCifraViitor;
		
		if(este_prim(val1) && este_prim(val2) && este_prim(val3) && este_prim(val4)){
			if(indiceCopacIdeal == -1){
				indiceCopacIdeal = i;
			} else {
				if(treey[indiceCopacIdeal] > treey[i]){
					indiceCopacIdeal = i;
				} else if(treey[indiceCopacIdeal] == treey[i] && treex[indiceCopacIdeal] > treex[i]){
					indiceCopacIdeal = i;
				}
			}
		}
	}
	
	
	if(indiceCopacIdeal == -1){
		printf("There is no place for you in DwarfLand!");
	} else {
		printf("%d %.4f", indiceCopacIdeal, intensitateaCalculata[indiceCopacIdeal]);
	}
	
	/*
	for (i=0; i<n; i++) {
		printf("Intensitatea este %.4f\n", intensitateaCalculata[i]);
	}
	int ultimacifraanterior;
	for (i=0; i<n; i++) {
		float h = treey[i];
		printf("inaltimea este %f\n", h);
		//ultimacifraanterior = h[i-1];
	}
	*/
	return 0;
	
}
