#pragma once

#include <string>
using namespace std;
class shifr {
public:
	string encrypt(string in, const int key);
	string decrypt(string in, const int key);
};
