#include<iostream>
#include"computer.h"
using namespace std;
class Cpu
{
public:
	virtual void caculate() = 0;
	virtual ~Cpu(){}
};
class Memory
{
public:
	virtual void storage() = 0;
	virtual ~Memory() {}
};
class Videocard
{
public:
	virtual void display() = 0;
	virtual ~Videocard() {}
};
class IntelCpu :public Cpu
{
public:
	IntelCpu()
	{}
	virtual void caculate()
	{
		cout << "Intel Cpu is calulating" << endl;
	}
};
class IntelMemory:public Memory
{
public:
	virtual void storage()
	{
		cout << "IntelMemory is storing" << endl;
	}
};
class IntelVideocard:public Videocard
{
public:
	virtual void display()
	{
		cout << "IntelVideocard is displaying" << endl;
	}
};
class LenovoCpu :public Cpu
{
public:
	virtual void caculate()
	{
		cout << "LenovoCpu is calulating" << endl;
	}

};
class LenovoMemory:public Memory
{
public:
	virtual void storage()
	{
		cout << "LenovoMemory is storing" << endl;
	}
};
class LenovoVideocard:public Videocard
{
public:
	virtual void display()
	{
		cout << "LenovoVideocard is displaying" << endl;
	}
};
class Computer
{
public:
	Computer(Cpu* cpu, Memory* memory, Videocard*
		videocard)
	{
		cu = cpu;
		mem = memory;
		vc = videocard;
	}
	void work()
	{
		cu->caculate();
		mem->storage();
		vc->display();
	}
	~Computer()
	{
		if (cu != nullptr)
		{
			delete cu;
			cu = nullptr;
		}
		if (mem != nullptr)
		{
			delete mem;
			mem = nullptr;
		}
		if (vc != nullptr)
		{
			delete vc;
			vc = nullptr;
		}
		cout << "computerµÄÎö¹¹" << endl;
	}
private:
	Cpu* cu;
	Memory *mem;
	Videocard *vc;
};
