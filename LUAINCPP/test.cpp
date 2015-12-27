//
//  test.cpp
//  LUAINCPP
//
//  Created by Jon Dicks on 12/26/15.
//  Copyright © 2015 Jon Dicks. All rights reserved.
//

#include <stdio.h>

extern "C"{
    #include "INCLUA.h"
}

int test() {
    lua_State *lua = luaL_newstate();
    lua_newtable(lua);
    luaL_Buffer buffy;
    const char *s;
//    size_t sizeOfString = 10;
    luaL_buffinit(lua, &buffy);
    luaL_addstring(&buffy, s);
//    thingy = lua_gettable(lua, *s);
    
    return 0;
}