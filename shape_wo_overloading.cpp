#include<iostream>
#include<cstring>
using namespace std;
class shape
{
	private:
		int lengthsquare;
		int reclen,recbrd;
		
	public:
	    int getlengthsquare(int v)
	    {
	    	lengthsquare=v;
		}
	    double areas();
	    int rectangle(int p,int q)
	    {
	    	reclen=p;
	    	recbrd=q;	
		}
	    double arear()
	    {
	    	return reclen*recbrd;
		}
	    
	
};
double shape :: areas()
{
   return lengthsquare*lengthsquare;	
}
main()
{
	int ls,lr,br;
	shape s;
	cout<<"enter length of square"<<endl;
	cin>>ls;
	s.getlengthsquare(ls);
	cout<<"area ofthe square is"<<s.areas()<<endl;
	cout<<"enter lngth and brdth"<<endl;
	cin>>lr>>br;
	s.rectangle(lr,br);
	cout<<"area of the square"<<s.arear();
	
	
}
