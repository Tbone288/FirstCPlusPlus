//
//  Timer.hpp
//  FirstCPlusPlus
//
//  Created by Odom, Tyler on 1/31/17.
//  Copyright © 2017 Odom, Tyler. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t executionTime;
public:
    //constructor has the same name as class.
    Timer();
    void startTimer();
    void finishTimer();
    void resetTimer();
    void displayTimerInformaion();
    long getExecutionTimeInMicroSeconds();
};

#endif /* Timer_hpp */
