/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2024, Unikraft GmbH and the Unikraft Authors.
 */

#ifndef TESTS_OS_DEMO_UTILS_UTILS_H_
#define TESTS_OS_DEMO_UTILS_UTILS_H_    1

#include <stdio.h>
#include <stdlib.h>

#define SIZE_T(x) ((size_t)(x))
#define SSIZE_T(x) ((ssize_t)(x))
#define CHAR_P(x) ((char *)(x))
#define VOID_P(x) ((void *)(x))
#define INT_P(x) ((int *)(x))
#define PINT_P(x) (*(int *)(x))

/* useful macro for handling error codes */
#define DIE(assertion, call_description)                \
    do {                                \
        if (assertion) {                    \
            fprintf(stderr, "(%s, %d): ",            \
                    __FILE__, __LINE__);        \
            perror(call_description);            \
            exit(EXIT_FAILURE);                \
        }                            \
    } while (0)

#endif  // TESTS_OS_DEMO_UTILS_UTILS_H_
