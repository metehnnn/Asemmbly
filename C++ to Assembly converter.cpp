#include <iostream>
#include <fstream>
#include <string>
using namespace  std;

void StringToChar(string alinan, char *a) {

	for (int i = 0; alinan[i] != '\0'; i++) {
		a[i] = alinan[i];
	}
	cout << a;

}

int find(char s1[], char s2[]) {
   char *p = strstr(s1, s2);
	return (p) ? (int)(p - s1) : -1;
}
//*********************************************************
int main(int argc,char ** argv) {
	cout << argc << "  ";
	cout << argv[1]<<"  ";
	cout << argv[2]<<endl;
	
	string alinan;
	ifstream dosya;
	dosya.open(argv[1]);
	char *saklanan = argv[2];
	cout << endl;
		

	for (int i = 0; !dosya.eof(); i++) {
		dosya >> alinan;
		int size = alinan.length();
		char *a = new  char[size];
         a[size] = '\0';
		 StringToChar(alinan, a);
		 int deger = find(saklanan, a);
		 cout << "   :" << deger << endl;
		
	}

	system("pause");

	return 0;
}
