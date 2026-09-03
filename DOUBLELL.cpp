#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = prev = NULL;
    }
};

class doublyll{
    node* head;
    node* tail;


    public:
    doublyll(){
        head=tail=NULL;
    }
    void push_front(int val){
        node* newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void push_back(int val){
        node* newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front(int val){
        node* temp = head;

        head = head->next;
        if(head != NULL){
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(int val){
        node* temp = tail;

        tail = tail->next;

        if(tail != NULL){
            tail->next = NULL;
            temp->prev = NULL;
            delete temp;
        }
    }

    void print(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

};




int main(){
    doublyll dll;

    dll.push_back(1);
    dll.push_back(2);
    dll.print();
    return 0;


}