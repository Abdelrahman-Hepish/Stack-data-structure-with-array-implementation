#include <stdio.h>
#include "stack.h"
void Display (stack_entry element ) ;
int main() {
    Stack s ;
    Creat_Stack(&s) ;
    for(int i = 0 ; i <= 10 ; i++)
    {
        Push(i , &s) ;
    }
    Travers_Stack(&s , Display) ;
    return 0;
}
void Display (stack_entry element )
{
    printf("the element is : %d \n",element) ;
}