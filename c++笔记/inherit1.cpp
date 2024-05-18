#include<iostream>
using namespace std;
class animal{
public:
	int age;
};
class sheep:virtual public animal{};
class tuo:virtual public animal{};
class sheeptuo:public sheep,public tuo{};
int main03(void)
{
	sheeptuo st{};
	st.sheep::age = 6;
	st.tuo::age = 66;
	cout << st.sheep::age << endl;
	cout << st.tuo::age << endl;
	return 0;
}