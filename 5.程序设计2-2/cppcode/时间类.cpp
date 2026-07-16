//StudybarCommentBegin
#include <iostream>
#include <iomanip>
using std::cin;
 using std::cout;
 using std::endl;
 using std::setfill;
 using std::setw;
//StudybarCommentEnd

class Time{
	private:
		int hour,minute,second;
	public:
		Time(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){
		}
		
		void setTime(int h,int m,int s){
			hour=h;minute=m;second=s;
		}
		
		void printTime()
		{
		 cout<<setfill('0')<<setw(2)<<hour
		  <<":"<<setw(2)<<minute<<":"
		  <<setw(2)<<second<<endl;
		}
		
		Time& operator++(){
			second++;
			if(second>=60){
				second-=60;minute++;
				if(minute>=60){
					minute-=60;hour=(hour+1)%24;
				}
			}
			return *this;
		}
		
		Time operator++(int){
			Time old=*this;
			++(*this);
			return old;
		}
		
		friend Time operator+(const int i,const Time &t); 
}; 

Time operator+(const int i,const Time &t){
			int total=i+t.hour*3600+t.minute*60+t.second;
			
			int hour=total/3600;
			int rem=total%3600;
			int minute=rem/60;
			int second=rem%60;
			
			hour%=24;
			if(second>=60){
				minute+=second/60;second%=60;
				
			}
			
			if(minute>=60){
					hour+=minute/60;minute%=60; 
				}
			hour%=24;
			return Time(hour,minute,second);
			
		}


//StudybarCommentBegin
int main()
{
	int hour, minute, second;
	int increase;
	Time t1(23, 45, 0), t2, t3(t1);
	cin >> hour >> minute >> second >> increase;
	t1.setTime(hour, minute, second);
	t1.printTime();
	t2 = ++t1;      //This is  for ++t1
	t2.printTime();
	
	t3 = increase + t1;  //This is  for friend function
	t3.printTime();

	t1 = t2++;     //This is  for t2++
	t1.printTime();
	t2.printTime();

	t1 = (++t3)++;  // This is for left value (return the reference of  the object )
	t1.printTime();
	t3.printTime();
	return 0;
}
//StudybarCommentEnd
