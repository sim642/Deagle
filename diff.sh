#!/bin/sh

# Produces a diff between CBMC and Deagle with superficial changes excluded.

git diff b0744ea6aaf396bcd54f3539d246f1fb717011d3..HEAD -- \
    ':/src/' \
    ':!*.yy.cpp' \
    ':!*y.output' \
    ':!*.tab.cpp' \
    ':!*.tab.h' \
    ':!*.ypp' \
    ':!/src/cat/location.hh' \
    ':!*.a' \
    ':!*.exe' \
    ':!*.inc' \
    ':!/src/indexer.log' \
    ':!/src/cil' \
    ':!/src/locksmith'
