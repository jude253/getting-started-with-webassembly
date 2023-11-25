#include <emscripten.h>
#include <stdio.h>

// Declare a reusable JS function

EM_JS( void, jsFunction, (int n), {
    console.log("Call from EM_JS: " + n);
};)

int main() {

    printf("WASM Ready!\n");

    // Call JS function (eval)
    emscripten_run_script("console.log('Hello from C!')");


    // Call JS function (eval)
    emscripten_async_run_script("console.log('Hello from C - ASYNC!')", 2000);  


    int jsVal = emscripten_run_script_int("getNum()");

    printf("Value from getNum: %d\n", jsVal);


    char * jsValStr = emscripten_run_script_string("getStr()");

    printf("Value from getNum: %s\n", jsValStr);

    jsFunction(144);

    return 1;
}
