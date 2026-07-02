#include "utilities.h" // Always include the corresponding header first.

/**
 * @brief Defines the function 'add'.
 *
 * This is the function definition. It provides the actual implementation (the
 * body) of the function that was declared in utilities.h.
 *
 * When the compiler processes this file, it generates the machine code for this
 * function. The linker will then connect calls to 'add' from other files
 * (like main.cpp) to this implementation.
 */
int add(int a, int b) {
    return a + b;
}
