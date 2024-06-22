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

void Reverse()
{
    Node *temp = new Node();
    temp = head;

    //find the last element by traversing
    while(temp != NULL)
    {
        //cout<<temp->data<<" ";
        temp = temp->next;
    }
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

    Traverse();

    return 0;
}