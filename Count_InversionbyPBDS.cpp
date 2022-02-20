// Ordered set in GNU C++ based
// approach for inversion count
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

// Ordered Set Tree
typedef tree<int, null_type, less_equal<int>,
			rb_tree_tag,
			tree_order_statistics_node_update>
	ordered_set;

// Returns inversion count in
// arr[0..n-1]
int getInvCount(int arr[], int n)
{
	int key;
	// Initialise the ordered_set
	ordered_set set1;

	// Insert the first
	// element in set
	set1.insert(arr[0]);

	// Initialise inversion
	// count to zero
	int invcount = 0;

	// Finding the inversion
	// count for current element
	for (int i = 1; i < n; i++) {
		set1.insert(arr[i]);

		// Number of elements strictly
		// less than arr[i]+1
		key = set1.order_of_key(arr[i] + 1);

		// Difference between set size
		// and key will give the
		// inversion count
		invcount += set1.size() - key;
	}
	return invcount;
}

// Driver's Code
int main()
{
	int arr[] = { 8, 4, 2, 1 };
	int n = sizeof(arr) / sizeof(int);

	// Function call to count
	// inversion
	cout << getInvCount(arr, n);
	return 0;
}
