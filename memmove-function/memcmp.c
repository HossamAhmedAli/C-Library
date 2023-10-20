#include<stdio.h>
#define SIZE 20
int my_memcmp(const void *data1_location, const void *data2_location, int bytes_size);
void main()
{
    int result = 0;
//define both objects that is to be compared
    char strng1[SIZE] = "nemoryblock1";
    char strng2[SIZE] = "memoryblock1der";
    result = my_memcmp(strng1, strng2, 8);
    if(result > 0)
    {
        printf("The size of strng1 is more than the size of strng2");
    }
    else if(result < 0)
    {
        printf("The size of strng1 is less than the size of strng2");
    }
    else
    {
        printf("The size of strng1 is equal to the size of strng2");
    }
} // end main
int my_memcmp(const void *data1_location, const void *data2_location, int bytes_size)
{
    int loop_counter=0; // used to count and access memory location with pointer like (ptr+loop_counter)
    if( data1_location==NULL || data2_location==NULL) return NULL; // error in passing a memory location
    else // locations are passed to the function
    {
        for(loop_counter=0; loop_counter<bytes_size; loop_counter++) // loop from 0 to size of bytes needed to be compared
        {
            if( *((char *)data1_location+loop_counter) > *((char *)data2_location+loop_counter ) ) return 1; // return 1 in case data_1 > data_2
            else if( *((char *)data1_location+loop_counter) < *((char *)data2_location+loop_counter ) ) return -1; // return -1 in case data_2 > data_1
        }// end foor loop

        return 0; // in case for code block of foor loop doesn't output 1 or -1

    }// end else
} // end function my_memcmp

