#ifndef __STACK_H__
#define __STACK_H__

#define stack_entry int
#define MAX_STACK    100

typedef int _bool ;
typedef struct
{
    int top ;
    stack_entry entry [MAX_STACK] ;
}Stack ;
typedef void (*funptr) (stack_entry element);

void Creat_Stack (Stack *) ;
void Push (stack_entry , Stack * ) ;
void Pop  (stack_entry * , Stack * ) ;
_bool Stack_Full (Stack * ) ;
_bool Stack_Empty (Stack *) ;
stack_entry Stack_Top (Stack *) ;
int Stack_Size (Stack *) ;
void Clear_Stack (Stack *) ;
void Travers_Stack (Stack * ,funptr ) ;




#endif // __STACK_H__