&#x20;FIBONACCI SERIES IN DATA STRUCTURES



&#x20;A Case Study on Customer Loyalty Reward Systems Using C++



Course Unit: Data Structures  

Assignment: Fibonacci Series Case Study  

Programming Language: C++  

Submission Date:16 October 2026



&#x20;GROUP MEMBERS



1\. Name: HASSAN MAHMOUD      	   Registration Number: CT204/124265/25



2\. Name: GREGORY MUTISO            Registration Number: CT204/124282/25



3\. Name: CYRUS GABRIEL             Registration Number:CT204/124286/25



4\. Name: CHRIS WATHANI MWANGI      Registration Number: CT204/124285/25



\---

&#x20;CHAPTER 1: INTRODUCTION



Background



The Fibonacci sequence is a series of numbers in which each number is obtained by adding the two numbers that come before it. The sequence usually starts with 0 and 1.



The Fibonacci sequence is:



0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...



The mathematical formula is:



F(n) = F(n - 1) + F(n - 2)



The starting conditions are:



\- F(0) = 0

\- F(1) = 1



For example, the number 2 is obtained by adding 1 and 1, while 5 is obtained by adding 2 and 3.



Fibonacci numbers can be generated using different programming techniques, including recursion, iteration, and dynamic programming. These techniques help programmers understand how problems can be solved in different ways and how the efficiency of an algorithm can be improved.



This case study explains the three approaches using C++. It also demonstrates how the Fibonacci sequence can be applied to a customer loyalty reward system in which customers receive points according to the number of years they have remained loyal to a company.



2 Problem Statement



A company wants to introduce a customer loyalty reward system in which the number of reward points increases according to the Fibonacci sequence.



The company needs a program that calculates and displays reward points based on the number of years a customer has remained loyal.



The program should generate the reward points for each year and demonstrate how different Fibonacci algorithms work. The algorithms should also be compared in terms of their time and space complexity to determine which approach is most suitable for the company's reward system.



3 Objectives



The objectives of this assignment are:



1\. To understand the Fibonacci sequence and its mathematical formula.

2\. To implement the Fibonacci sequence using recursion.

3\. To generate Fibonacci numbers using iteration and arrays or vectors.

4\. To implement dynamic programming using memoization.

5\. To develop a customer loyalty reward system using C++.

6\. To compare the time and space complexity of the three approaches.

7\. To recommend the most suitable approach for the customer loyalty reward system.



CHAPTER 2: IMPLEMENTATION OF THE FIBONACCI SEQUENCE



1 Recursive Approach



&#x20;Explanation



Recursion is a programming technique in which a function calls itself to solve a problem.



In the Fibonacci sequence, each number is calculated by adding the two preceding numbers. For example:



F(4) = F(3) + F(2)



Since F(3) = 2 and F(2) = 1:



F(4) = 2 + 1 = 3



A recursive function needs a base case to prevent it from calling itself indefinitely. In this implementation, the base cases are F(0) = 0 and F(1) = 1.



\### C++ Program



Filename: `recursive.cpp`



cpp

\#include <iostream>

using namespace std;



long long fibonacci(int n) {

&#x20;   if (n <= 1) {

&#x20;       return n;

&#x20;   }



&#x20;   return fibonacci(n - 1) + fibonacci(n - 2);

}



int main() {

&#x20;   int n;



&#x20;   cout << "Enter a number: ";

&#x20;   cin >> n;



&#x20;   if (n < 0 || n > 92) {

&#x20;       cout << "Enter a number between 0 and 92." << endl;

&#x20;       return 0;

&#x20;   }



&#x20;   cout << "Fibonacci number: " << fibonacci(n) << endl;



&#x20;   return 0;

}

```



\### Sample Output



```text

Enter a number: 6

Fibonacci number: 8

```



&#x20;Explanation of the Code



\- `#include <iostream>` allows the program to accept input and display output.

