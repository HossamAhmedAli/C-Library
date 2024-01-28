#include <stdio.h>
#include <stdlib.h>
#include"stack_ds.h"
#define INIT_CHAR 'a'
#define TERMINATE_PROGRAM 't'
stack_ds stack1_;
int main()
{
    int32 value;
    char chr=INIT_CHAR;
    return_status ret=R_NOK;

    if (stack_init(&stack1_)==R_NOK)
    {
      printf("Error in Initialization! please check the source code");
      exit(0);  // terminate the program
    }
    printf("------- Welcome to STACK program -------\n");
    printf("Hint: Stack Capacity is ( %d ) elements\n",STACK_MAX_SIZE);
    printf("please select an option from the following:\n");
    printf("1-Push a value\t  2-Pop stack\t3-Display stack  \t4-Show top\t5- Stack Size\t6-Terminate program \n");
    while(1)
    {
        printf("select an option: ");
        scanf("%d",&value);
        switch(value)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d",&value);
            ret=stack_push(&stack1_,value);
            break;
        case 2:
            ret=stack_pop(&stack1_,&value);
            break;
        case 3:
            ret=stack_display(&stack1_);
            break;
        case 4:
            ret=stack_top(&stack1_,&value);
            if(ret==R_OK)
            printf("top of stack=%d\n",value);
            break;
        case 5:
            ret=stack_size(&stack1_,&value);
            printf("size is %d elements\n",value);
            break;
        case 6:
            printf("\n******* Thanks for using our program *******\n");
            exit(0);
            break;
        default:
            printf("Please Enter Valid input\n");
            printf("1-Push a value\t  2-Pop stack\t3-Display stack  \t4-Show top\t5- Stack Size\t6-Terminate program \n");
            break;
        }//end switch
    }
    return 0;
}
