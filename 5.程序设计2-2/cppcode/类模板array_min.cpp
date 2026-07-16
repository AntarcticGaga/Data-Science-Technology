//StudybarCommentBegin
#include<iostream>
using namespace std;
//StudybarCommentEnd

template<typename T,size_t N>
class array_min{
	private:
		T arr[N];
		size_t count;
	public:
		 array_min() : count(0) {}

    void add(int i) {
        if (count < N) {
            cin >> arr[count];
            count++;
        }
    }

    T min() const {
        if (count == 0) return T();
        T min_val = arr[0];
        for (size_t i = 1; i < count; ++i) {
            if (arr[i] < min_val) {
                min_val = arr[i];
            }
        }
        return min_val;
    }

    void print_min() const {
        if (count == 0) {
            cout << "empty";
        } else {
            cout << min();
        }
    }
};


//StudybarCommentBegin
int main(void)
{
    int i;
	array_min <int, 4>  array1;
	array_min <double, 5>  array2;
	for (i = 0; i<4; i++)
	{
		array1.add(i);
	}
	for (i = 0; i<5; i++)
	{
		array2.add(i);
	}
	array1.print_min();
	cout << endl;
	array2.print_min();
	cout << endl;
        return 1;
}
//StudybarCommentEnd
