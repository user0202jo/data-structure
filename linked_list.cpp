#include "linked_list.h"
#include <iostream>

// TODO: LinkedList 클래스 구현 작성
LinkedList::LinkedList(){
    Node* dummy1 = new Node(0);
    Node* dummy2 = new Node(0);
    dummy1->next_ = dummy2;
    dummy2->next_ = nullptr;
    head_ = dummy1;
    size_ = 0;  
}   

LinkedList::~LinkedList(){
    Node* cur = head_;

    for(int i = 0; i < size_; i++){
        Node* next = cur->next_;    
        delete cur;
        cur = next;
    }
}

void LinkedList::insert(int index, int value){
    if(index < 0 && index > size_) return;

    Node* newNode = new Node(value);        
    Node* cur = head_;

    for(int i  = 0; i < index; i++){
        cur = cur->next_;
    }

    newNode->next_ = cur->next_;
    cur->next_ = newNode;
    ++size_;
}

int LinkedList::get(int index){
    if(index < 0 || index > size_) return -1;
    Node* cur = head_->next_;   

    for(int i = 0; i < index; i++){
        cur = cur->next_;
    }

    return cur->value_;
}

void LinkedList::remove(int index){
    if(index < 0 && index > size_) return;

    Node* cur = head_;
    
    for(int i = 0; i < index; i++){
        cur = cur->next_;
    }

    Node* deleteNode = cur->next_;
    cur->next_ = deleteNode->next_;     
    delete deleteNode;
    --size_;
}

void LinkedList::print(){
    Node* printNode = head_->next_;  

    while(printNode->next_ != nullptr) {  
        std::cout << printNode->value_ << " ";
        printNode = printNode->next_;
    }
    std::cout << std::endl;
}

void LinkedList::initNodes(){
    Node* dummy1 = new Node(0);
    Node* dummy2 = new Node(0);
    dummy1->next_ = dummy2;
    dummy2->next_ = nullptr;
    head_ = dummy1;
    size_ = 0;  
}

void LinkedList::deleteNode(){
    Node* cur = head_;
    while (cur != nullptr) {
        Node* next = cur->next_;
        delete cur;
        cur = next;
    }
}

