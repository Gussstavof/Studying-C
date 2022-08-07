#include <malloc.h>
#include <stdio.h>


typedef struct{
    char* name;
    int age;
}Person;

int main() {

    Person* person = (Person*) malloc(sizeof (Person));
    person->name = "Gustavo";
    person->age = 18;

    printf("Name: %s, Age: %d", person->name, person->age);
}
