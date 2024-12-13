/*
 * Copyright (c) 2024, Unikraft GmbH and the Unikraft Authors.
 */

#include <unistd.h>

int main(void) {
    size_t phys_pages;

    phys_pages = sysconf(_SC_PHYS_PAGES);

    return 0;
}
