#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to pointer of the first node of the list
 * @number: integer to be included in the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node;
    listint_t *current;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = number;

    // Si la liste est vide ou si le nouveau nombre doit être inséré au début
    if (*head == NULL || (*head)->n >= number)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;
    // Trouver la position d'insertion
    while (current->next != NULL && current->next->n < number)
        current = current->next;

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}
