#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory previously allocated with malloc(old_size)
 *
 * @old_size: Size of the allocated space for ptr, in bytes
 *
 * @new_size: New size of the memory block, in bytes
 *
 * Return: Pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
    void *new_ptr;
    unsigned int min_size;
    unsigned int i;

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
        return (malloc(new_size));

    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    min_size = old_size < new_size ? old_size : new_size;
    for (i = 0; i < min_size; i++)
        *((char *)new_ptr + i) = *((char *)ptr + i);

    free(ptr);

    return (new_ptr);
}
