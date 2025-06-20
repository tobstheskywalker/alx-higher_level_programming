#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
    listint_t *slow, *fast;

    if (list == NULL || list->next == NULL)
        return (0);

    slow = list;
    fast = list;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;        /* Move slow pointer by 1 step */
        fast = fast->next->next;  /* Move fast pointer by 2 steps */

        if (slow == fast)         /* If they meet, there's a cycle */
            return (1);
    }

    return (0);  /* No cycle found */
}
