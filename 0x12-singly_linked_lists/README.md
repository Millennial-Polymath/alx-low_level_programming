# 0x12.C Singly Linked Lists

### Learning Objectives
* To understand When and why using linked lists vs arrays
* To learn how to build and use linked lists

## Tasks

###Print list
   A function that prints all elements of a list list_t and
   returns the number of nodes.
 #### Algorithm

1. Loop through the linked list as long as the node is not NULL
2. While true, assign the pointer to the next node to the  base address of the new head
3. Print the  elements  
4. Count the number of nodes

### List Length

A function that returns the number of elements in a linked list

#### Algorithm:Ditto above

### Add node
A function that adds a new node at the beginning of a list_t list

#### Algorithm
1. Create a new node, and assign some memory using malloc
2. Assign the base address of head to next field of the new node
3. Make the new node, the head by assigning the address of the new node to the head

### Add node to the end of the list
A function that adds a new node at the end of a list_t list.
#### Algorithm
1. create a new node, and assign some memory in the heap
2. If head is empty, assign the value of  new node to the head
3. else, create a temporary node and assign the value of head to it
4.  Assign the value of next value of temp to temp as long as the former is not empty
5. assign the base address of new node to the next value of temp
6. return the base address of the new node.
