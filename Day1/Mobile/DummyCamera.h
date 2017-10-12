#include <iostream>
using namespace std;

class DummyCamera : public Camera {
	public:
		bool ON() {
			cout << "Dummy camera ON method invoked ..." << endl;
			return true;
		}

		bool OFF() {
			cout << "Dummy camera OFF method invoked ..." << endl;
			return true;
		}
};
