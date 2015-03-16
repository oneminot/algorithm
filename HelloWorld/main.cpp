#include <algorithm>
#include <vector>
std::vector<int> GetUnsortedVector(std::vector<int> Unsorted)
{
	for (int i = 0; i < 1000000; i++) {
		Unsorted.push_back(rand());
	}
	return Unsorted;
}
int main()
{
	std::vector<int> Unsorted;
	Unsorted = GetUnsortedVector(Unsorted);
	std::sort(Unsorted.begin(), Unsorted.end());
	return 0;
}