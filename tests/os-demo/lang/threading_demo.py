#
#   Copyright (c) 2024, Unikraft GmbH and the Unikraft Authors.
#

#!/usr/bin/env python

import sys
import threading
import time

SLEEP_TIME = 1
NUM_THREADS = 8

def run():
    print "Thread {:d} is running".format(threading.currentThread().ident)
    time.sleep(SLEEP_TIME)

def main():
    th = [None for i in range(NUM_THREADS)]
    for i in range(NUM_THREADS):
        print "Creating new thread ...\n"
        time.sleep(SLEEP_TIME)
        # Start threads.
        th[i] = threading.Thread(target=run)
        th[i].start()
    for i in range(NUM_THREADS):
        # Wait for threads.
        th[i].join()

if __name__ == "__main__":
    sys.exit(main())
