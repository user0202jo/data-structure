#ifndef STACK_H
#define STACK_H

#include "linked_list.h"

// TODO: Stack 클래스 정의 작성
class Stack : public LinkedList{
public:
    Stack();
    ~Stack();
    void push(int data); // Stack의 정의에 맞게 데이터를 삽입한다.
    int pop(); // Stack의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
    int peek(); // Stack의 정의에 맞게 다음에 pop 될 값을 미리 본다.
    Stack& operator+=(int value);   
};

#endif