#include <iostream>
#include <bitset>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

vector <string> v;
int bin(string x)
{
	int ans = 0;
	int licz = 1;
	for (int i = x.size() - 1; i >= 0; i--)
	{
		if (x[i] == '-')
			ans *= -1;
		if (x[i] == '1')
			ans += licz;
		licz *= 2;
	}
	return ans;
}

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