
#include <iostream>
#include <limits>
using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }
    
};


// Complete the insertSortedLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

void insert_node( SinglyLinkedList* list ,int node_data)
{
		SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

		if (!list->head) {
			list->head = node;
		} else {
			list->tail->next = node;
		}

		list->tail = node;
}



void printLinkedList(SinglyLinkedList* list) {
  SinglyLinkedListNode *p;
            p = list->head;
            while (p != NULL)
            { cout<< p->data<<" ";
            p = p->next;
            }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

void reverseLinkedList(SinglyLinkedList* list) 
    { 
        // Initialize current, previous and next pointers 
        SinglyLinkedListNode* current = list->head; 
        SinglyLinkedListNode *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            // Store next 
            next = current->next; 
            // Reverse current node's pointer 
            current->next = prev; 
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        list->head = prev; 
    } 


int main()
{
    SinglyLinkedList* llist = new SinglyLinkedList();
    int llist_count;


    cin >> llist_count;

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;

        insert_node(llist,llist_item);
    }
    
    
    reverseLinkedList(llist);
    printLinkedList(llist);

    return 0;
}
