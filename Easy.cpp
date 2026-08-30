// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplaca

// class Solution{
// public:
//     void reverse(vector<int>& arr){
//         int n = arr.size();
//         int left = 0;
//         int right = n-1;
//         while(left<=right){
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }

//     }
// };

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Patern

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < 2*i ; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
//         cout<<endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <i+1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < 2*(n-i)-2 ; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < 1+i; j++)
//         {
//             cout << "*";
//         }
//         cout<<endl;
//     }
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// What is C++ STL?
// C++ is one of the most popular high-level programming language which is used extensively for a long time by developers and has always been loved by all programmers, especially competitive programmers because of its faster execution time.

// STL is one of the unique abilities of C++ which makes it stand out from every other programming language. STL stands for standard template library which contains a lot of pre-defined templates in terms of containers and classes which makes it very easy for developers or programmers to implement different data structures easily without having to write complete code and worry about space-time complexities.

// If you dive a little deeper into STL, you will have to understand everything about templates and how they work, which is one of the most power full tools when it comes to C++ programming language.

// However, in this tutorial we will stick to some of the most popular STL containers and algorithms, and its useful functions which is used by programmers very frequently in day to day programming.

// unordered_set in C++ STL
// Vector in C++ STL
// Set in C++ STL
// unordered_multiset in C++ STL
// multiset in C++ STL
// unordered_map in C++ STL
// map in C++ STL
// unordered_multimap in C++ STL
// queue in C++ STL
// stack in C++ STL
// deque in C++ STL
// priority_queue in C++ STL
// multimap in C++ STL
// list in C++ STL
// next_permutation in STL
// __builtin_popcount() in STL
// sort() in C++ STL
// min_element() in C++ STL
// max_element() in C++ STL

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

// Example 1

// Input: n = 25

// Output: 52

// Explanation: Reverse of 25 is 52.
//
// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     int reverseNumber(int n) {
    
//         int temp = n;
//         int ans = 0;
//         while (temp > 0)
//         {
//             ans = ans * 10 + temp % 10;

//             temp = temp/ 10;
//         }

//         return ans;
    

//     }
// };
// int main()
// {
//     Solution r;
//     cout<<r.reverseNumber(12300);
//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
