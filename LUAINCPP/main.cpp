//
//  main.cpp
//  LUAINCPP
//
//  Created by Jon Dicks on 12/26/15.
//  Copyright © 2015 Jon Dicks. All rights reserved.
//

#include <iostream>
#include "INCLUA.h"

static void *l_alloc (void *ud, void *ptr, size_t osize, size_t nsize){
    (void) ud;
    (void) osize;
    if (nsize == 0){
        free(ptr);
        return NULL;
    }
    else  return realloc(ptr, nsize);
}

int main(int argc, const char * argv[]) {
    lua_State *lua = luaL_newstate();
    std::cout << "built lua enviorment \n";
    return 0;
}

//lua_CFunction foo (){
//    lua_State *lua = luaL_newstate();
//    luaopen_io(lua);
//    return 0;
//}