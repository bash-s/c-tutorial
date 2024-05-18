#include"computer.cpp"
int main07(void)
{
	Cpu* cpu = new IntelCpu;
	Memory* memory = new IntelMemory;
	Videocard* videocard = new IntelVideocard;
	Computer *first = new Computer(cpu, memory, videocard);
	first->work();
	delete first;
	return 0;
}