#!/bin/bash

if [ "$#" -eq 1 ]; then
    gcc -Wall -Wextra -Werror -ansi -pedantic -o "$1" main.c pila.c
    exit $?
elif [ "$#" -eq 2 ]; then
    if [ "$2" -eq 1 ]; then
        if [ -x "$1" ]; then
            ./"$1"
        else
            echo "ERROR: ejecutable" >&2
            exit 70
        fi
    elif [ "$2" -eq 2 ]; then
        if [ -x "$1" ]; then
            ./"$1" < "$1"_stdin.txt > "$1"_stdout.txt 2> "$1"_stderr.txt
        else
            echo "ERROR: ejecutable" >&2
            exit 70
        fi
    else
        echo "ERROR: argumentos" >&2
        exit 64
    fi
else
    echo "ERROR: argumentos" >&2
    exit 64
fi
