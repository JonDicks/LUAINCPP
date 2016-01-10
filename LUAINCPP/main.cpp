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
}

//static void *l_alloc (void *ud, void *ptr, size_t osize, size_t nsize){
//    (void) ud;
//    (void) osize;
//    if (nsize == 0){
//        free(ptr);
//        return NULL;
//    }
//    else  return realloc(ptr, nsize);
//}

//    AddIntToTable(lua, id, thingy);


bool testing(){
    try {
    additiontest();
    std::cout << "ADDITION TEST PASSED \n";
    }
    catch (int err){
        std::cout << "ADDITION TEST FAILED" << err << std::endl;
    }
// TO-DO: add more tests here in a try-catch
    return true;
}

int main() {
    if (testing())
        std::cout << "TESTS PASSED \n";
    else
        std::cout << "TESTS FAILED \n";

    return 0;
}
