#include <cs50.h>
#include <stdio.h>

int llamas_start_size(void);
int llamas_end_size(void);

  // TODO: Prompt for start size

int main(void)
{
    int n = llamas_start_size();
    printf("%i\n", n);
}
  
int llamas_start_size(void) 
{
    int start_size;
    do
    {
        start_size = get_int("Start_size: ");
    }
    while (start_size < 9);
    return start_size;
}   

int llamas_end_size(void)
{
    int end_size;
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < int start_size);
    return end_size;
}
    
    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years

