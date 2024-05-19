#include "list.h"
#include <iostream>
#include <exception>    
// TODO: List 클래스 구현 작성
List::List(){
    initNodes();
}

List::~List(){
    LinkedList::deleteNode();
}

void List::insert(int index, int value){
    LinkedList::insert(index, value);
}

int List::get(int index){
    if(size_ == 0){
        throw "List is empty";
    }
    return LinkedList::get(index);
}

void List::remove(int index){
    if(size_ == 0){
        throw "List is empty";
    }
    LinkedList::remove(index);
}

    