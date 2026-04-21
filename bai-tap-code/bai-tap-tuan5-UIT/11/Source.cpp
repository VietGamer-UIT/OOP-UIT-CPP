#include <iostream>

using namespace std;

class Hello {
public:
	Hello() {
		cout << "Entering the Hello program saying...\n";
	}
	~Hello() {
		cout << "Then exiting...\n";
	}
};

Hello beginEnd;

int main() {
	cout << "Hello, world.\n";
	return 0;
}