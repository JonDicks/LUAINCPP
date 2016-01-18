//
//  main.cpp
//  LUAINCPP
//
//  Created by Jon Dicks on 12/26/15.
//  Copyright © 2015 Jon Dicks. All rights reserved.
//

#include <iostream>
extern "C"{
    #include "INCLUA.h"
    #include "additiontest.cpp"
    #include "intsandfunctions.cpp"

}

using namespace std;

bool tests(){

    if(runadditiontest()){
        
        return true;
        
    }
    else {
    return false;
    }
}

int main() {
    if (runadditiontest() & runaddInt())
        cout << "TESTS PASSED \n";
    else
        cout << "TESTS FAILED \n";

    return 0;
}
