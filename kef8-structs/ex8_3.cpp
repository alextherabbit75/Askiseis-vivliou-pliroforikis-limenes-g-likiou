#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct employee{
	int id;
	double salary;
	
};

struct company{
	employee manager
	int age;
};

int main(){
	company add;
	add.manager.id= 1234;
	add.manager.salary=1244.2;
	add.age=100;

return 0;
}
