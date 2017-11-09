//
//  stack.cpp
//  cpp
//
//  Created by Pedro Chiesa on 06/11/17.
//  Copyright © 2017 Pedro Chiesa. All rights reserved.
//


#include "stack.h"

template<class T>
MyStack<T>::MyStack(){
    m_stackSize = 0;
    topNode = nullptr;
};

template<class T>
void MyStack<T>::push(const T &element){
    topNode = new StackNode(element, topNode);
    m_stackSize++;
}

template<class T>
T MyStack<T>::pop(){
    
    if(topNode == nullptr){
        return 0;
    }
    else{
        m_stackSize--;
        StackNode n(*topNode);
        delete topNode;
        topNode = n.previousNode;
        return n.m_nodeElement;
    }
};

template<class T>
MyStack<T>::StackNode::StackNode(const T &element, StackNode *previousNode){
    m_nodeElement = element;
    this->previousNode = previousNode;
}
