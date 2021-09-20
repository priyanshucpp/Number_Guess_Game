#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int number, guess, count=1;
	srand(time(0));
	number = rand() % 100 + 1;                        //Generates random number
	//printf("The number is %d", number);
	do {
		printf("Guess a number between 1 to 100: ");
		scanf("%d", &guess);
		if (guess > number) {
			printf("Lower number please \n");
		}
		else if (guess < number) {
			printf("Higher number please \n");
		}
		else {
			printf("Number of attempts: %d \n", count);
		}
		count++;
	} while (guess != number);
	return 0;
}



