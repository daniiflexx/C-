#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char **argv){
    int i;
    int j;
    std::string str;

    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    for (i=1; i<argc; i++) { 
        for (j = 0; argv[i][j]; j++)
            argv[i][j] = std::toupper(argv[i][j]);
        str += argv[i];
    }
    std::cout << str;
    return (0);
}
