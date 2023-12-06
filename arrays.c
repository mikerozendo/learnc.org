#include <stdio.h>

//Link to exercise: https://www.learn-c.org/en/Arrays

int main() {

    int average;
    int grades[]={80,85,90};

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);

    return 0;
}