#include <algorithm>
#include <vector>
int globalInteger = 0;
void recursive(int input)
{
	globalInteger++;
	recursive(input);
}
int main()
{
	recursive(globalInteger);
	return 0;
}