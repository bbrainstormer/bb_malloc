#!/usr/bin/env bash

if ! [ -x "$(command -v cmake)" ]; then
    echo "Cmake not installed"
    exit 1
fi

mkdir -p build
cd build
cmake ..
make
