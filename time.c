//
// Created by zhanzhi on 2024/2/22.
//
#include "time.h"

unsigned long getCurrentTimeMillis() {
    FILETIME ft;
    ULARGE_INTEGER uli;
    unsigned long long milliseconds;

    GetSystemTimeAsFileTime(&ft);

    uli.LowPart = ft.dwLowDateTime;
    uli.HighPart = ft.dwHighDateTime;

    return (uli.QuadPart / 10000);
}