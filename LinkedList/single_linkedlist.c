#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

struct node
{
    uint32_t data;
    struct node *next;
};

typedef struct node node;
node *head = NULL;

node *_traverse(node *head)
{
    if (head == NULL)
        return NULL;

    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    return tmp;
}

void _display(node *head)
{
    if (head == NULL)
        return;

    node *tmp = head;
    printf("Printing node values...\n\t\tAddress\t\t\t\t\tValue\n");
    while (tmp != NULL)
    {
        printf("\t\t%p\t\t\t%d\n", (void *)tmp, tmp->data);
        tmp = tmp->next;
    }
}

node *_create_node(uint32_t data)
{
    node *newnode = malloc(sizeof(node));
    if (newnode != NULL)
    {
        newnode->data = data;
        newnode->next = NULL;
    }
    return newnode;
}

void _last_insert(node *n_node)
{
    if (n_node == NULL)
        return;

    if (head == NULL)
    {
        head = n_node;
    }
    else
    {
        node *temp = _traverse(head);
        if (temp != NULL)
        {
            temp->next = n_node;
        }
    }
}

void _first_insert(node *n_node)
{
    
    printf("Before first insert: ");
    _display(head);
    n_node->next = head;
    head = n_node;
    printf("\nAfter first insert: ");
    _display(head);
}



int main()
{
    uint32_t size;
    printf("Currently size of node structure is: %d\n",sizeof(head));
    printf("How many nodes to be created? : ");
    scanf("%d", &size);

    while (size)
    {
        uint32_t x = rand() % size;
        _last_insert(_create_node(x));
        size--;
    }
    _display(head);

    while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        free(temp);
    }
    _first_insert(_create_node(rand()%5));

    return 0;
}