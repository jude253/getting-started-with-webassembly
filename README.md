

## Getting Started with WebAssembly

udemy course link: https://www.udemy.com/course/webassembly-emscripten

example compile command:


```
emcc -sEXPORTED_FUNCTIONS=_main,_getDoubleNumber,_greet -o=public/program -sERROR_ON_UNDEFINED_SYMBOLS=0 main.c
```