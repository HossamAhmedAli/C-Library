#include"stack_ds.h"
/**
  *@brief check if stack is empty or not
  *@param my_stack pointer to the stack
  *@retval status of the stack whether full or not
  */
stack_status static stack_full(stack_ds *my_Stack)
{
    if(my_Stack->stack_pointer==STACK_MAX_SIZE-1) return STACK_FULL;
    else
        return STACK_NOT_FULL;
}//end stack_full()

/**
  *@brief check if stack is empty or not
  *@param my_stack pointer to the stack
  *@retval status of the stack whether empty or not
  */
stack_status static stack_empty(stack_ds *my_Stack)
{
    if(my_Stack->stack_pointer==-1) return STACK_EMPTY;
    else
        return STACK_NOT_FULL;
}//end stack_empty()

/**
  *@brief initialize stack pointer
  *@param my_stack pointer to the stack
  *@retval status of the initialization process
  */
return_status stack_init(stack_ds *my_Stack)
{
    return_status ret=R_NOK;
    /* check validation of the received address */
    if(NULL == my_Stack) ret=R_NOK;
    else
    {
        /* if received the stack address successfully, initialize stack pointer */
        my_Stack->stack_pointer= -1;
        ret=R_OK;
    }
    return ret;
}//end stack_init(stack_ds *my_Stack) function

/**
  *@brief push a value into the stack
  *@param my_stack pointer to the stack , the value to be pushed
  *@retval status of the push process
  */
return_status stack_push(stack_ds *my_Stack, int32 value)
{
    return_status ret=R_NOK;
    if((NULL==my_Stack) || (STACK_FULL==stack_full(my_Stack)))
    {
        printf("Stack FULL!!\n");
        ret=R_NOK;
    }
    else
    {
        my_Stack->stack_pointer++;
        my_Stack->data[my_Stack->stack_pointer]=value;
        printf("Value (%d) has been pushed successfully\n",my_Stack->data[my_Stack->stack_pointer]);
        ret=R_OK;
    }
    return ret;
}//end stack_push()
/**
  *@brief pop a value out of the stack
  *@param my_stack pointer to the stack , the location in which the popped value will be stored
  *@retval status of the pop process
  */
return_status stack_pop(stack_ds *my_Stack, int32 *store)
{
    return_status ret=R_NOK;
    if( (NULL==my_Stack) || (NULL==store) || (STACK_EMPTY==stack_empty(my_Stack)) )
    {
        printf("stack empty!!\n");
        ret=R_NOK;
    }
    else
    {
        *store=my_Stack->data[my_Stack->stack_pointer];
        my_Stack->stack_pointer--;
        printf("value (%d) has been popped successfully\n",*store);
        ret=R_OK;
    }
    return ret;
}
/**
  *@brief get the value of top of the stack
  *@param my_stack pointer to the stack , the location in which the value of top of stack will be stored
  *@retval status of the get top value process
  */
return_status stack_top(stack_ds *my_Stack, int32 *store)
{
    return_status ret=R_NOK;
    if( (NULL==my_Stack) || (NULL==store) || (STACK_EMPTY==stack_empty(my_Stack)) )
    {
        printf("Stack is Empty!\n");
        ret=R_NOK;
    }
    else
    {
        *store=my_Stack->data[my_Stack->stack_pointer];
        ret=R_OK;
    }
    return ret;
}//end stack_top()
/**
  *@brief print size of the stack ( occupied locations only)
  *@param my_stack pointer to the stack, a size_pointer to access the location that will hold the value of the size
  *@retval status of the stack size process
  */
return_status stack_size(stack_ds *my_Stack, int32 *stack_size)
{
    return_status ret=R_NOK;
    if( (NULL==my_Stack) || (NULL==stack_size)  )
    {
        ret=R_NOK;
    }
    else
    {
        *stack_size=my_Stack->stack_pointer+1;
        ret=R_OK;
    }
    return ret;
}//end stack_size()
/**
  *@brief print values stored in the stack
  *@param my_stack pointer to the stack
  *@retval status of the display process
  */
return_status stack_display(stack_ds *my_Stack)
{
     return_status ret=R_NOK;
     int16 iteration=0;
    if( (NULL==my_Stack)|| (STACK_EMPTY==stack_empty(my_Stack)) )
    {
        printf("Stack is Empty!\n");
        ret=R_NOK;
    }
    else
    {
        printf("Stack Data:\n");
        for(iteration=my_Stack->stack_pointer;iteration>=ZERO ;iteration--)
            printf(" %d\n",my_Stack->data[iteration]);
        ret=R_OK;
    }
    return ret;
}
