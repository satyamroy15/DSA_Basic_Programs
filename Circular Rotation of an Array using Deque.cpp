// Program to perform Circular Rotation by d

#include <bits/stdc++.h>
using namespace std;

// function to perform circular rotation by d elements
void rotate(deque<int> deq, int d, int n)
{
	// pushing first d elements from last to beginning
	for(int i=0; i<d; i++)
	{
		int value = deq.back();
		deq.pop_back();
		deq.push_front(value);
	}
	
	// printing the rotated array
	for(int i=0; i<n; i++)
	{
		cout << deq[i] << " ";
	}
	cout << endl;
}

// Driver Program
int main()
{
	deque<int> v = {1,2,3,4,5,6};
	int n = v.size();
	int d = 5;
	
	// d%n checks the case where the number of rotations (d) is more than the size of deque(n)
	rotate(v, d%n, n);

}

