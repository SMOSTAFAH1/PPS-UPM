#!/bin/bash

compile_and_exit() {
    gcc -Wall -Wextra -Werror -ansi -pedantic -o "$1" main.c pila.c
    exit $?
}

execute_program() {
    if [ -x "$1" ]; then
        ./"$1" "$2"
    else
        echo "ERROR: ejecutable" >&2
        exit 70
    fi
}

if [ "$#" -eq 1 ]; then
    compile_and_exit "$1"
elif [ "$#" -eq 2 ]; then
    case "$2" in
        1) execute_program "$1" ;;
        2) execute_program "$1" < "$1"_stdin.txt > "$1"_stdout.txt 2> "$1"_stderr.txt ;;
        *) echo "ERROR: argumentos" >&2; exit 64 ;;
    esac
else
    echo "ERROR: argumentos" >&2
    exit 64
fi