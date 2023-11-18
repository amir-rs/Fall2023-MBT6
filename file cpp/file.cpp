#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
int read_to_struct(char [][50]);
void print_data();
void family_i();
struct player
{
 char name[20];
 char family[20];
 float rate;
};
struct player profile[18];
int n;
main()
{
  char str[15][50];
  n = read_to_struct(str);
  print_data();
  cout<<"~~~~~~~~~~~~~~~~~~~"<<endl;
  family_i();
}
int read_to_struct(char p[][50])
{
  FILE *fp;
  fp = fopen("c:\\students.txt", "r");
  if(!fp)
  {
    cerr<< "\n file IO error!!! ";
    return 0;
  }
  char buffer[50];char *v ,*b,*f;
  int i = 0;
  while(fgets(buffer, sizeof buffer, fp))
  {
    strcpy(p[i], buffer);
    p[i][strlen(p[i]) - 1]= '\0';
    v=strchr(p[i],',');
    f=strchr(v+1,',');
	strcpy(profile[i].family,f+1);
    *f='\0';
	b=strchr(p[i],',');
  	strcpy(profile[i].name,b+1);
	*b='\0';
	profile[i].rate=atof(p[i]);
	i++;
  }
  fclose(fp);
  return i;
}
void print_data()
{
	for(int i=0;i<n;i++)
	{
		
		cout<<profile[i].name<<" "<<profile[i].family<<":"<<profile[i].rate<<endl;
	}
}
void family_i()
{	
 	char k[1][20];
	for(int i=0;i<n;i++)
	{
		strcpy(k[0],profile[i].family);
		
		if(k[0][strlen(k[0])-1]=='i')
		{
			cout<<profile[i].family<<","<<profile[i].name<<","<<profile[i].rate<<endl;
		}
}
}