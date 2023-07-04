#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A linked list
 * @h: pointers
 * yusuf nurudeen 
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
 size_t z = 0;

 while (h)
 {
 z++;
 h = h->next;
 }
 return (z);
}
