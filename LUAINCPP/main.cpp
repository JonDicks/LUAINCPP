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

int main() {
    additiontest();
    lua_State *lua = luaL_newstate();
//    const char *thingy = "thingy";
//    int id = 10;
//    lua_pushcfunction(lua, AddIntToTable(lua, id, thingy));
//    AddIntToTable(lua, id, thingy);

    lua_close(lua);
    return 0;
}

