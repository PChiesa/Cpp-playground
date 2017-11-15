//
//  main.cpp
//  cpp
//
//  Created by Pedro Chiesa on 19/10/17.
//  Copyright © 2017 Pedro Chiesa. All rights reserved.
//

#include "logger.h"
#include "stack.h"
#include "vehicle.h"

int main(int argc, const char * argv[]) {
    
    Log("hello from logger");
    //Vehicle v;
    //Log(v.Tires());
    
    MyStack<std::string> stack;

    stack.push("first");
    stack.push("second");
    stack.push("third");
    stack.push("fourth");

    while (stack.topNode != nullptr) {
        Log(stack.pop());
    }
    
    
    return 0;
}
