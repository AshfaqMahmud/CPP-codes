#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;


    Node(){
        data = 0;
        next = NULL;
    }

    Node(int x){
        data = x;
        next = NULL;
    }
};
Node *head;



//traversing LL
void Traverse()
{
    Node *temp = new Node();
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
//Insertions algorithm
void firstInsert(int val)
{
    Node *node = new Node(val);
    node->next = head;
    head = node;
}

void lastInsert(int val){
    Node *node = new Node(val);
    Node *temp = new Node();
    temp = head;
    while(temp->next != NULL)
    {
        //cout<<temp->data<<" ";
        
            temp = temp->next;  
    }
    temp->next = node;
    
}

int main()
{
    Node *temp = new Node();
    while(1){
        int choice;
        cout<<"Break? (Enter 1 to break or something eles to continue): ";
        cin>>choice;
        if(choice == 1)
            break;
        else{
            int val;
            cout<<"Enter value to insert in linkedlist: ";
            cin>>val;
            Node* node = new Node(val);
            if(head == NULL)
            {
                head = node;
                temp = node;
            }
            else{
                temp->next = node;
                temp = node;
            }
        }
    }

    //traverse the linkedlist
    Traverse();

    //Insertions in LinkedList
    cout<<"\nInsert in the first position: ";
    int x;
    cin>>x;
    //firstInsert(x);
    //Traverse();
    lastInsert(x);
    Traverse();
    return 0;
}