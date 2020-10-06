#include <stdio.h>
#include "stack.h"
void Display (stack_entry element ) ;
int main() {
    Stack s ;
    stack_entry element ;
    Creat_Stack(&s) ;
    char message [100] ;
    scanf("%s",message) ;
    Push(message[0],&s);
    for(int i = 0 ; message [i] != '\0' ; ++i)
    {
        if(message[i] != Stack_Top(&s))
        {
            Push (message[i],&s);
        }else
        {
            Pop(&element , &s) ;
        }
    }
    Travers_Stack(&s , Display) ;
    return 0;
}
void Display (stack_entry element )
{
    printf("the element is : %c \n",element) ;
}