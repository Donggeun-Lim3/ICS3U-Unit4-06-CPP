// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This program is nested program

#include <iostream>


main() {
    int loopCounter1;
    int loopCounter2;
    int loopCounter3;
    for (loopCounter1 = 0; loopCounter1 < 256; loopCounter1++) {
        for (loopCounter2 = 0; loopCounter2 < 256; loopCounter2++) {
            for (loopCounter3 = 0; loopCounter3 < 256; loopCounter3++) {
                std::cout << "RGB(" << loopCounter1 << "," << loopCounter2
                << "," << loopCounter3 << ")" << std::endl;
            }
        }
    }
}
