#include <stdio.h>

/* function declaration */
void func(void);

static int count = 5; /*global variable */

int main() {

  while(count--) {
    func();
  }

  return 0;
}

/* fucntion definition */
void func( void ) {
  static int i = 5; /* local storage variable */
  i++;

  printf("i is %d and count is %d\n", i, count);
}
