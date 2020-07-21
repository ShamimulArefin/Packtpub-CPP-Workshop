// #include <iostream>
// #include <string>

// #define echo "hello world!"

// int main()
// {
//     #ifdef echo
//     std::cout << echo;
//     #endif

//     #undef echo
//     #ifdef echo
//     std::cout << echo;
//     #endif
// }

// ------------

// #include <iostream>
// #define level 2

// int main()
// {
//     #if level == 0
//     #define score 0
//     #else
//     #if level == 1
//     #define score 15
//     #endif
//     #endif

//     #if level == 2
//     #define score 30
//     #elif level == 3
//     #define score 45
//     #endif

//     #ifdef score
//     std::cout << score;
//     #endif
// }

// ---------------------------

// #include <iostream>
// #define W64

// int main()
// {
//     #ifdef W64
//     std::cout << "this is windows computer";
//     #else
//     #ifdef OSX
//     std::cout << "this is mac computer";
//     #endif
//     #endif
// }