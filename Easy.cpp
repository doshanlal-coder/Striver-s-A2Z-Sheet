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

// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.

// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in increasing order from 1 to n.

// #include <iostream>
// using namespace std;

// class Solution {
//   public:
//     void printNumbers(int n) {
//         if(n == 0) return ;
//         printNumbers(n-1);
//         cout<<n<<"\n";

//     }
// };
// int main (){
//     Solution s;
//     s.printNumbers(10);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Given an integer n, write a function to print all numbers from n to 1 (inclusive) using recursion.

// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in decreasing order from n to 1

// #include <iostream>
// using namespace std;

// class Solution
// {
// public:
//     void printNumbers(int n)
//     {
//         if (n == 0)
//             return;
//         cout << n << "\n";

//         printNumbers(n - 1);
//     }
// };
// int main()
// {
//     Solution s;
//     s.printNumbers(10);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.

// #include <iostream>
// using namespace std;
// class Solution{
// 	public:
// 		int NnumbersSum(int N){
//             if(N == 1) return N;
//             return N + NnumbersSum(N-1);
// 		}
// };
// int main(){
//     Solution s;
//     cout<<s.NnumbersSum(100);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.

// This must be done in place, without making a copy of the array.

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        int j = i + 1;

        while(j< nums.size()){
            
        }
    }
};
int main()
{
}