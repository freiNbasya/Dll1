#include "pch.h"
#include "Dll1.h"
#include <iostream>
#include <string>



DLL1_API std::string encrypt(std::string text, int key)
{
    std::string code = text;

    for (int i = 0; i < text.length(); i++)
        code[i] = ((code[i] + key) - 32) % 95 + 32;
    return code;
}

DLL1_API std::string decrypt(std::string text, int key)
{
    std::string code = text;

    for (int i = 0; i < text.length(); i++)
        code[i] = ((code[i] - key) - 32 + 10000 * 95) % 95 + 32;
    return code;
}
