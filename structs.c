#include <stdio.h>

//Link to exercise: https://www.learn-c.org/en/Structures

typedef struct person{
    char *name;
    int age;
} st_person;

int main() {
    st_person john;

    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.", john.name, john.age);
}