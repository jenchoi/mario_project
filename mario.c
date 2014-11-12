#include <stdio.h>
#include <cs50.h>

int main(void)  
{
    
    int height; 
    do 
    {
        printf("Give me a number between 0 and 23:\n");
        height = GetInt();
    }
    while ( height < 0 || height > 23 );
    
    for(int i =0;i<height;i++)
    {
        for(int s=height-i-1; s>0; s--)
        {
            printf(" ");   
        }
        
        for(int h=0;h<=i+1;h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