\- `using namespace std;` allows us to use standard C++ functions such as `cin` and `cout` without writing `std::` before them.

\- `long long fibonacci(int n)` defines a function that calculates and returns the nth Fibonacci number.

\- `if (n <= 1)` provides the base case. It returns 0 when n is 0 and 1 when n is 1.

\- `fibonacci(n - 1) + fibonacci(n - 2)` calculates the current Fibonacci number by adding the two preceding numbers.

\- `main()` is the function where program execution begins.

\- The input validation ensures that the program accepts values from 0 to 92.



&#x20;Advantages



1\. The code is relatively simple to understand.

2\. It follows the mathematical definition of the Fibonacci sequence.

3\. It provides a clear demonstration of how recursion works.



&#x20;Disadvantages



1\. The same Fibonacci numbers are calculated repeatedly.

2\. The number of function calls increases rapidly as the input grows.

3\. Each recursive call uses additional stack memory.



&#x20;Complexity Analysis



Time Complexity: O(2^n), approximately.



The recursive function repeatedly calculates the same Fibonacci numbers. As the input increases, the number of function calls grows exponentially.



Space Complexity: O(n).



The maximum depth of the recursive call stack grows linearly with the input.



Therefore, basic recursion is useful for demonstrating the concept of recursion, but it becomes inefficient for larger inputs.





2 Iterative Approach Using a Vector



Explanation



Iteration involves repeating instructions using a loop.



Instead of repeatedly calling a function, the iterative approach calculates Fibonacci numbers one after another. In this implementation, a vector is used to store the generated numbers.



A vector is a C++ container that stores elements of the same data type and can be created with a size determined at runtime.



For example, the first six Fibonacci numbers are:



0, 1, 1, 2, 3, 5



The program initializes the first two numbers and then uses a loop to calculate the remaining numbers.



&#x20;C++ Program



Filename: `iterative.cpp`



cpp

\#include <iostream>

\#include <vector>

using namespace std;



int main() {

&#x20;   int n;



&#x20;   cout << "Enter the number of Fibonacci numbers: ";

&#x20;   cin >> n;



&#x20;   if (n <= 0 || n > 93) {

&#x20;       cout << "Enter a number between 1 and 93." << endl;

&#x20;       return 0;

&#x20;   }



&#x20;   vector<long long> fib(n);



&#x20;   fib\[0] = 0;



&#x20;   if (n > 1) {

&#x20;       fib\[1] = 1;

&#x20;   }



&#x20;   for (int i = 2; i < n; i++) {

&#x20;       fib\[i] = fib\[i - 1] + fib\[i - 2];

&#x20;   }



&#x20;   cout << "Fibonacci series: ";



&#x20;   for (int i = 0; i < n; i++) {

&#x20;       cout << fib\[i] << " ";

&#x20;   }



&#x20;   cout << endl;



&#x20;   return 0;

}

```



&#x20;Sample Output



```text

Enter the number of Fibonacci numbers: 8

Fibonacci series: 0 1 1 2 3 5 8 13

```



&#x20;Explanation of the Code



\- `#include <vector>` allows the program to use the C++ vector container.

\- `vector<long long> fib(n)` creates a vector that can store the requested number of Fibonacci terms.

\- `fib\[0] = 0` initializes the first Fibonacci number.

\- `fib\[1] = 1` initializes the second Fibonacci number when at least two terms are requested.

\- The first `for` loop calculates each remaining number by adding the two preceding numbers.

\- The second `for` loop displays all the numbers stored in the vector.



A vector is suitable for this task because the number of terms is entered by the user. Standard C++ vectors support this requirement without needing a fixed-size array.



&#x20;Advantages



1\. Each Fibonacci number is calculated only once.

2\. It is faster than the basic recursive approach.

3\. The entire sequence is stored for later use.

4\. The code is straightforward to understand and maintain.



&#x20;Disadvantages



1\. It requires memory to store the sequence.

2\. The amount of memory required increases with the number of terms.

