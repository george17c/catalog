/*
 * Copyright (c) 2024, Unikraft GmbH and the Unikraft Authors.
 */

#include <stdio.h>

static char shellcode[64];

int main(void) {
    void (*f)(void) = (void (*)(void)) shellcode;

    printf("Give data: ");
    fgets(shellcode, 64, stdin);
    f();

    return 0;
}
