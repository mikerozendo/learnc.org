#include <stdio.h>

//Link to exercise: https://www.learn-c.org/en/Conditions

void guessNumber(int guess) {
    if(guess == 555) printf("Correct. You guessed it!\n");

    if(guess < 555) printf("Your guess is too low.\n");

    if(guess > 555) printf("Your guess is too high.\n");
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}