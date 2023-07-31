#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data in a list
 * @head: pointer to the head
 * return: 0 upon an empty list, elde return sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
