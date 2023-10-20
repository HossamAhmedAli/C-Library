char *my_strcat(char *dest, const char *src)
{
    unsigned int dest_index=0;
    unsigned int src_index=0;

    if( src==NULL || dest==NULL) return NULL;
    else
    {
        /* Now we get the index that indicates the end of the destination string*/
        while ( *(dest+dest_index) != '\0') dest_index++; // after execution while loop, we get the index of the end of the string

        while( *(src+src_index) != '\0') // start from index 0 of src string till end of it
        {
            *(dest+dest_index)= (*(src+src_index)); // dest_index refers to the end of the dest string from which we will copy src string into it
            src_index++;
            dest_index++;
        } // end while( *(src+src_index) != '\0')
        return dest;
    }// end else
} // end strcat() function
