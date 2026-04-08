#!/bin/bash

# Delete executable files with no extension (like compiled C++ binaries)
find . -type f -perm /111 -not -name "*.*" -not -path "*/.*" -delete

echo "Cleaned all C++ compiled files"