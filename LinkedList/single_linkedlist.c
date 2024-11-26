#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct node
{
    uint32_t data;
    struct node *next;
};

typedef struct node node;
node *head = NULL;

// Function to traverse and return the last node in the list
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

// Display the list
void _display(node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    node *tmp = head;
    printf("Printing node values...\n\t\tAddress\t\t\t\t\tValue\n");
    while (tmp != NULL)
    {
        printf("\t\t%p\t\t\t%d\n", (void *)tmp, tmp->data);
        tmp = tmp->next;
    }
}

// Create a new node with given data
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

// Insert node at the end of the list
void _last_insert(node *n_node)
{
    if (n_node == NULL)
        return;

    if (head == NULL)
    {
        head = n_node; // Set head to new node if the list is empty
    }
    else
    {
        node *temp = _traverse(head);
        if (temp != NULL)
        {
            temp->next = n_node; // Link the last node to the new node
        }
    }
}

// Insert node at the beginning of the list (without passing head)
void _first_insert(node *n_node)
{
    if (n_node == NULL) {
        printf("Error: Invalid node\n");
        return;
    }

    // Display before inserting the new node
    printf("Before first insert: ");
    _display(head);

    // Insert the new node at the beginning
    n_node->next = head; // Link new node to the current head
    head = n_node;       // Set the new node as the head

    // Display after inserting the new node
    printf("\nAfter first insert: ");
    _display(head);
}

int main()
{
    uint32_t size;
    printf("Currently size of node structure is: %lu\n", sizeof(head)); // sizeof(head) is size of pointer, typically 8 bytes
    printf("How many nodes to be created? : ");
    scanf("%d", &size);

    while (size)
    {
        uint32_t x = rand() % size; // Using 100 as the upper limit for random values
        _last_insert(_create_node(x)); // Call _last_insert to add nodes to the list
        size--;
    }
    printf("\nInitial List:\n");
    _display(head);

    // Insert a node at the beginning
    _first_insert(_create_node(rand() % 5));

    // Cleanup
    while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
