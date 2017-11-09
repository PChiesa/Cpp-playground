//
//  vehicle.h
//  cpp
//
//  Created by Pedro Chiesa on 19/10/17.
//  Copyright © 2017 Pedro Chiesa. All rights reserved.
//

#ifndef vehicle_h
#define vehicle_h

class Vehicle{
private:
    unsigned short m_tires;
    
public:
    Vehicle():m_tires(4){};
    
    unsigned short Tires();
};

#endif /* vehicle_h */
