#include <cs50.h>
#include <stdio.h>

int main(void)
{

    //Prompt for start size
    int Start_Size;

    do
    {
        Start_Size = get_int("Start size: ");
    } 
    while (Start_Size < 9);

    //Prompt for end size
    int End_Size;

    do
    {
        End_Size = get_int("End size:");
    } 
    while (End_Size < Start_Size);

    // Calculate number of years until we reach threshold

    int years = 0;
    int population = Start_Size;

    while (population < End_Size)
    {
        population = population + (population/3) - (population/4);
        years++;
    }

    // Print number of years
    printf("Years: %d\n", years);
}
