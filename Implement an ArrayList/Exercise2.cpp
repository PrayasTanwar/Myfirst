#include<bits/stdc++.h>

using namespace std;

class Node{
public:

    int  data;
    Node *next;
};

class Stack{
    Node *head;
public:
    Stack(){
        head = NULL;
    }

    void push(int data){
        Node *temp=new Node();
        temp->data=data;

        if(head==NULL){
            temp->next=NULL;
            head=temp;
            return;
        }
        else{
            temp->next=head;
            head=temp;
            return;
        }
    }
    void pop(){
        if(head==NULL)
            return ;

        Node* temp=head;
        head=head->next;
        delete(temp);
    }
    int peek(){
        if(head==NULL){
            return -1;
        }

        return head->data;
    }
    bool IsEmpty(){
        if(head==NULL)
            return true;

        return false;
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    cout<< s.peek();

    return 0;
}
