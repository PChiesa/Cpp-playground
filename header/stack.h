//
//  stack.h
//  cpp
//
//  Created by Pedro Chiesa on 05/11/17.
//  Copyright © 2017 Pedro Chiesa. All rights reserved.
//

#ifndef stack_h
#define stack_h

template<class T>
class MyStack {
    
public:
    MyStack();
    ~MyStack(){};
    unsigned int m_stackSize;
    
    void push(const T &element);
    T pop();
private:
    
    struct StackNode {
        StackNode(const T &element, StackNode *previousNode);
        ~StackNode(){};
        
        T m_nodeElement;
        StackNode *previousNode;
    };
    
    StackNode *topNode;
};
#endif /* stack_h */
