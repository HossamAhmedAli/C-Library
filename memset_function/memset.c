void *my_memset(void *const start_location , unsigned char data , int length)
{
    int length_counter=0; // will be used with pointer increment like (ptr+length_counter)
    if(start_location ==NULL)  return NULL; //
    else
    {
      for(length_counter=0; length_counter<length; length_counter++)
      {
          *((char *)start_location + length_counter)=data;
      } // end for loop
    } // end else
    return start_location;
} // end function my_memset
