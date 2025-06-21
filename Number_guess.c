#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;


    srand(time(0));
    secret = rand() % 100 + 1; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100:\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == secret) {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        } else if (guess < secret) {
            printf("Too low. Try again.\n");
        } else {
            printf("Too high. Try again.\n");
        }
    }

    return 0;
}
