
#include<iostream>
#include<iomanip>
#include<cmath> 
using namespace std;

class Fraction{
	private:
		int x,y;
		
		int gcd(int a,int b){
			if(a<b) swap(a,b);
			while(b!=0){
				int temp=a%b;a=b;b=temp;
			}
			return a;
		}
		
		void simplify(){
			int r=gcd(abs(x),abs(y));
			x/=r;y/=r;
			if(y<0){
				x*=-1;y*=-1;
			}
		}
	public:
		Fraction(int x=1,int y=1):x(x),y(y){
			simplify();
		}
		
		Fraction operator+(Fraction &f){
			int newX=x*f.y+y*f.x;
			int newY=y*f.y;
			return Fraction(newX,newY);
		}
		
		Fraction operator-(Fraction &f)const{
			int newX=x*f.y-y*f.x;
			int newY=y*f.y;
			return Fraction(newX,newY);
		}
		
		Fraction operator*(Fraction &f){
			int newX=x*f.x;
			int newY=y*f.y;
			return Fraction(newX,newY);
		}
		
		Fraction operator/(Fraction &f){
			int newX=x*f.y;
			int newY=y*f.x;
			return Fraction(newX,newY);
		}
		
		int operator==(Fraction &f){
			if(x*f.y==y*f.x) return 1;
			else return 0;
		}
		
		int operator!=(Fraction &f)const{
			if(x*f.y!=y*f.x) return 1;
			else return 0;
		}
		
		int operator>(Fraction &f){
			if(x*f.y>y*f.x) return 1;
			else return 0;
		}
		int operator>=(Fraction &f){
			if(x*f.y>=y*f.x) return 1;
			else return 0;
		}
		int operator<(Fraction &f){
			if(x*f.y<y*f.x) return 1;
			else return 0;
		}
		int operator<=(Fraction &f){
			if(x*f.y<=y*f.x) return 1;
			else return 0;
		}
		
		friend ostream& operator<<(ostream& os,const Fraction &f); 
		friend istream& operator>>(istream& is,Fraction &f); 
};

ostream& operator<<(ostream& os,const Fraction &f){
	os<<f.x<<"/"<<f.y;
	return os;
}

istream& operator>>(istream& is,Fraction &f){
	is>>f.x>>f.y;
	f.simplify();//输入的时候可以做化简 
	return is;
}
//StudybarCommentBegin
int main(int argc, char *argv[]) {
	
	Fraction a(1),b(1,3),c(-3,9),d(2,-6);
	
	cin>>a>>b;
	
	cout << "a= " << a << ", b = " << b << endl;
	
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	
	cout << "a == b is " << (a == b) << endl;
	cout << "a != b is " << (a != b) << endl;
	cout << "a <= b is " << (a <= b) << endl;
	cout << "a >= b is " << (a >= b) << endl;
	cout << "a < b is " << (a < b) << endl;
	cout << "a > b is " << (a > b) << endl;
        cout << "c == d is " << (c == d) << endl;
	
    return 1;
}
//StudybarCommentEnd
