//StudybarCommentBegin
#include<vector>
#include <iostream>
using namespace std;
int main()
{	vector<int> arr;
    int i;
	int a;
	for(i=0;i<4;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	vector <int> ::iterator it;
	it=arr.begin();
//StudybarCommentEnd
 	it = arr.begin();
    while (it != arr.end()) {
        if (*it == 8) {
            it = arr.erase(it); // 删除元素并更新迭代器
        } else {
            ++it;
        }
    }
	
//StudybarCommentBegin
	cout << "After remove 8:\n";
	for(it = arr.begin();it<arr.end(); ++it)
		cout << * it <<endl;
}
//StudybarCommentEnd
