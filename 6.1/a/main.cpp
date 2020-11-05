#include <iostream>
#include <bitset>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

vector <string> v;

int main(int argc, char** argv) {
	ifstream file1("liczby.txt");
	ofstream fileOut;
	if (file1.good())
	{
		string x;
		while (file1 >> x) 
		{
			if (x[0] == x[x.length() - 1]) 
			{
				v.push_back(x);
			}
			
		}
		fileOut.open("wyjscie.txt"); //otworz plik do wynikow
		fileOut << v.size(); //zapisanie najmniejszej liczby z pliku czworkowego do pliku wynikowego
		fileOut.close();

	}
}
