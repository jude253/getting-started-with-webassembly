#include <string.h>

void numLog( int n );
void strLog( char *offset, int length );

int main() {
  return 42;
}

void greet(){
  char *msg = "Hello from C !";
  strLog( msg, strlen(msg) );
}

void getDoubleNumber( int x ) {
  numLog( x*2 );
}

