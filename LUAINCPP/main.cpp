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
    #include "test.cpp"
    #include "Test2.cpp"

}

using namespace std;

bool tests(){
    try {
        additiontest();
    }
    catch(int err) {
        cout << err;
        return false;
    }
    return true;
// TO-DO: add more tests here in a try-catch
}





int main() {
    if (tests())
        cout << "TESTS PASSED \n";
    else
        cout << "TESTS FAILED \n";

    return 0;
}
