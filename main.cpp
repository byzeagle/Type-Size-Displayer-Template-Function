#include <iostream>
#include "system_properties.hpp"

                                /*      Author : Ugur Buyukdurak      */

using namespace std;

int main() {

        cout << " --- Arbitrary Type Example --- " << endl;
	
        //Example usage with arbitrary types
	display_sizes<int, short int, double>();
        
        cout << endl;
        cout << " --- TYPES MACRO Example --- " << endl;
        
        //Example Usage with TYPES macro
	display_sizes<TYPES>();

        cout << endl;
        cout << " --- null_check function example --- " << endl;

        //Example Usage for null_check function
        null_check();

	return 0;
}