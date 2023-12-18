#include "Header.h"

void prompts(int i) {

	char prompts[7][100] = {
	"1. All - Star Game appearance = $25,000",
	"2. Regular season MVP = $75,000",
	"3. World Series MVP = $100,000",
	"4. Gold Glove award = $50,000",
	"5. Silver Slugger award = $35,000",
	"6. Home run champ = $25,000",
	"7. Batting average champ = $25,000"
	};

	printf("%s\n", prompts[i]);
}

void answers(FILE* file) {
	char choice;

	scanf(" %c", &choice);
	fprintf(file, "%c\n", choice);
}

double calculator(FILE* file) {
	char ans;
	double score = 0.0;

	double money[] = {
		25000.0,
		75000.0,
		100000.0,
		50000.0,
		35000.0,
		25000.0,
		25000.0
	};

	for (int i = 0; i < 7; i++) {
		fscanf(file, " %c", &ans);

		if (ans == 'y') {
			score = score + money[i];
		}
	}
	return score;
}
