#include <stdio.h>
#include <stdlib.h>

struct node{

int key;
int data;

struct node *next;
struct node *previous;

};

struct node *head = NULL;
struct node *current = NULL;

// Insert from the beginign


void insertFirst(int key, int data){

struct node *link = (struct node*) malloc(sizeof(struct node));

link->key = key;
link->data = data;

link->previous = NULL;
link->next = head;

head = link;

}

//Inserting after a certain key


void insertAfterKey(int key, int data, int keyIn){

struct node *link = (struct node*) malloc(sizeof(struct node));
link->data = data;
link->key = key;

struct node *temp = head;
struct node *nx = NULL;


while(temp->key != keyIn){
temp = temp->next;
}
nx = temp->next;

temp->next = link;
link->previous = temp;
link->next = nx;
nx->previous = link;


}


//Printing the linked list


void printList(){

struct node *temp = head;
printf("Printing the list [ ");

while(temp != NULL){

printf("(%d, %d)", temp->key, temp->data);
temp = temp->next;

}

printf(" ]");

}

// Main method

int main()
{
    insertFirst(0, 0);
    insertFirst(1, 10);
    insertFirst(2, 20);
    insertFirst(3, 30);

    printList();

    insertAfterKey(9, 90, 2);
    printf("\n");

    printList();

    return 0;
}
