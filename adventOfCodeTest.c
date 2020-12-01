#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE * filePointer;
    filePointer = fopen("input.txt", "r");
    char input[100];
    int moduleMass = 0, sumOfFuelRequired = 0;

    while (!feof(filePointer)) 
    {
        fgets(input, 100, filePointer);
        moduleMass = atoi(input);
        sumOfFuelRequired += ((moduleMass / 3) - 2);
    }

    printf("Sum of fuel requirements = %i\n", sumOfFuelRequired);

    return 0;
}