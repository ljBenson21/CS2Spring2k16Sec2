#include <iostream>
#include <vector>
using namespace std;


template  <typename V>
void shuffle(vector<V> &v)
{
	for (int i = 0;i < v.size();i++)
	{
		int index = rand() % v.size();
		V v2 = v[index];
		v[index] = v[i];
		v[i] = v2;
	}
}

int main()
{
	vector<int> s;
	s.push_back(1);
	s.push_back(2);
	s.push_back(3);
	s.push_back(4);
	s.push_back(5);
	s.push_back(6);
	s.push_back(7);
	s.push_back(8);
	s.push_back(9);
	s.push_back(10);

	shuffle(s);
	cout << "The shuffled numbers from 1-10 are: " << endl;

	for (int i = 0;i < s.size();i++)
		cout << s[i] << "   ";
	cout << endl;
	return 0;

}