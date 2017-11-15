//
//  stack.h
//  cpp
//
//  Created by Pedro Chiesa on 05/11/17.
//  Copyright © 2017 Pedro Chiesa. All rights reserved.
//

#ifndef stack_h
#define stack_h

template<typename T>
class MyStack {
    
public:
    MyStack(){
        m_stackSize = 0;
        topNode = nullptr;
    };
    ~MyStack(){};
    unsigned int m_stackSize;
    
    void push(const T &element){
        topNode = new StackNode(element, topNode);
        m_stackSize++;
    };
    
    T pop(){
        
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

    
    
private:    
    struct StackNode {
        StackNode(const T &element, StackNode *previousNode){
            m_nodeElement = element;
            this->previousNode = previousNode;
        };
        ~StackNode(){};
        
        T m_nodeElement;
        StackNode *previousNode;
    };

public:
    StackNode *topNode;
    
};
#endif /* stack_h */
