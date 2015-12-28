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
}

int additiontest () {
    lua_State *luatest = luaL_newstate();
    std::cout << "built lua enviorment: " << luatest << "\n";
    lua_Integer testint;
    lua_pushinteger(luatest, testint);
    std::cout << "pushed integer 'testint' onto stack \n" << "testint is equal to: " << testint << std::endl;
    for (testint = 0; testint <= 10; testint += 1){
        std::cout << "testint =" << testint << std::endl;
        if (testint != 0){
            lua_remove(luatest, -1);
        }
        lua_pushinteger(luatest, testint);
        
    }
    lua_remove(luatest, -1);
    if (testint == 0) {
        std::cout << "removed testint from stack \n";
    }

    lua_close(luatest);
    return 0;
}

// lua function AddIntToTable takes in a lua state,
lua_CFunction AddIntToTable (lua_State *luatest, int id, const char *thingy){
//      creates new lua state.
    luatest = luaL_newstate();
//      pushes id[thingy] onto the stack
    lua_getfield(luatest, id, thingy);
    
//    says if there is a table with the index of id,
    if (lua_istable(luatest, id)){
        std::cout << "table id is equal to" << id << std::endl;
    }

    lua_close(luatest);
    return 0;
}