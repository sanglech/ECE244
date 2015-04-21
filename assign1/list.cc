// list.cc -- Sample C++ program to be debugged with DDD

using namespace std;
#include <iostream>

#define size 10
int main()
{
    struct node {
         int id;
         struct node *next;
    };
    typedef struct node listnode;

    listnode *head;
    listnode *p;

    // Allocate a new node and initialize it
    p = new listnode;
    p->id = 1;
    p->next = NULL;

    // Make it the head of the list
    head = p;

    // Allocate another node and initialize it
    p = new listnode;
    p->id = 2;
    p->next = NULL;

    // Connect it to the head
    head->next = p;

    // Allocate yet another node and initialize it
    p = new listnode;
    p->id = 3;
    p->next = NULL;

    // Connect it to the previous node
    head->next->next = p;

    // Now we traverse the list we built and print the id's
    // Start at head
    p=head;
    while (p!=NULL) {
          cout << p->id << " ";
          p = p->next;
    }
    cout << endl;

    return 0;
}

