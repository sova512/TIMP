#include <stdio.h>

#include <iostream>
#include <string>

#include "shifr.h"


using namespace std;

/*
 * Маршрут записи: по горизонтали слева направо, сверху вниз.
 * Маршрут считывания: сверху вниз, справа налево.
 */

string encrypt(string in, const int key);
string decrypt(string in, const int key);

int main(int argc, char **argv)
{

	shifr enc;
	int COLS = 100;
	
	try {
		string public_message = "littleredfox";
		string privat_message = enc.encrypt(public_message, COLS);
		string decode_message = enc.decrypt(privat_message, COLS);
		
		
		cout << public_message << endl;
		cout << privat_message << endl;
		cout << decode_message << endl;
	
	} catch (const encryptException & e) {
        cerr << "Error: " << e.what() <<endl;
	}

	return 0;
}
