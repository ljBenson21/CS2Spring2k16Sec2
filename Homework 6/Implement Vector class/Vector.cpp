#include <iostream>
#include <vector>

using std::cout;
using std::endl;

template <typename V>
class vector
{
private:
	V elements[100];
	int vectorSize; 
	
public:
	vector<V>();
	vector<V>(int size);
	vector<V>(int size, V defaultValue);
	void push_back(V element);
	void pop_back();
	unsigned const size();
	V const at(int index);
	bool const empty();
	void clear();
	void swap(vector v2);
};

template <typename V>
vector<V> ::vector()
{
	vectorsize = 0;
}

template <typename V>
vector<V> ::vector(int size)
{
	vectorsize = size;
}

template <typename V>
vector<V> ::vector(int size, V defaultValue)
{
	vectorsize = size;
	elements = defaultValue;
}

template <typename V>
void vector<V> :: push_back(V elements) // adds an element to the top
{
	elements[vectorsize++] = elements;
}

template <typename V>
void vector<V>:: pop_back() // deletes the last element of the vector
{
	return elements[--vectorsize];
}

template <typename V>
unsigned const vector<V> :: size() // checks the size of the vector
{
	return vectorsize;
}

template <typename V>
V const vector<V>:: at(int location) // returns the element of the vector in that location
{
	return elements[location];
}

template <typename V>
bool const vector<V> ::empty() // checks to see if vector is empty
{
	if (vectorsize == 0)
		return true;
	else
		return false;
}

template <typename V>
void vector<V> ::clear() // resets the vector size to zero
{
	vectorsize = 0;
}
template <typename V>
void vector<V> ::swap(vector v2) // swaps a vector with another vector then deletes the swapped vector
{
	V vector2[100];
	int vector2size = v2.size();
	for (int i = 0; i < v2.size(); i++)
	{
		vector2[i] = v2.at(i);
	}

	v2.clear();
	for (int i = 0; i < size(); i++)
	{
		v2.push_back(at(i));
	}

	clear();
	for (int i = 0; i < vector2size; i++)
	{
		push_back(temp[i]);
	}
}

int main()
{
	cout << "I like patties" << endl;
}