#include<bits/stdc++.h>
using namespace std;

struct node{
int age;
string name;
node *next;
node *prev;
node(string s, int x){
    name=s;
    age=x;
    prev = NULL;
    next = NULL;
}
};

void printtheLL(node *head){
    while(head!=NULL) {
        cout<<head->name<<"-"<<head->age<<" ";
        head=head->next;
    }

}

int main(){
    node *father=new node("Vikram Sharma",45);
    node *mother=new node("Kiran Sharma",42);
    node *myself=new node("Kuldeep Sharma",20);
    node *sister=new node("Bulbul Sharma",21);
    node *brother=new node("Gorav Sharma",17);

    node *head=father;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=myself;
    myself->prev=mother;
    myself->next=sister;
    sister->prev=myself;
    sister->next=brother;
    brother->next=NULL;
    brother->prev=sister;

    printtheLL(head);

    return 0;
}