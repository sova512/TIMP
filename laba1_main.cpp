#include <iostream>
#include "/root/timp1/t1/modAlphaCipher.h"
using namespace std;

void check(const wstring& Text, const wstring& key) {
    wstring cipherText;
    wstring decryptedText;
    modAlphaCipher cipher(key);
    cipherText = cipher.encrypt(Text);
    decryptedText = cipher.decrypt(cipherText);
    wcout<<L"key=" << key <<endl;
    wcout<<Text<<endl;
    wcout<<cipherText<<endl;
    wcout<<decryptedText<<endl;
    if (Text == decryptedText)
        wcout<<L"Ok\n";
    else
		wcout<<L"Err\n";
}

int main(int argc, char **argv) {
	locale loc("ru_RU.UTF-8");
	locale::global(loc);
    check(L"ПРОВЕРКАПРОВЕРКА", L"ТЕСТ");
    return 0;
}
