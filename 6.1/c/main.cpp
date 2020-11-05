#include <iostream>
#include <bitset>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

vector <string> v;

int oct2dec(string osemkowa)
{
	int dziesietna = strtol(osemkowa.c_str(), NULL, 8);
	return dziesietna;
}


int main(int argc, char** argv) {
	ifstream file1("liczby.txt");
	ofstream fileOut;
	if (file1.good())
	{
		string x;
		int minn = INT_MAX, maxx = INT_MIN;
		string s_minn, s_maxx;
		int liczba;
		while (file1 >> x) 
		{
			bool ok = true;
			for (int i = 1; i < x.size(); i++)
			{
				if (x[i] < x[i-1])
					ok = false;
			}

			if (ok)
			{
				int xx = oct2dec(x);
				if (xx > maxx)
				{
					maxx = xx;
					s_maxx = x;
				}
				if (xx < minn)
				{
					minn = xx;
					s_minn = x;
				}
				v.push_back(x);
			} 
			
		}
		fileOut.open("wyjscie.txt"); //otworz plik do wynikow
		fileOut << "liczba: " << v.size() << "\n" << "min: " << s_minn << "\n" << "max: " << s_maxx; //zapisanie najmniejszej liczby z pliku czworkowego do pliku wynikowego
		fileOut.close();

	}
}