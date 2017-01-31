//
//  Timer.cpp
//  FirstCPlusPlus
//
//  Created by Odom, Tyler on 1/31/17.
//  Copyright © 2017 Odom, Tyler. All rights reserved.
//

#include "Timer.hpp"
#include <iostream>

using namespace std;

Timer:: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: finishTimer()
{
    executionTime = clock() - executionTime;
}

long Timer :: getExecutionTimeInMicroSeconds()
{
    return executionTime;
}

void Timer :: displayTimerInformaion()
{
    cout << "It took this long to execute: " << executionTime << endl;
    cout << "That is this many seconds: " << executionTime/CLOCKS_PER_SEC << endl;
}
