//
//  intsandfunctions.cpp
//  LUAINCPP
//
//  Created by Jon Dicks on 1/10/16.
//  Copyright © 2016 Jon Dicks. All rights reserved.
//

#include <stdio.h>
#include <iostream>

/*
 
 ** THIS TEST IS FOR MAKING AN ARRAY AND USING THAT ARRAY IN A BASIC WAY. **
 ** VERY BASIC USAGES OF LUA INTERGER AND ERROR CONTROL                   **

 */
extern "C"{
    #include "INCLUA.h"

}
using namespace std;

bool addInt(){
    lua_State *luatest = luaL_newstate();
    cout << "lua environment built and is equal to " << luatest << endl;
    try {
    LUA_INTEGER index = 1;
    LUA_INTEGER num[index];
    LUA_INTEGER numtwo;
    num[index] = {numtwo};
    cout << "num[index] is equal to " <<  num[index] << endl;
    lua_close(luatest);
//        throw 20; // ** un-comment this to make the test fail. **
    }
    catch (int err){
        cout << "ERROR IN ADDINT" << err;
        lua_close(luatest);
        return false;
    }
    return true;
}

bool runaddInt(){
    if (addInt()){
        cout << "ADDINT TEST PASSED \n";
        return true;
    }
    else{
    cout << "ADDINT TEST FAILED";
    }
    return false;
}