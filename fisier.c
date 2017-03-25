#include <stdio.h>
#include <math.h.>

/*struct point {
	float treex;
	float treey;
};*/
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
	int ultimacifraint;
	for (i=0; i<n; i++) {
		intensitateaCalculata[i] = 1/(pow((lightx-treex[i]),2)+ pow((lighty-treey[i]),2))*intensity;
		ultimacifraint = intensitateaCalculata[i] % 10;
	}
	for (i=0; i<n; i++) {
		printf("Intensitatea este %.4f\n", intensitateaCalculata[i]);
	}
	for (i=0; i<n; i++) {
		float h = treey[i];
		printf("inaltimea este %f", h);
	}
	return 0;
}
