#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
};

void push(Node** head, int item)
{
    Node* temp = new Node;
    temp->data = item;
    temp->next = *head;
    temp->prev = NULL;
    
    if(*head != NULL)
        (*head)->prev =  temp;
        
    *head = temp;

}


void printList(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void printReverseList(Node* head)
{
    Node* temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
    }
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<"\n";
}

int main()
{
    int arr[] = {60, 50, 40, 30, 20, 10};
    int n =  sizeof(arr)/sizeof(int);
    
    Node* head = NULL; 
    for(int i = 0; i < n; i++)
    {
        push(&head, arr[i]);
    }

    printList(head);
    printReverseList(head);
    
    return 0;
}