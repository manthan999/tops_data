#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    const int maxAttempts = 7; 

    srand(time(0));
    secretNumber = (rand() % 100) + 1; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("Too high! Try a lower number.\n\n");
        }
    }

    if (guess != secretNumber) {
        printf("Sorry, you've used all your attempts. The number was %d.\n", secretNumber);
    }

}
