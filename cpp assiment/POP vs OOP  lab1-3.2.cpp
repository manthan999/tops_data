#include<iostream>
using namespace std;
class rectangle {
	public:
		float l,w,area;
		void getdata(){
			cout<<"\n Enter the value of l";
			cin>>l;
			cout<<"Enter the value of w:";
	        cin>>w;
	        
	        area = l*w;
		}
		void display(){
			cout<<"\n l="<<l;
			cout<<"\n w="<<w;
			cout<<"\nArea= "<<area;
		}
};
main(){
	rectangle r1;
    r1.getdata();
    r1.display();
}
