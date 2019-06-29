#include <stdio.h>

#include <iostream>
#include <string>

#include "/root/timp1/t2/shifr.h"


using namespace std;

string encrypt(string in, const int key);
string decrypt(string in, const int key);

int main(int argc, char **argv)
{

	shifr enc;
	int COLS = 2;

	string public_message = "LITTLEredfox";
	string privat_message = enc.encrypt(public_message, COLS);
	string decode_message = enc.decrypt(privat_message, COLS);

	cout << public_message << endl;
	cout << privat_message << endl;
	cout << decode_message << endl;

	return 0;
}
