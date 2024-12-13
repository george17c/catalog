/*
 * Copyright (c) 2024, Unikraft GmbH and the Unikraft Authors.
 */

import std.stdio;

void main() {
    string line;

    line = stdin.readln();
    stderr.write("reader: I read " ~ line);
}
