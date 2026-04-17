#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: const dlistint_t
 * @index: int
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position.
 * @h: const dlistint_t
 * @idx: int
 * @n: int
 * Return: address of new nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: const dlistint_t.
 * Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list.
 * @head: const dlistint_t.
 * @index: index of node, start at 0
 * Return: number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: const dlistint_t.
 * Return: number of nodes
 */
void free_dlistint(dlistint_t *head);

/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t list.
 * @head: const dlistint_t.
 * @n: int
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * add_dnodeint - function  that adds a new node at the beginning of a dlistint_t list.
 * @head: const dlistint_t.
 * @n: int
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * dlistint_len - function that returns the number of elements in a linked dlistint_t list.
 * @h: const dlistint_t.
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: const dlistint_t.
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

#endif /* LISTS_H */
