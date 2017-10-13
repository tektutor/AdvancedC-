#include "Child.h"

int main ( ) {

	shared_ptr<Father> rajiv( new Father() );
	shared_ptr<Mother> sonia( new Mother() );
	shared_ptr<Child> rahul( new Child(rajiv,sonia) );

	rajiv->setChild ( rahul );
	sonia->setChild ( rahul );

	cout << "\nReference count of father is " << rajiv.use_count() << endl;
	cout << "\nReference count of mother is " << sonia.use_count() << endl;
	cout << "\nReference count of father is " << rahul.use_count() << endl;

	rajiv->print();
	sonia->print();
	rahul->print();

	return 0;
}

