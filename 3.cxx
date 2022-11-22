//create class in c++
#include<iostream>
using namespace std;
class Test
{
	int i;
public:
	void show()
	{
		cout<<"Inside Member Function";
	}
};
int main(){
	Test obj;
	obj.show();
}