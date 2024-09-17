#include "Array.tpp"
#include <iostream>
#include <string>

int main()
{
    Array<int> array_int(5);
    Array<char> array_char(5);
    Array<std::string> array_string(5);

    array_int[0] = 1;
    array_int[1] = 2;
    array_int[2] = 3;
    array_int[3] = 4;
    array_int[4] = 5;

    array_char[0] = 'a';
    array_char[1] = 'b';
    array_char[2] = 'c';
    array_char[3] = 'd';
    array_char[4] = 'e';

    array_string[0] = "un,";
    array_string[1] = "deux,";
    array_string[2] = "trois,";
    array_string[3] = "quatre,";
    array_string[4] = "cinque";

    for (int i = 0; i < array_int.size(); i++)
        std::cout << "Int array : " << array_int[i] << " \n";
    std::cout << std::endl;

    for (int i = 0; i < array_char.size(); i++)
        std::cout << "Char array : " << array_char[i] << " \n";
    std::cout << std::endl;

    for (int i = 0; i < array_string.size(); i++)
        std::cout << "String array : " << array_string[i] << " \n";
    std::cout << std::endl;

    Array<int> array_empty;
    std::cout << "Empty array size : " << array_empty.size() << std::endl;

    Array<int> array_operator_affectation;
    array_operator_affectation = array_int;
    for (int i = 0; i < array_operator_affectation.size(); i++)
        std::cout << "Array operator affectation : " << array_operator_affectation[i] << " \n";


    return 0;
}