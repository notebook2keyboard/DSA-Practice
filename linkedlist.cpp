#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }

};

class list{
    node* head;
    node* tail;

    public:

    list(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }
    void print(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next ;
        }
        cout << NULL ;
    }
 
};

int main(){
    list ll;
    ll.push_front(10);
    ll.push_front(20);

    ll.print();

    return 0;


}