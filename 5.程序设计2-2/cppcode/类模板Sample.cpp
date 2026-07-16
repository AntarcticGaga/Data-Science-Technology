//StudybarCommentBegin
#include<iostream>
using namespace std;
//StudybarCommentEnd
template<typename T>
class Sample{
	private:
		T data;
	public:
		Sample(T a=T()):data(a){
		}
		void disp(){
			cout<<data<<endl;
		}
	 	Sample operator+(const Sample&t){
			 return Sample(data+t.data);
		}
};


//StudybarCommentBegin
int main(void){        
        int a1, a2;
	float b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	Sample<int> s1(a1), s2(a2),s3;
	Sample<float> t1(b1), t2(b2),t3;
	s3 = s1 + s2;
	t3 = t1 + t2;
	s3.disp();
	t3.disp();

       return 1;
}
//StudybarCommentEnd
