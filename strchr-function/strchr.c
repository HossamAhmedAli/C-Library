char *my_strchr(const char *str, int c)
{
    unsigned int index=0;
    if(NULL != str) // check whether Pointer points to data or NULL
    {
        while(*(str+index) != '\0' )
        {
            if( *(str+index) == (char)c ) return (str+index);
            index++;
        } // end while
    } //end if condition

    return NULL; // return NULL in case character not found or NULL pointer was passed to the function
}// end strchr function
