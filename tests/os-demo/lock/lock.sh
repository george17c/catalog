#!/bin/bash

echo "Simple lock"
./lock

echo "Atomic"
./lock_atomic

echo "Spinlock"
./lock_spin