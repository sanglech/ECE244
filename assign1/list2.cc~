// list2.cc -- Sample C++ program to be debugged with DDD

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
    listnode *p2;

    // Allocate a new node and initialize it
    p = new listnode;
    p->id = 1;
    p->next = NULL;

    // Make it the head of the list
    head = p;

    // Allocate a second node and initialize it
    p = new listnode;
    p->id = 2;
    p->next = NULL;

    // Connect it to the head
    head->next = p;

    // Allocate a third node and initialize it
    p = new listnode;
    p->id = 3;
    p->next = NULL;

    // Connect it to the previous node
    head->next->next = p;

    // Finally, create a fourth node and initialize it
    p = new listnode;
    p->id = 4;
    p->next = NULL;

    // Now insert this new node between the second and third nodes
    // in the list
    
    // Get a pointer to the second node
    p2 = head->next;
    p->next = p2->next;
    p2->next = p;
    
    // Now we traverse the list we built and print the id's
    // We should see 1 2 4 3 printed

    // Start at head
    p=head;
    while (p!=NULL) {
          cout << p->id << " ";
          p = p->next;
    }
    cout << endl;

    return 0;
}

