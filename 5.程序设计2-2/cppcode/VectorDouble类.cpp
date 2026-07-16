
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class VectorDouble {
private:
    double* data;
    unsigned int capacity_val;
    unsigned int size_val;

public:
    // 1. 默认构造函数
    VectorDouble() : capacity_val(0), size_val(0) {
		data=new double[0];
	}

    // 2. 带参数的构造函数
    VectorDouble(unsigned int cap, double init_val = 0.0) : capacity_val(cap), size_val(cap) {
        data = new double[cap];
        for (unsigned int i = 0; i < cap; ++i) {
            data[i] = init_val;
        }
    }

    // 3. 析构函数
    ~VectorDouble() {
        delete[] data;
    }

    // 4. capacity函数
    unsigned int capacity() const {
        return capacity_val;
    }

    // 5. size函数
    unsigned int size() const {
        return size_val;
    }

    // 6. operator[] 重载
    double& operator[](unsigned int i) {
        if (i >= size_val) {
            cerr << "Out of Range!" << endl;
            exit(EXIT_FAILURE);
        }
        return data[i];
    }

    // 7. 拷贝构造函数（深拷贝）
    VectorDouble(const VectorDouble& other) : capacity_val(other.capacity_val), size_val(other.size_val) {
        data = new double[capacity_val];
        for (unsigned int i = 0; i < capacity_val; ++i) {
            data[i] = other.data[i];
        }
    }

    // 8. const版本operator[]
    const double& operator[](unsigned int i) const {
        if (i >= size_val) {
            cerr << "Out of Range!" << endl;
            exit(EXIT_FAILURE);
        }
        return data[i];
    }

    // 9. operator<< 重载
    friend ostream& operator<<(ostream& os, const VectorDouble& vd) {
        for (unsigned int i = 0; i < vd.capacity_val; ++i) {
            os << setw(10) << vd[i];
            if ((i + 1) % 5 == 0) {
                os << endl;
            } else {
                os << " ";
            }
        }
        if (vd.capacity_val % 5 != 0) {
            os << endl;
        }
        return os;
    }

    // 10. operator= 重载
    VectorDouble& operator=(const VectorDouble& other) {
        if (this == &other) {
            return *this;
        }
        delete[] data;
        capacity_val = other.capacity_val;
        size_val = other.size_val;
        data = new double[capacity_val];
        for (unsigned int i = 0; i < capacity_val; ++i) {
            data[i] = other.data[i];
        }
        cout << "operator = called" << endl;
        return *this;
    }
};

//StudybarCommentBegin
int main()
{
    
    const VectorDouble v1(28,5.23);
    
    VectorDouble v2;
    v2 = v1;
    
    cout << v2.capacity() << endl;
    cout << v2.size() << endl;
    
    v2[5] = 1.2345;
    v2[13] = 4.5;
    
    cout << "v1 & v2" << endl;
    cout << v1 << v2 << endl;
    
    return 0;
}

//StudybarCommentEnd

