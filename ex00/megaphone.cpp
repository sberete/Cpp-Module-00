#include <iostream>
#include <string>
#include <algorithm>

// int main(int argc, char **argv)
// {
//     if (argc > 1)
//     {
//         for (int i = 1; i < argc; i++)
//         {
//             for (int j = 0; argv[i][j]; j++)
//             {
//                 if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
//                     argv[i][j] -= 32;
//                 std::cout << argv[i][j];
//             }
//         }
//     }
//     else
//         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
//     std::cout << std::endl;
// }

int main(int argc, char **argv)
{
    std::string str;
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            str = argv[i];
            std::transform(str.begin(), str.end(), str.begin(), toupper);
            std::cout << str;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}