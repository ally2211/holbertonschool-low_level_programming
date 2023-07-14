#C - Singly linked lists
# Singly Linked List

## Description
The `list_t` struct represents a singly linked list node. It consists of a string (`str`), the length of the string (`len`), and a pointer to the next node (`next`).

## Installation
1. Clone the repository.
2. Compile the source code using a C compiler.
3. Link the object files to create an executable.

## Usage
1. Include the `list.h` header file in your project.
2. Create a new instance of `list_t`.
3. Initialize the `str`, `len`, and `next` members of the node.
4. Perform operations on the linked list, such as adding or removing nodes.

```c
#include "list.h"

int main(void)
{
    // Create a new list_t node
    list_t *node = malloc(sizeof(list_t));
    node->str = "Hello";
    node->len = 5;
    node->next = NULL;

    // Perform operations on the linked list

    return 0;
}

