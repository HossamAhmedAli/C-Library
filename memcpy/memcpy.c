void *my_memcpy( void *destination, const void *source, int length)
{
    if( destination==NULL || source==NULL ) return NULL;
    else
    {
      while(length--)
        *((char *)destination+length) = *((char *)source+length);
    } //end else


    return destination;
}

