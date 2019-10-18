#include "std_lib_facilities.h"

using namespace std;

int main(){
try{
	cout<<"Add meg az ertekeket, operatorok(+,-,/,*)\nPelda:2+4\n'Ctrl+z' a kilepes\n";
	double d,a,b;
	double c=0;
	char op;
	if(cin){
		cin>>a>>op>>b;
		switch(op){
    			case '+' : c=a+b; cout<<"Eredmeny: "<<c<<"\n"; break;
    			case '-' : c=a-b; cout<<"Eredmeny: "<<c<<"\n"; break;
   			case '/' : c=a/b; if (b==0) error("0-val nem osztunk\n"); else cout<<"Eredmeny: "<<c<<"\n"; break;
    			case '*' : c=a*b; cout<<"Eredmeny: "<<c<<"\n"; break;
   			case 'q' : exit(0); break;
    		default :  error("Nincs ilyen lehetoseg!\n"); break;}
		}
	while(cin){
		cin>>op>>d;
		switch(op){
    	case '+' : c+=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    	case '-' : c-=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    	case '/' : if (d==0) error("0-val nem osztunk\n"); else {c/=d; cout<<"Eredmeny: "<<c<<'\n';} break;
    	case '*' : c*=d; cout<<"Eredmeny: "<<c<<"\n"; break;
    	case 'q' : exit(0); break;
    	default:   error("Nincs ilyen lehetoseg!\n"); break;}
		}

cout<<"Vegeredmeny: "<<c;

        return 0;
	}

	catch (exception& e) {
		cerr << "Hiba: " << e.what() << endl;
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Hiba\n";
		keep_window_open();
		return 2;
	}
}
