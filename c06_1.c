#!/bin/bash
cd $1
for f in *; do
mv "$f" "${f%.*}.bu"
done
