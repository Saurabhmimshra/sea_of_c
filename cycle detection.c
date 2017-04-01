#include<stdio.h>
#include<stdlib.h>


/* Link list node */
struct node
{
    int data;
    struct node* next;
};

/* This function detects and removes loop in the list
  If loop was there in the list then it returns 1,
  otherwise returns 0 */
int detectAndRemoveLoop(struct node *list)
{
    /*Write your code here...!*/










}


/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
}

struct node *newNode(int key)
{
    struct node *temp = (int* )malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    return temp;
}

/* Drier program to test above function*/
int main()
{
    struct node *head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);

    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;

    detectAndRemoveLoop(head);

    printf("Linked List after removing loop \n");
    //printList(head);
    return 0;
}
