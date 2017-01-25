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

void FirstController :: start()
{
    cout << "words here please :D" << endl;
    this ->specialOutput();
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
