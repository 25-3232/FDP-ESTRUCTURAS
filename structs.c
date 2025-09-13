#include <stdio.h>
struct Person
{
    char name [50];
    int age;

};

    int main() {
        struct Person Person1 = {"Arturo", 20};
        struct Person Person2 = {"Beatriz", 25,};

        printf("Name: %s\n", Person1.name);
        printf("Age: %d\n\n", Person1.age);

        printf("Name: %s\n", Person2.name);
        printf("Age: %d\n", Person2.age);
        return 0;

    }
