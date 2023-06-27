
#include <iostream>
using namespace std;

class A
{
public:
	void Sketchy()
	{
		cout << "\n A's Sketchy()";
		Sketchy(-1);
	}
	void Sketchy(int num)
	{
		cout << "\n A's Sketchy(" << num << ") ";
	}
};

class B : public A
{
public:
	void Sketchy()
	{
		cout << "\n B's sketchy () ";
		Sketchy(-2);
	}
	void Sketchy(int num)
	{
		cout << "\n B's Sketchy(" << num << ") ";
	}
};

class C : public B
{
public:
	void Sketchy(int num)
	{
		cout << "\n C's Sketchy(" << num << ") ";
	}
};

void Curious(A* wacky)
{
	wacky->Sketchy();
	((C*)wacky)->Sketchy(123);
}

void main()
{
	A* inky = new B;
	inky->Sketchy();
	inky->Sketchy(23);
	Curious(inky);

	B* pinky = new C;
	pinky->Sketchy();
	pinky->Sketchy(46);
	Curious(inky);
}

