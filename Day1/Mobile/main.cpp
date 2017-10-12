#include "Mobile.h"
#include "DummyCamera.h"

int main ( ) {

	Mobile mobile(new DummyCamera());
	mobile.ON();

	return 0;
}
