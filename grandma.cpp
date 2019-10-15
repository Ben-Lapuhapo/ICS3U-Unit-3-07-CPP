// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ben Lapuhapo
// Created on: Oct 2019
// This program uses a compound boolean statement

#include <iostream>

main() {
    // this function uses a compound boolean statement
    std::string integer_as_string;
    int age;

    // input
    std::cout << "Enter Your Age: ";
    std::cout << "";
    std::cin >> age;

    // process & output
    if (age >= 25 && age <= 40) {
        std::cout << "You can marry her Daughter";
    } else if (age > 40) {
        std::cout << "Too old to date her";
    } else {
        std::cout << "Too young to date";
    }
}