3\. A vector must be allocated with enough space for all the requested elements.



&#x20;Complexity Analysis



Time Complexity: O(n).



The program calculates the Fibonacci numbers in one loop and displays them in another loop. Both loops perform work proportional to the number of terms.



Space Complexity: O(n).



The vector stores all the requested Fibonacci numbers.



Therefore, the iterative approach is more efficient than basic recursion when generating the complete sequence.







3 Dynamic Programming Using Memoization



&#x20;Explanation



Dynamic programming is a technique used to solve problems by breaking them into smaller subproblems and storing their results to avoid repeating calculations.



Memoization is a form of dynamic programming in which the result of a function is saved after it has been calculated. If the same result is needed again, the program reuses the saved value instead of calculating it again.



In the basic recursive approach, the same Fibonacci number may be calculated many times. Memoization reduces this repetition by storing previously calculated results.



For example, once F(5) has been calculated, its value can be reused whenever the program needs F(5) again.



&#x20;C++ Program



Filename: `dynamic\_programming.cpp`



cpp

\#include <iostream>

\#include <vector>

using namespace std;



long long fibonacci(int n, vector<long long>\& memo) {

&#x20;   if (n <= 1) {

&#x20;       return n;

&#x20;   }



&#x20;   if (memo\[n] != -1) {

&#x20;       return memo\[n];

&#x20;   }



&#x20;   memo\[n] = fibonacci(n - 1, memo)

&#x20;           + fibonacci(n - 2, memo);



&#x20;   return memo\[n];

}



int main() {

&#x20;   int n;



&#x20;   cout << "Enter a number: ";

&#x20;   cin >> n;



&#x20;   if (n < 0 || n > 92) {

&#x20;       cout << "Enter a number between 0 and 92." << endl;

&#x20;       return 0;

&#x20;   }



&#x20;   vector<long long> memo(n + 1, -1);



&#x20;   cout << "Fibonacci number: "

&#x20;        << fibonacci(n, memo) << endl;



&#x20;   return 0;

}

```



&#x20;Sample Output



text

Enter a number: 6

Fibonacci number: 8



&#x20;Explanation of the Code



\- `vector<long long> memo(n + 1, -1)` creates a vector initialized with -1. This indicates that the Fibonacci values have not yet been calculated.

\- The base case returns 0 or 1 when the input is 0 or 1.

\- `if (memo\[n] != -1)` checks whether the required Fibonacci number has already been calculated.

\- If the value has already been stored, the function returns it immediately.

\- Otherwise, the function calculates the number, stores the result in the vector, and returns it.

\- The reference parameter `vector<long long>\& memo` allows the function to modify the original vector without copying the entire vector during every recursive call.



&#x20;Advantages



1\. It avoids repeatedly calculating the same Fibonacci numbers.

2\. It is much faster than basic recursion for larger inputs.

3\. It stores previously calculated results for reuse.

4\. It is useful when a problem contains repeated subproblems.



&#x20;Disadvantages



1\. It requires additional memory to store calculated results.

2\. It still uses recursive function calls.

3\. Its implementation is slightly more complex than the basic recursive approach.



&#x20;Complexity Analysis



Time Complexity: O(n).



Each Fibonacci number is calculated at most once. Previously calculated values are reused, reducing the number of calculations.



Space Complexity: O(n).



The memoization vector requires O(n) space. The recursive call stack can also grow to O(n).



Therefore, memoization improves the performance of recursion by avoiding repeated calculations.







&#x20;CHAPTER 3: CUSTOMER LOYALTY REWARD SYSTEM



1 Application Description



The company wants to use the Fibonacci sequence to create a simple customer loyalty reward system.



The system asks how many years a customer has remained loyal to the company and displays the reward points for each year.



In this example, the first loyalty year receives 1 point, and the second year also receives 1 point. Each following year receives the sum of the points awarded in the previous two years.



The reward sequence is:



1, 1, 2, 3, 5, 8, 13, 21, 34, ...



This sequence follows the Fibonacci rule. It is the standard Fibonacci sequence shifted so that the first loyalty year corresponds to F(1).



The reward system is an illustrative application developed to demonstrate how a mathematical sequence can be implemented in a practical programming scenario.



2 C++ Program



Filename: `reward\_system.cpp



