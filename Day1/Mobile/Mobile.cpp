#include "Mobile.h"

Mobile::Mobile() {
	//ptrCamera = new Camera();
}

Mobile::Mobile(Camera *ptrCamera)
{
	this->ptrCamera = ptrCamera;	 
 }
Mobile::~Mobile() {
}

bool Mobile::ON() {

	cout << "Mobile ON method " << endl;

	if ( ptrCamera->ON() ) {
		cout << "Complex power on functionality happens here ..." << endl;
		return true;
	}
	
	cout << "Complex power on failure logic happens here ..." << endl;
	return false;

}


