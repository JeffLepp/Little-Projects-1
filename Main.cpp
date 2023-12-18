#include "Header.h"

int main() {

	FILE* file = fopen("Data.txt", "w");

	for (int i = 0; i < 7; i++) {
		prompts(i);
		answers(file);
	}

	fclose(file);
	file = fopen("Data.txt", "r");
	double score = calculator(file);

	printf("Bonus Amount = $%lf", score);

	return 0;
}