cpp

\#include <iostream>

\#include <vector>

using namespace std;



int main() {

&#x20;   int years;



&#x20;   cout << "Enter the number of years: ";

&#x20;   cin >> years;



&#x20;   if (years <= 0 || years > 92) {

&#x20;       cout << "Enter a number of years between 1 and 92."

&#x20;            << endl;

&#x20;       return 0;

&#x20;   }



&#x20;   vector<long long> rewards(years);



&#x20;   rewards\[0] = 1;



&#x20;   if (years > 1) {

&#x20;       rewards\[1] = 1;

&#x20;   }



&#x20;   for (int i = 2; i < years; i++) {

&#x20;       rewards\[i] = rewards\[i - 1] + rewards\[i - 2];

&#x20;   }



&#x20;   cout << "\\nCUSTOMER LOYALTY REWARDS\\n";



&#x20;   for (int i = 0; i < years; i++) {

&#x20;       cout << "Year " << i + 1

&#x20;            << ": " << rewards\[i]

&#x20;            << (rewards\[i] == 1 ? " point" : " points")

&#x20;            << endl;

&#x20;   }



&#x20;   return 0;

}

```



&#x20;Sample Output



text

Enter the number of years: 7



CUSTOMER LOYALTY REWARDS



Year 1: 1 point

Year 2: 1 point

Year 3: 2 points

Year 4: 3 points

Year 5: 5 points

Year 6: 8 points

Year 7: 13 points

```



&#x20;Explanation of the Application



The program works as follows:



1\. It asks the user to enter the number of years the customer has remained loyal to the company.

2\. It checks whether the entered number is within the supported range.

3\. It creates a vector to store the reward points for each year.

4\. It initializes the first two reward values to 1.

5\. It uses a loop to calculate the remaining reward points by adding the previous two values.

6\. It displays the reward points for every year in order.



The program uses a vector because the number of years is determined by the user's input. It uses `long long` to store larger reward values than a typical 32-bit integer can hold.



The program also handles singular and plural wording correctly by displaying "1 point" for a reward of one and "points" for larger values.



&#x20;Complexity Analysis



Time Complexity: O(n).



The program calculates the reward values in one loop and displays them in another loop. Both loops take time proportional to the number of years.



Space Complexity: O(n).



The vector stores one reward value for every loyalty year.



Iteration is suitable for this application because the company needs to generate and display the complete sequence of reward points.







&#x20;CHAPTER 4: PERFORMANCE ANALYSIS



&#x20;4.1 Purpose of the Performance Test



The purpose of the performance test is to compare the efficiency of the three approaches used to calculate Fibonacci numbers:



1\. Recursion.

2\. Iteration.

3\. Dynamic programming using memoization.



All three approaches are tested using the input n = 30.



The expected result is:



F(30) = 832040\*\*



Each approach should return the same Fibonacci number. However, the time taken to calculate it may differ because the approaches use different algorithms.



&#x20;4.2 Performance Testing Program



Filename: `performance\_analysis.cpp`



cpp

\#include <iostream>

\#include <vector>

\#include <chrono>

using namespace std;

using namespace chrono;



// Recursive approach

long long recursiveFib(int n) {

&#x20;   if (n <= 1) {

&#x20;       return n;

&#x20;   }



&#x20;   return recursiveFib(n - 1) + recursiveFib(n - 2);

}



// Iterative approach

long long iterativeFib(int n) {

&#x20;   if (n <= 1) {

&#x20;       return n;

&#x20;   }



&#x20;   vector<long long> fib(n + 1);



&#x20;   fib\[0] = 0;

&#x20;   fib\[1] = 1;



&#x20;   for (int i = 2; i <= n; i++) {

&#x20;       fib\[i] = fib\[i - 1] + fib\[i - 2];

&#x20;   }



&#x20;   return fib\[n];

}



