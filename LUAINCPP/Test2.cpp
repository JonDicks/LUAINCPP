//
//  Test2.cpp
//  LUAINCPP
//
//  Created by Jon Dicks on 1/10/16.
//  Copyright © 2016 Jon Dicks. All rights reserved.
//

#include <stdio.h>
#include <iostream>

extern "C"{
    #include "INCLUA.h"

}
using namespace std;

lua_CFunction addInt(LUA_INTEGER num){
    lua_State *luatest = luaL_newstate();
    string daysInWeek[1] = {"one"};
    cout << daysInWeek[0];
//    num[] = {};
    
    lua_close(luatest);
    return 0;
}