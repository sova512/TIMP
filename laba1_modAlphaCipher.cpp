#include <iostream>
#include "modAlphaCipher.h"
#include <vector>
#include <map>
#include <string>
using namespace std;
wstring numAlpha=L"АБВГДЕЖЗИКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
map <wchar_t,int> alphaNum;

modAlphaCipher::modAlphaCipher(const wstring& skey)
{
    //wcout << L"modAlphaCipher constructor: " << skey <<endl;

    for (int i = 0; i<numAlpha.size(); i++) {
        alphaNum[numAlpha[i]]=i;
        //wcout << i << L"\t" << numAlpha[i]<< L"\t" << alphaNum[numAlpha[i]] << endl;
    }
    key = convert(skey);

}

std::wstring modAlphaCipher::encrypt(const wstring& open_text)
{
    vector<int> work = convert(open_text);
    for(unsigned i=0; i < work.size(); i++) {
        work[i] = (work[i] + key[i % key.size()]) % alphaNum.size();
    }
    return convert(work);
}

wstring modAlphaCipher::decrypt(const std::wstring& cipher_text)
{
    vector<int> work = convert(cipher_text);
    for(unsigned i=0; i < work.size(); i++) {
        work[i] = (work[i] + alphaNum.size() - key[i % key.size()]) % alphaNum.size();
    }
    return convert(work);
}

inline vector<int> modAlphaCipher::convert(const wstring& str)
{
    vector<int> result;
    for(auto c:str) {
        result.push_back(alphaNum[c]);
    }
    return result;
}

inline wstring modAlphaCipher::convert(const vector<int>& v)
{
    wstring result;
    for(auto i:v) {
        result.push_back(numAlpha[i]);
    }
    return result;
}
