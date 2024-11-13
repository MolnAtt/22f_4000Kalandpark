#include <iostream>
#include <vector>

using namespace std;



class Fa
{
public:
	string id;
	int magassag;
	string tipus;

	Fa(string id, int magassag, string tipus)
	{
		this->id = id;
		this->magassag = magassag;
		this->tipus = tipus;
	}

	Fa()
	{
	}
};

vector<Fa> Beolvas_fak() {
	string nem_kell;
	cin >> nem_kell;
	cin >> nem_kell;
	cin >> nem_kell;
	vector<Fa> fak(100);
	for (size_t i = 0; i < 100; i++)
	{
		string id;
		int magassag;
		string tipus;
		cin >> id;
		cin >> magassag;
		cin >> tipus;
		fak[i] = Fa(id, magassag, tipus);
	}
	return fak;
}

int main()
{
	vector<Fa> fak = Beolvas_fak();
}