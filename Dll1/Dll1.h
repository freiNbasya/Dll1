#pragma once
#include <string>
#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif

extern "C" DLL1_API std::string encrypt(std::string text, int key);
extern "C" DLL1_API std::string decrypt(std::string text, int key);