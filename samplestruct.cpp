#include<iostream>

using namespace std;
typedef struct stud stud;
struct stud
{
  int rnum;
};

int main()
{
  int n;
  cin>>n;
  stud **a=new stud[n];
  cout<<"enter values"<<endl;
  for(int i=0;i<n;i++)
    cin>>a[i]->rnum;
  for(int i=0;i<n;i++)
    cout<<a[i]->rnum<<"\t";
}
/*
#include <iostream>
#include <iomanip>

using namespace std;

struct StrCar
{
	char RegCode[10];
	int PhoneNo;
	char Colour[10];
	int Model;
};

int main(){
	StrCar **Car;                  //Pointer to pointer or type StrCar
	Car = new StrCar *[10];  //Declares array of pointers
	Car[0] = new StrCar;      //Initializes car[0] only

	cout<<"enter1:"<<endl;

	cin  >> Car[0]->RegCode;

	cout<<"you entered"<<endl;

	cout<<Car[0]->RegCode<<endl;

	system("pause");
	return 0;
*/
