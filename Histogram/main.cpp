#include <iostream>
#include "histogram.h"

using namespace std;

int main(){
	
	histogram h;  //creazione istogramma
	h.create(); 
	
	h.add(0);   //inserimento valori
	h.add(1);
	h.add(3);
	h.add(0);
	h.add(3);
	h.add(4);
	h.add(1);
	h.add(4);
	h.add(3);
	h.add(0);
	h.add(3);
	h.add(0);
	h.add(1);
	h.add(1);  
	
	h.print();
	
	h.remove(1);    //rimozione elementi
	h.remove(3);
	cout<<"Second"<<endl;
	
	h.print(); 
	cout<<"La media e': "<<h.mean();
	cout<<"La moda e' : "<<h.mode();
	
	return 0;

}
