#pragma once

// This is a header guard. It prevents the file from being included more than
// once in any single source file, which would lead to re-definition errors.

/**
 * @brief Declares the function 'add'.
 *
 * This is a function declaration (or prototype). It tells the compiler:
 * 1. The function's name (`add`).
 * 2. The types of its parameters (two integers).
 * 3. Its return type (an integer).
 *
 * The compiler does not need to know *how* it works, only that it exists.
 * The actual implementation is in utilities.cpp.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of a and b.
 */
int add(int a, int b);
