//
//  FirstController.cpp
//  FirstCPlusPlus
//
//  Created by Odom, Tyler on 1/23/17.
//  Copyright © 2017 Odom, Tyler. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;

void FirstController:: usePointerToChange(int * pointedTo)
{
    *pointedTo = 2 * (876885);
    
}

void FirstController:: pointerJr(int *anotherPointer)
{
    *anotherPointer = 54 + 7;
}

void FirstController :: start()
{
    cout << "words here please :D" << endl;
    //this ->specialOutput();
    int myNumber = 9;
    int * numberPointer = &myNumber;
    //int ** pointerJr = &numberPointer;
    
    cout << myNumber << endl;
    useNumbers(myNumber);
    cout << myNumber << endl;
    
    cout << "Changing a value" << endl;
    myNumber = impactNumber();
    cout << "See - impacted: " <<myNumber << endl;
    
    cout << "Changing with a pointer" << endl;
    usePointerToChange(numberPointer);
    cout << "See how the number has been changed: " << myNumber << endl;
    
   
    
    
}

void FirstController:: specialOutput()
{
    cout << "Hi! How old are you?" << endl;
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout << "Type in your name :D" << endl;
    string name;
    cin >> name;
    cout << "your name is " << name << ". Wow. Cool." << endl;
    cin.ignore();
    cin >> name;
    cout << name;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << "you typed " << name << " and " << age << endl;
    cout << "Type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << endl;
    
   
}
void FirstController :: useNumbers(int suppliedNumber)
{
    cout << "I was given: " << suppliedNumber << endl;
    suppliedNumber = (suppliedNumber * 9 + 1234) / 87;
    cout << "It is now: " << suppliedNumber << endl;
}

int FirstController:: impactNumber()
{
    return 23457;
}
