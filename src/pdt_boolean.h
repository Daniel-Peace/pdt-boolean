/**
 * =========================================================
 * Copyright (c) 2026 Daniel Peace
 *
 * Permission is hereby granted, free of charge, to any
 * person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the
 * Software without restriction, including without
 * limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software
 * is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice
 * shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
 * KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 * THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 * =========================================================
 */

#ifndef PDT_BOOLEAN_DEFINITION
#define PDT_BOOLEAN_DEFINITION

#include <stdint.h>

/**
 * A type definition to use for booleans to enforce
 * type safty while using "PDT_Boolean"
 */
typedef uint32_t PDT_Boolean;

/**
 * The boolean value of `true` which is simply `1`.
 */
#define PDT_TRUE ((PDT_Boolean) 1)

/**
 * The boolean value of `false` which is simply `0`.
 */
#define PDT_FALSE ((PDT_Boolean) 0)

#endif
