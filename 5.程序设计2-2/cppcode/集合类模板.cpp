#include <iostream>
#include <algorithm>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    void simplify() {
        if (denominator == 0) denominator = 1;
        if (denominator < 0) {
            numerator *= -1;
            denominator *= -1;
        }
        int gcd = __gcd(abs(numerator), denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

public:
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) { simplify(); }

    bool operator<(const Fraction& other) const {
        return numerator * other.denominator < other.numerator * denominator;
    }

    bool operator==(const Fraction& other) const {
        return numerator == other.numerator && denominator == other.denominator;
    }

    bool operator!=(const Fraction& other) const { return !(*this == other); }

    friend ostream& operator<<(ostream& os, const Fraction& f) {
        if (f.denominator == 1) os << f.numerator;
        else os << f.numerator << "/" << f.denominator;
        return os;
    }

    friend istream& operator>>(istream& is, Fraction& f) {
        int num, den;
        is >> num >> den;
        f = Fraction(num, den);
        return is;
    }
};

template <typename T>
class Cassemblage {
private:
    T elements[4000];
    int count;

public:
    Cassemblage() : count(0) {}

    void Set(T arr[], int size) {
        for (int i = 0; i < size; ++i) elements[i] = arr[i];
        sort(elements, elements + size);
        int new_count = unique(elements, elements + size) - elements;
        count = new_count;
    }

    void Show() const {
        if (count == 0) cout << "empty\n";
        else {
            for (int i = 0; i < count; ++i)
                cout << elements[i] << (i == count-1 ? "\n" : " ");
        }
    }

    Cassemblage operator+(const Cassemblage& other) const {
        Cassemblage result;
        merge(elements, elements + count, other.elements, other.elements + other.count, result.elements);
        result.count = unique(result.elements, result.elements + (count + other.count)) - result.elements;
        return result;
    }

    Cassemblage operator&(const Cassemblage& other) const {
        Cassemblage result;
        set_intersection(elements, elements + count, other.elements, other.elements + other.count, result.elements);
        result.count = result.elements - result.elements;
        return result;
    }

    Cassemblage operator-(const Cassemblage& other) const {
        Cassemblage result;
        set_difference(elements, elements + count, other.elements, other.elements + other.count, result.elements);
        result.count = result.elements - result.elements;
        return result;
    }
};

int main(int argc, char* argv[])
{
	Cassemblage <Fraction> z1, z2, x1;
	Fraction a1[1000], a2[1000];
	int i, n1, n2;
	char op;
		cin >> n1;
	for(i=0; i<n1; i++)
	{
		cin>>a1[i];
	}
       z1.Set(a1, n1);
       
	cin >> n2;
	for(i=0; i<n2; i++)
	{
		cin>>a2[i];
	}	
	z2.Set(a2, n2);
    cin>>op;
	switch(op)
    {
        case '+' :
          x1=z1+z2;
          x1.Show();
            break;
        case '-' :
            x1=z1-z2;
            x1.Show();
            break;
        
        case '&':
            x1=z1&z2;
            x1.Show();
            break;
        default:
            cout<<"Invalid operator!";
    }

	return 0;
}
