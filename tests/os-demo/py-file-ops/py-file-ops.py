#
#   Copyright (c) 2024, Unikraft GmbH and the Unikraft Authors.
#

#!/usr/bin/env python

import sys
import time

def msg_and_wait(msg):
    print msg
    print "    Continuing ...\n",
    sys.stdout.flush()

    time.sleep(1)

def main():
    msg_and_wait("started program")

    f = open("f.txt", "w+")
    msg_and_wait("opened f.txt")

    for i in range(64):
        f.write("0123456789012345")
    f.flush()
    msg_and_wait("written 1024 bytes")

    f.seek(-512, 2)
    msg_and_wait("went back 512 bytes")

    buf = f.read(256)
    msg_and_wait("read 256 bytes")

    f.truncate(256)
    msg_and_wait("truncated file to 256 bytes")

    f.close()
    msg_and_wait("closed file")

if __name__ == "__main__":
    sys.exit(main())
