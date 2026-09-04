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


class circular{
    node* head;
    node* tail;

    public:
    circular(){
        head = tail = NULL;
    }

    void insert_first(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
            tail -> next = head;
        }else{
            newnode->next = head;
            head = newnode;
            tail -> next = head;
        }

    }

    void insertattail(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
            tail ->next = head;
        }else{
            newnode ->next = head;
            tail ->next = newnode;
            tail = newnode;
        }

    }

    void deleteathead(int val){
        if(head == NULL){
            return;
        }else if
            (head == tail){
                delete head;
                head = tail = NULL;
            
            }else{
                node* temp = head;
                head = head->next;
                tail->next = head;
                temp->next = NULL;
                delete temp;
            }
        }


        void deleteattail(int val){
            if(head == NULL){
                return;
            }
            else if(head == tail){
                delete tail;
                head = tail = NULL;
            }else{
                node* temp = tail;
                node* prev = head;
                while(prev->next != tail){
                    prev = prev->next;
                    tail= prev;
                    tail->next = head;
                    temp->next = NULL;
                    delete temp;
                }
            }
        }
    

    

        void print(){
            if(head ==NULL) return;

            cout << head->data << "->";
            node* temp = head->next;


            while(temp != head){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << temp->data << endl;
        }

    
};






int main(){

    circular cll;
   cll.insertattail(4);
    cll.insertattail(5);
    cll.insertattail(6);
    cll.insertattail(7);
   

   cll.print();

   cll.deleteattail(5);
   cll.print();

    return 0;
}