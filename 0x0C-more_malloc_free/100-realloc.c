#include "main.h"
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size
 * @new_size: new size
 *Return: Returns pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *alex, *rell;
unsigned int x;

if (ptr != NULL)
{
alex = ptr;
}
else
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}
rell = malloc(new_size);
if (rell == NULL)
{
return (0);
}
for (x = 0; x < (old_size || x < new_size); x++)
{
*(rell + x) = alex[x];
}
free(ptr);

return (rell);
}
