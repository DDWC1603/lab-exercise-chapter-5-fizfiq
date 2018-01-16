//finish up this program.thanks.

#include <iostream>
#include <iomanip>

using namespace std;

void OmbakKeluar();
void ombakOmbak(int repeat,int height,int up,int down);

int main()
{
	OmbakKeluar();
}
void ombakOmbak(int repeat=3,int height=5,int up=2,int down=2)
{
	while(repeat >0)
	{
		for(/*up*/int i=1;i<=up;i++)
		cout<<setw(height)<<right<<"+"<<endl;
		for(/*down*/int i=1;i<=down;i++)
		cout<<"+"<<endl;
		repeat --;
	}
}



void OmbakKeluar()
{

	cout<<"\nwaveDemo\n";
	ombakOmbak();
}
