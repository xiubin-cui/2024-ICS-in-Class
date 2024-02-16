#include <assert.h>
#include <stdio.h>
// This code is a recursive C program that handles command line arguments
// and does some interesting pointer manipulation
int main(int argc, char *argv[]) {
  int (*f)(int, char *[]) = main;
  if (argc != 0) {
    char ***a = &argv, *first = argv[0], ch = argv[0][0];
    // Prints the first string of command line arguments and the first character
    // of that string.
    printf("arg = \"%s\"; ch = '%c'\n", first, ch);
    assert(***a == ch);
    f(argc - 1, argv + 1);
    // Calls the previously defined function pointer f, passing the updated
    // parameters.
    // argc - 1 decrements the number of arguments, argv + 1 moves the argument
    // array pointer to the next argument.
    // This implements a recursive call and the program will continue processing
    // the remaining command line arguments.
  }
}
