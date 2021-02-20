#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int s, e, n;
    
    // TODO: Prompt for start size
    do
    {
        s = get_int("Start size: ");
    }
    while (s < 9);
    
    // TODO: Prompt for end size
    do
    {
        e = get_int("End size : ");
    }
    while (e < s);
    
    // TODO: Calculate number of years until we reach threshold
    for (n = 0; s < e; n++)
    {
        s = s + (s / 3) - (s / 4);
    }
    
    // TODO: Print number of years
    printf("Years: %i", n);
}