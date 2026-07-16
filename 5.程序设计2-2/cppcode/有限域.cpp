#include <iostream>
using namespace std;

class FiniteField {
private:
    int prime;
    int value;

    int findInverse(int b) const {
        for (int x = 1; x < prime; ++x) {
            if ((b * x) % prime == 1) {
                return x;
            }
        }
        return -1; // 理论上不会执行，因为p是素数且b≠0
    }

public:
    FiniteField(int p=1, int v=1) : prime(p) {
        value = (v % p + p) % p; // 确保值在[0, p-1]
    }

    FiniteField operator+(const FiniteField& other) const {
        return FiniteField(prime, (value + other.value) % prime);
    }

    FiniteField operator-(const FiniteField& other) const {
        return FiniteField(prime, (value - other.value + prime) % prime);
    }

    FiniteField operator*(const FiniteField& other) const {
        return FiniteField(prime, (value * other.value) % prime);
    }

    FiniteField operator/(const FiniteField& other) const {
        int inverse = findInverse(other.value);
        return FiniteField(prime, (value * inverse) % prime);
    }

    void Show() const {
        cout << value << endl;
    }
};

//StudybarCommentBegin
int main()
{
	int prime,a,b;
	char opt;
	//while(1){    //for test  in my  computer 
	cin>>prime;  //input a prime num
	cin>>a>>opt>>b;  // input like a+b;
	
	FiniteField f1(prime,a),f2(prime,b),f3;  ////Show How to  define constructor
	switch (opt){
	case '+':f3=f1+f2;break;
	case '-':f3=f1-f2;break;
	case '*':f3=f1*f2;break;
	case '/':f3=f1/f2;break;
	}
	f3.Show();
//	}    // end while
}
//StudybarCommentEnd
