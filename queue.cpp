#include "queue.h"
#include <iostream>
#include <exception>
// TODO: Queue 클래스 구현 작성
Queue::Queue() : LinkedList(){

}

Queue::~Queue(){

}

void Queue::push(int data){
    LinkedList::insert(size_, data);
}

int Queue::pop(){
    if(size_ == 0){
        throw "Queue is empty";
    }
    int front = LinkedList::get(0);
    LinkedList::remove(0);

    return front;

}

int Queue::peek(){
    if(size_ == 0){
        throw "Queue is empty";
    }

    return LinkedList::get(size_);
}

Queue& Queue::operator+=(int value) {
  push(value);
  return *this;
}