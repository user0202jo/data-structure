#include "stack.h"
#include <iostream>
#include <exception>
// TODO: Stack 클래스 구현 작성
Stack::Stack() : LinkedList(){
    
}

Stack::~Stack(){
   
}

void Stack::push(int data){
    LinkedList::insert(0, data);
}

int Stack::pop(){
    if(size_ == 0){
        throw "Stack is empty";
    }
    int top = LinkedList::get(0);
    LinkedList::remove(0);
    return top;
}


int Stack::peek(){
    if(size_ == 0){
        throw "Stack is empty";
    }
    return LinkedList::get(0);
}

Stack& Stack::operator+=(int value) {
  push(value);
  return *this;
}