// Dynamic programming using memoization

long long dpFib(int n, vector<long long>\& memo) {

&#x20;   if (n <= 1) {

&#x20;       return n;

&#x20;   }



&#x20;   if (memo\[n] != -1) {

&#x20;       return memo\[n];

&#x20;   }



&#x20;   memo\[n] = dpFib(n - 1, memo)

&#x20;           + dpFib(n - 2, memo);



&#x20;   return memo\[n];

}



int main() {

&#x20;   int n = 30;

&#x20;   const int repetitions = 10;



&#x20;   long long result = 0;



&#x20;   // Test recursion

&#x20;   auto start = steady\_clock::now();



&#x20;   for (int j = 0; j < repetitions; j++) {

&#x20;       result = recursiveFib(n);

&#x20;   }



&#x20;   auto stop = steady\_clock::now();



&#x20;   auto recursiveTime =

&#x20;       duration\_cast<nanoseconds>(stop - start).count();



&#x20;   cout << "Recursive result: " << result << endl;

&#x20;   cout << "Average recursive time: "

&#x20;        << recursiveTime / repetitions

&#x20;        << " nanoseconds\\n\\n";



&#x20;   // Test iteration

&#x20;   start = steady\_clock::now();



&#x20;   for (int j = 0; j < repetitions; j++) {

&#x20;       result = iterativeFib(n);

&#x20;   }



&#x20;   stop = steady\_clock::now();



&#x20;   auto iterativeTime =

&#x20;       duration\_cast<nanoseconds>(stop - start).count();



&#x20;   cout << "Iterative result: " << result << endl;

&#x20;   cout << "Average iterative time: "

&#x20;        << iterativeTime / repetitions

&#x20;        << " nanoseconds\\n\\n";



&#x20;   // Test dynamic programming

&#x20;   start = steady\_clock::now();



&#x20;   for (int j = 0; j < repetitions; j++) {

&#x20;       vector<long long> memo(n + 1, -1);

&#x20;       result = dpFib(n, memo);

&#x20;   }



&#x20;   stop = steady\_clock::now();



&#x20;   auto dpTime =

&#x20;       duration\_cast<nanoseconds>(stop - start).count();



&#x20;   cout << "Dynamic programming result: " << result << endl;

&#x20;   cout << "Average dynamic programming time: "

&#x20;        << dpTime / repetitions

&#x20;        << " nanoseconds\\n";



&#x20;   return 0;

}

