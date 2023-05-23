#!/bin/sh
find . -name '*.sh' -execdir basename {} \; | sed 's/.sh$//'