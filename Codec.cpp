#include <iostream>
#include "EncodingConversion.h"

int main()
{
    std::string str_utf8 = u8"这是utf8字符串";
    std::cout << "utf8:" << str_utf8 << "\n";
    std::wstring wstr1 = EncodingConversion::ToWString(str_utf8);
    std::wcout << "wstring from utf8:" << wstr1 << "\n";
    std::cout << "wstring[utf8] to string:" << EncodingConversion::ToString(wstr1) << "\n";

    std::string str_gbk = EncodingConversion::UTF8ToGBK(str_utf8);
    std::cout << "gbk:" << str_gbk << "\n";
    std::wstring wstr2 = EncodingConversion::ToWString(str_gbk);
    std::wcout << "wstring from gbk:" << wstr2 << "\n";
    std::cout << "wstring[gbk] to string:" << EncodingConversion::ToString(wstr2) << "\n";
    std::cout << "Hello World!\n";
}
