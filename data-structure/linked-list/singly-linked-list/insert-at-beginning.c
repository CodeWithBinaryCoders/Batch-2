#include <stdio.h>
#include <stdlib.h>

// define node
typedef struct node
{
    int data; // data part;
    struct node *next; // pointer to next node
} Node;

// create a head pointer to track the first node
Node *head = NULL; // initially the linked list is empty

// function prototype(s)
void insertAtBeginning(int);

int main() // driver code
{

    // insert some nodes at the beginiung of the linked list
    insertAtBeginning(6);
    insertAtBeginning(10);
    insertAtBeginning(13);

    // display the linked list
    // display();

    return 0;
}

// function definition(s)
void insertAtBeginning(int data)
{
    // create a new node
    Node *newNode = malloc(sizeof (Node)); // allocate memory into heap and return the address

    // check if the node is created successfully or not
    if (!newNode) // if memory allocation is failed
    {
        printf("Memory allocation failed\n");
        exit(1); // exit the program
    }

    // set values in the node
    newNode->data = data; // set the data part of the node to the data passed
    newNode->next = NULL; // set the next pointer of the node to NULL

    // insert the newly created node at its correct position

}
