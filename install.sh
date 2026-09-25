#!/bin/bash

echo "[-] Copying header file to .local/include/"
cp ./src/pdt_boolean.h $HOME/.local/include/
if [ $? -eq 0 ]; then
    echo "[-] Successfully copied header file..."
else
    echo "[-] Failed to copy header file..."
    echo "[-] Exiting..."
    exit 1
fi
