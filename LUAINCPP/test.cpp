//
//  test.cpp
//  LUAINCPP
//
//  Created by Jon Dicks on 12/26/15.
//  Copyright © 2015 Jon Dicks. All rights reserved.
//

#include <stdio.h>
#include <iostream>


extern "C"{
    #include "INCLUA.h"
    #include <string>
}
/*



**  THIS TEST IS INTENDED TO SHOW HOW TO:                             **
**      CREATE A LUA ENVIRONMENT,                                     **
**      TEST THAT THE LUA ENVIRONMENT HAS BEEN CREATED                **
**      CREATE A LUA INTEGER,                                         **
**      ADD THAT INTEGER TO THE STACK,                                **
**      INCREMENT THAT INTEGER IN A FOR LOOP,                         **
**      PRINT THE INTEGER TO CONSOLE,                                 **
**      REMOVE THE INTEGER FROM THE STACK,                            **
**      AND CHECK THAT THE INTEGER HAS BEEN REMOVED FROM THE STACK.   **



*/
bool additiontest () {
    try{
    lua_State *luatest = luaL_newstate();
    std::cout << "built lua environment: " << luatest << "\n";
    lua_Integer testint;
    lua_pushinteger(luatest, testint);
    std::cout << "pushed integer 'testint' onto stack \n" << "testint is equal to: " << testint << std::endl;
    int stackbefore = lua_gettop(luatest);
    for (testint = 0; testint < 10;){
        lua_pushinteger(luatest, testint);
        testint ++;   //NOTE THIS HAS BEEN PUT HERE INSTEAD OF IN THE () OF THE FOR LOOP BECAUSE OTHERWISE WE GET
                        //TESTINT AS 11 AT THE END BECAUSE IT RUNS ONE NUMBER OVER
        std::cout << "testint = " << testint << std::endl;
        lua_remove(luatest, -1); //REMOVE THIS IN ORDER TO MAKE THE TEST FAIL
    }
    int stackafter = lua_gettop(luatest);
    if ( stackbefore == stackafter) {
        std::cout << "removed testint from stack \n";
    }
    else throw "FAILED TO REMOVE TESTINT FROM STACK \n";
    lua_close(luatest);
    }
    catch (int err){
        std::cout << err;
        return false;
    }
    return true;
}

bool runadditiontest(){
    try {
        if (additiontest()){
            std::cout << "ADDITION TEST PASSED \n";
            return true;
        }
    } catch (const char* err) {
        std::cout << "ADDITION TEST FAILED \n";
        std::cout << err;
    }
    
    return false;
}

//bool runadditiontest(){
//    if (testadditiontest()){
//        return true;
//    }
//    else return false;
//}
