


#include<bits/stdc++.h>
using namespace std;

class date{
		private:
		int Year,Month,Day;
		
		bool isLeap(int i)const{
			return (i%4==0&&i%100!=0)||(i%400==0);
		}
		int getMaxDay(int m,int y)const{
			if(m==2) return isLeap(y)?29:28;
			else if(m==4||m==6||m==9||m==11) return 30;
			else return 31;
		}
		 
	public:
		date(int y=2001,int m=1,int d=1):Year(y),Month(m),Day(d){
		}
		
		int year()const{
			return Year;
		}
		int month()const{
			return Month;
		}
		int day()const{
			return Day;
		}
		
		date Next()const{
			int y = Year;
	        int m = Month;
	        int d = Day + 1;
	        
	        if (d > getMaxDay(m, y)) {
	            d = 1;
	            m++;
	            if (m > 12) {
	                m = 1;
	                y++;
	            }
	        }
	        return date(y, m, d);
			}
	
};

//StudybarCommentBegin
int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;

	date D1,D2;

	int year;
	int month;
	int day;

	cin>>year>>month>>day; //shu ru di yi ge ri qi
	D1=date(year,month,day);

	D2=D1.Next();

	cout<<D2.year()<<" "<<D2.month()<<" "<<D2.day()<<endl;

	cout<<D1.year()<<" "<<D1.month()<<" "<<D1.day()<<endl;

	return 0;
}

//StudybarCommentEnd
