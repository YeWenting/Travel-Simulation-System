﻿//
//  main.cpp
//  Travel-Simulation-System
//
//  Created by YeWenting. on 16/4/10.
//  Copyright © 2016年 Apart I, 404. All rights reserved.
//


#include "TrafficNet.h"
#include <iostream>
#include <cstdlib>

#include "People.h"

using namespace std;

TrafficNet trafficNet;

int current_time = 0;

int main(int argc, const char * argv[])
{
    //People a;
    
    trafficNet.Add_People();
    
//    vector <int> a(3, 10), b(2, 20);
//    
//    a.insert(a.end(), b.begin(), b.end());
//    copy(a.begin(), a.end(), ostream_iterator <int>(cout," "));
    return 0;
}
