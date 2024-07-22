// // A Stack based C++ program to find next
// // greater element for all array elements.
#include <bits/stdc++.h>
using namespace std;

// /* prints element and NGE pair for all
// elements of arr[] of size n */
// void printNGE(int arr[], int n)
// {
// 	stack<int> s;

// 	/* push the first element to stack */
// 	s.push(arr[0]);

// 	// iterate for rest of the elements
// 	for (int i = 1; i < n; i++) {

// 		if (s.empty()) {
// 			s.push(arr[i]);
// 			continue;
// 		}

// 		/* if stack is not empty, then
// 		pop an element from stack.
// 		If the popped element is smaller
// 		than next, then
// 		a) print the pair
// 		b) keep popping while elements are
// 		smaller and stack is not empty */
// 		while (s.empty() == false && s.top() < arr[i]) {
// 			cout << s.top() << " --> " << arr[i] << endl;
// 			s.pop();
// 		}

// 		/* push next to stack so that we can find
// 		next greater for it */
// 		s.push(arr[i]);
// 	}

// 	/* After iterating over the loop, the remaining
// 	elements in stack do not have the next greater
// 	element, so print -1 for them */
// 	while (s.empty() == false) {
// 		cout << s.top() << " --> " << -1 << endl;
// 		s.pop();
// 	}
// }

// /* Driver code */
// int main()
// {
// 	int arr[] = {1, 4, 5, 3, 6, 7};
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	printNGE(arr, n);
// 	return 0;
// }
// C++ code to implement the approach

#include <bits/stdc++.h>

using namespace std;

void nextLargerElement(int arr[], int n)
{
	vector<unordered_map<string, int> > s;

	// iterating over the array
	for (int i = 0; i < n; i++) {
		while (s.size() > 0
			&& s[s.size() - 1]["value"] < arr[i]) {
			// updating the array as per the stack top
			unordered_map<string, int> d = s[s.size() - 1];
			s.pop_back();
			arr[d["ind"]] = arr[i];
		}
		// pushing values to stack
		unordered_map<string, int> e;

		e["value"] = arr[i];
		e["ind"] = i;
		s.push_back(e);
	}

	// updating the array as per the stack top
	while (s.size() > 0) {
		unordered_map<string, int> d = s[s.size() - 1];
		s.pop_back();
		arr[d["ind"]] = -1;
	}
}

// Driver Code

int main()
{
	int arr[] = { 6, 8, 0, 1, 3 };
	int n = 5;

	// Function call
	nextLargerElement(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// This code is contributed by phasing17

