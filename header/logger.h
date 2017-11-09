//
//  logger.h
//  cpp
//
//  Created by Pedro Chiesa on 19/10/17.
//  Copyright © 2017 Pedro Chiesa. All rights reserved.
//

#ifndef logger_h
#define logger_h

#include <iostream>

template<class T>
void Log(T message){
    std::cout << message << std::endl;
};

#endif /* logger_h */
