#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int height=0, rows=0, hashes=0, space= 0;
     
    do
    {
        printf("Whats the fucking number ya bish: ");
        height = GetInt();
        
    }
    while (height < 0 || height > 23);
 
    for(rows = 0; rows < height; rows++)
    {
        for (space = height - rows - 1; space > 0; space--)
        {
            printf(" ");
        }
        for (hashes = 0; hashes < rows + 2; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}
