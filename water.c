#include <stdio.h>
#include <cs50.h>

int main(void)

{
    
    int x;
    float y;
    int z;
    int a;
    
    do 
    {printf ("minutes:");
    x = get_int ();
    }
    while (x < 1);
    
    y = x*1.5;

    z = y*128;
   
    a = z/16;
    printf ("bottles: %i\n",a);
}