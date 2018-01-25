//
//  Controller.cpp
//  ConsoleOutput
//
//  Created by Martinson, Branton on 1/25/18.
//  Copyright © 2018 Martinson, Branton. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
   
}

void Controller :: start()
{
    cout << "Branton Martinson" << endl;
    for(int index = 12; index < 31; index++)
    {
        cout << index + 1 << endl;
    }
    string name = "Branton Martinson";
    cout << name << endl;
    int life = 42;
    cout << name << " asks 'What is the meaning of life?' " << "Computer responds with: " << life << endl;
}