```



3 Testing Methodology



The following procedure is used to compare the three approaches:



1\. Set the input to n = 30.

2\. Calculate the Fibonacci number using each approach.

3\. Execute each approach ten times.

4\. Measure the elapsed time using the C++ `<chrono>` library.

5\. Calculate the average execution time by dividing the total measured time by ten.

6\. Compare the results and execution times.



The program uses `steady\_clock` to measure elapsed time. This clock is suitable for measuring durations because it is designed to progress steadily.



For the memoization test, a new vector is created for each repetition. This ensures that each run includes the cost of initializing the memoization storage and calculating the Fibonacci number.



All three approaches should produce the same result, 832040.



Actual execution times may vary depending on the computer, compiler, compiler optimization settings, and other activities running on the system.



4 Performance Results



The following table should be completed after compiling and running the performance-testing program.



| Approach ; Fibonacci Result for n = 30 | Average Execution Time 

| Recursive ; 832040 - Record measured result 

| Iterative ; 832040 - Record measured result 

| Dynamic programming - 832040 | Record measured result 



The actual execution times should be entered after testing the program. They should not be estimated or invented.



The recursive approach is expected to take longer because it repeatedly calculates the same Fibonacci numbers.



The iterative and memoization approaches should generally perform better because they avoid the repeated calculations made by basic recursion.



The measured results should be used to confirm how the three approaches perform on the computer used for testing.



\## 4.5 Comparison of Time and Space Complexity



| Approach ; Time Complexity | Auxiliary Space Complexity | Performance |



| Basic recursion ; O(2^n), approximately | O(n) | Slow for larger inputs |

| Iteration using a vector | O(n) | O(n) | Efficient |

| Dynamic programming using memoization | O(n) | O(n) | Efficient |



&#x20;Explanation



Recursive approach



The recursive method repeatedly calculates the same Fibonacci numbers. As the input grows, the number of function calls increases rapidly. This makes it inefficient for larger inputs.



Iterative approach



The iterative method calculates each Fibonacci number once and stores it in a vector. This reduces the time complexity to O(n), making it more efficient than basic recursion.



Dynamic programming approach



Memoization stores the results of previously calculated Fibonacci numbers. When a result is needed again, the program reuses the stored value instead of calculating it again. This reduces the time complexity to O(n).



The iterative and memoization implementations both use O(n) auxiliary space because they store the Fibonacci values in a vector. Memoization also uses a recursive call stack that can grow linearly with the input.







CHAPTER 5: RECOMMENDATIONS AND CONCLUSION



.1 Recommendation



For the company's customer loyalty reward system, the recommended approach is iteration using an array or vector.



This recommendation is based on the following reasons:



1\. Efficient execution:\*\* The iterative approach has a time complexity of O(n), allowing it to generate the reward sequence efficiently.

2\. Avoids repeated calculations:\*\* Each reward value is calculated once.

3\. Stores the complete sequence:\*\* The program can retain and display the reward points for every loyalty year.

4\. Easy maintenance:\*\* The code is straightforward to understand, modify, and maintain.

5\. No recursive call-stack overhead:\*\* Unlike recursion and memoization, the iterative approach does not require recursive function calls.



Dynamic programming using memoization is also efficient and useful when individual Fibonacci values need to be calculated repeatedly.



However, iteration is more appropriate for this particular application because the company needs to generate and display all reward points for the customer's loyalty years.



For a real customer loyalty system, the company should also validate customer records, handle the limits of integer data types, store customer information appropriately, and determine how reward points should be awarded and updated.



The Fibonacci-based reward model presented in this assignment is an example for demonstrating programming concepts. A real company would need to evaluate whether this reward structure is appropriate for its business needs.



.2 Conclusion



This case study examined three approaches to generating the Fibonacci sequence using C++: recursion, iteration, and dynamic programming using memoization.



The recursive approach is simple to implement and follows the mathematical definition of the Fibonacci sequence. However, it becomes inefficient for larger inputs because it repeatedly calculates the same values.



The iterative approach uses a vector to store the results and generates the sequence efficiently. It is easy to understand and suitable for applications that require the complete sequence.



Dynamic programming using memoization improves the recursive approach by storing and reusing previously calculated results. This reduces repeated work and improves performance.



The customer loyalty reward system demonstrates how the Fibonacci sequence can be applied to a practical programming problem by calculating and displaying reward points for each year of customer loyalty.



The performance-testing program provides a way to compare the three approaches using n = 30. The actual execution times must be recorded after running the program to complete the comparison.



Overall, iteration using a vector is recommended for the customer loyalty reward system because it is efficient, straightforward, and suitable for generating and displaying the complete reward sequence.



Through this assignment, we have gained a better understanding of recursion, iteration, dynamic programming, vectors, and algorithm complexity in C++.





&#x20;REFERENCES



1\. cppreference.com. C++ language and standard library documentation. Available at: https://en.cppreference.com/w/



2\. cppreference.com. `std::vector` documentation. Available at: https://en.cppreference.com/w/cpp/container/vector



3\. cppreference.com. C++ time utilities and `<chrono>` documentation. Available at: https://en.cppreference.com/w/cpp/chrono



4\. Data Structures course lecture notes and materials provided by the lecturer.

