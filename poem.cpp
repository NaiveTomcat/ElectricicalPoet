#include "poem.h"
#include <fstream>
#include <algorithm>
#include <numeric>
#include <random>
#include <cstdlib>
#include <sstream>

using namespace std;
random_device rnd;
using vs=string;

string current;
void cut()
{
	;
}

void lg(string& cu, const char * nm, int max, string rp)
{
	string::size_type pos = 0;
	while ((pos = current.find(rp, pos)) != string::npos)
	{
		string local;
		ifstream os(nm);
		for (int i = 0; i < (rnd() % max); i++)
		{
			os >> local;
		}
		current.replace(pos, pos + 1, local);
		pos++;
	}


}

poem::poem(string tit, int m)
{

	title = tit;
	string nouns;
	vs vt;
	vs vi;
	vs ad;
	vs interj;
	vs pron;
	vs grammar;

	ostringstream sout;
	const double lps = 2000;
	double ld = m;
	double time = ld / lps;
	cout << "大概需要" << time << "秒，是否继续<y/n>\n";
	char ch;
	cin >> ch;
	switch (ch)
	{
	case 'n':	cout << "再见\n";
				lines = "未生成";
				return;
				break;
	case 'y':	break;
	}
	int j;
	lc = 0;
	for (j = 0; j < m; j++)
	{
		
		ifstream grain;
		grain.open("jg");
		if (!grain.is_open())
		{
			cerr << "error when trying to read file\n";
			cin.get();
			cin.get();
			exit(EXIT_FAILURE);
		}
		int limit = rnd() % 225 + 1;
		for (int i = 0; i < limit; i++)
		{
			grain >> current;

		}
		
		lg(current, "n", 5421, "n");
		lg(current, "vi", 1350, "v");
		lg(current, "vt", 949, "t");
		lg(current, "adj", 1999, "a");
		lg(current, "pron", 10, "r");
		lg(current, "interj", 31, "i");

		
		sout << current << endl;
		lc++;
		cut();
	
	}

	lines = sout.str();

}

poem::~poem()
{
}

void poem::display(std::ostream& os)
{
	os << title << endl;
	os << lines << endl;
}
	

