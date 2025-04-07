//B11866
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
int max, start, target;//max는 길이, start는 뛰어넘는 수, target은 지울 인덱스
cin >> max >> start;
vector<int> arr;
vector<int> p;
for (int i = 1; i <= max; i++){ arr.push_back(i); }
target = start - 1; //인덱스 입력
while(max>0)
{
	p.push_back(arr[target]);
	arr.erase(arr.begin() + target);
	max--;//줄어든 길이 보정

	target += start - 1;
	while (target > max-1)
	{
			target = target - max;
			if (max == 0)
				break;
	}
cout << "<";
for (int i = 0; i < p.size(); i++)
{
	cout << p[i];
	if (i == p.size() - 1)
		continue;
	else
		cout << ", ";

}
cout << ">";


return 0;
}}