cmake_minimum_required(VERSION 3.27)
project(cVm C)

set(CMAKE_C_STANDARD 11)

add_executable(cVm main.c
        common.h
        chunk.h
        chunk.c
        memory.h
        memory.c
        debug.h
        debug.c
        value.h
        value.c
        vm.h
        vm.c
        time.h
        time.c
        compiler.h
        compiler.c
        scanner.h
        scanner.c)
