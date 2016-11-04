#include <cs50.h>
#include <stdio.h>


int main(void)

{
    int h;
    int hash;
    int space;
    int l;
    
    do
    {
    printf("Height:");
    h = get_int ();
    }
    while (h < 1);
    
    hash = 1;
    
    l = 0;
    
    do
    {
  
    space = h;
    
    while (space > 0)
    {
        space--;
        printf(" ");
    }
    
    printf("#");
    
   l = 0;
   
   while (l < hash)
   {
       printf("#");
        l++;
   }
   
   hash++;
  
    h--;
    printf("\n");
    }
    while (h > 0);
}