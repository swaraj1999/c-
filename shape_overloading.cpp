#include<iostream>
#include<cstring>
using namespace std;
class shape
{
	private:
		int lengthsquare;
		int reclen,recbrd;
		
	public:
//	    int getlength(int v)
//	    {
//	    	lengthsquare=v;
//		}
	    double area(int v)
		{
			lengthsquare = v;
			return lengthsquare*lengthsquare;	
		}
//	    int getlength(int p,int q)
//	    {
//	    	reclen=p;
//	    	recbrd=q;	
//		}
	    double area(int p,int q)
	    {
	    	reclen=p;
	    	recbrd=q;
	    	return reclen*recbrd;
		}
	    
	
};
main()
{
	int ls,lr,br;
	shape s;
	cout<<"enter length of square"<<endl;
	cin>>ls;
	cout<<"area ofthe square is"<<s.area(ls)<<endl;
	cout<<"enter lngth and brdth"<<endl;
	cin>>lr>>br;
//	s.getlength(lr,br);
	cout<<"area of the square"<<s.area(lr,br);
	
	
}
