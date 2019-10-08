#include <stdio.h>
#include <stdlib.h>
struct node{

int data;
int key;
struct node *next;

};

struct node *head = NULL;
struct node *current  = NULL;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void insertFirst(int key, int data){                               // Insert a node in the beginning

struct node *link = (struct node*) malloc(sizeof(struct node));
link->key = key;
link->data = data;

link->next = head;

head = link;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void insertLast(int key, int data){                                // Insert a node to the end
current = head;
while(current->next != NULL){
current = current->next;
}

struct node *link = (struct node*) malloc(sizeof(struct node));

link->key = key;
link->data = data;

link->next = NULL;
current->next = link;


}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void printList(){                                                 // Printing the linked list

struct node *temp = head;
printf("Printing the list [ ");

while(temp != NULL){

printf("(%d, %d)", temp->key, temp->data);
temp = temp->next;

}

printf(" ]");

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void deleteNode(int key){                         //Delete a sertain Node with a key

struct node *temp = head;

while(temp->key != key){
current = temp;
temp = temp->next;
}

current->next = temp->next;
temp->next = NULL;


}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Main method

int main()
{
    insertFirst(1,10);
    insertFirst(2,20);
    insertFirst(3,30);
    insertFirst(4,40);
    insertFirst(5,50);
    insertLast(6,32);
    printList();
    deleteNode(3);
    printf("\n");
    printList();
    return 0;
}
