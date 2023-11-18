#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	time_t date;
	time(&date);
	tm *lt = localtime(&date);
	cout<<asctime(lt);
}