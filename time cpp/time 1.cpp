#include <iostream>
#include <time.h>
using namespace std;
int main(){
	
	time_t start_time ;
    time(&start_time);
    tm *lt;
    
    lt = localtime(&start_time);
    
    cout<< "time : "<<lt->tm_hour<<":"<<lt->tm_min<<":"<<lt->tm_sec
    <<endl << lt->tm_mday<< '/'<<lt->tm_year+1900<<'/'<<lt->tm_mon+1;
	
}