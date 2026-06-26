//WAP TO CREATE NUMBER GUESSING GAME.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    printf("N U M B E R   G U E S S I N G   G A M E  ---->\n");
    printf("Guess a number between 1 - 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }

    } while (guess != number);

    return 0;
}