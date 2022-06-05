#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    for (int ch; (ch = std::getchar()) != EOF; ) { 
        if (std::isprint(ch)) {
            std::cout << static_cast<char>(ch) << '\n';
        }
            
        if (ch == 27) {
            return EXIT_SUCCESS;
        }   
    }

    if (std::feof(stdin)) {  
        std::cout << "End of file reached\n";
    } else if (std::ferror(stdin)) { 
        std::perror("getchar()");
        std::cerr << "getchar() failed in file " << std::quoted(__FILE__)
            << " at line # " << __LINE__ - 14 << '\n';
        std::exit(EXIT_FAILURE);
    }

    _getch();
    return EXIT_SUCCESS;
}