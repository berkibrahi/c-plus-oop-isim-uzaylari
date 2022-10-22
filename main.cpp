#include <iostream>

using namespace std;
namespace A{
	int x;
	int y;
	int z;
	void yazdir(){
		cout<<" A dan selamlar"<<endl;
	}
	
}
namespace B{
	int x;
	int y;
	int z;
	void yazdir(){
		cout<<" B den selamlar"<<endl;
	}
	
}

int main(int argc, char** argv) {
	A::x=10;
	B::x=20;
	cout<<	A::x<<endl;
    cout<<	B::x<<endl;
    B::yazdir();
    A::yazdir();
    
	return 0;
}
