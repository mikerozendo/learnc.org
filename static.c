#include <stdio.h>

//Link to exercise: https://www.learn-c.org/en/Static

static int sumTotal = 0;
int sum (int num) {
    sumTotal += num;
    return sumTotal;
}

int main() {
    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));
    return 0;
}