#include <iostream>
#include "Camera.h"
using namespace std;

class Mobile {
	private:
		Camera *ptrCamera;
	public:
		Mobile();
		Mobile(Camera *ptrCamera);
		~Mobile();

		bool ON();
		bool OFF();
};
