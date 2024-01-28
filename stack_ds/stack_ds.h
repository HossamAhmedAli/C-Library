#ifndef _STACK_DS_H
#define _STACK_DS_H

#include"std_types.h"
#define STACK_MAX_SIZE 5
typedef struct {
    uint32 stack_pointer;
    uint32 data[STACK_MAX_SIZE];
}stack_ds;
typedef enum{
    STACK_EMPTY,
    STACK_FULL,
    STACK_NOT_FULL
}stack_status;

/**
  *@brief initialize stack pointer
  *@param my_stack pointer to the stack
  *@retval status of the initialization process
  */
return_status stack_init(stack_ds *my_Stack);

/**
  *@brief push a value into the stack
  *@param my_stack pointer to the stack , the value to be pushed
  *@retval status of the push process
  */
return_status stack_push(stack_ds *my_Stack, int32 value);

/**
  *@brief pop a value out of the stack
  *@param my_stack pointer to the stack , the location in which the popped value will be stored
  *@retval status of the pop process
  */
return_status stack_pop(stack_ds *my_Stack, int32 *store);

/**
  *@brief get the value of top of the stack
  *@param my_stack pointer to the stack , the location in which the value of top of stack will be stored
  *@retval status of the get top value process
  */
return_status stack_top(stack_ds *my_Stack, int32 *store);

/**
  *@brief print size of the stack ( occupied locations only)
  *@param my_stack pointer to the stack, a size_pointer to access the location that will hold the value of the size
  *@retval status of the stack size process
  */
return_status stack_size(stack_ds *my_Stack, int32 *stack_size);

/**
  *@brief print values stored in the stack
  *@param my_stack pointer to the stack
  *@retval status of the display process
  */
return_status stack_display(stack_ds *my_Stack);

#endif //_STACK_DS_H

