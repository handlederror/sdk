#pragma once

#include <stdio.h>
#include <iostream>

template <typename type>
type input(const char* input) {
    printf("%s", input);

    type result;
    std::getline(std::cin, result);

    return (type)result;
}
