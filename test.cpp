#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
// CPP program to illustrate 
// std::find 
// CPP program to illustrate 
// std::find 
// #include<bits/stdc++.h> 

int main () 
{ 
	std::vector<wstring> vec; 
	wchar_t wText[256];
    vec.push_back(wText);
	// Iterator used to store the position 
	// of searched element 
	std::vector<int>::iterator it; 
	
	// Print Original Vector 
	std::cout << "Original vector :"; 
	for (int i=0; i<vec.size(); i++) 
		std::cout << " " << vec[i]; 
		
	std::cout << "\n"; 
	
	// // Element to be searched 
	// int ser = 50; 
	
	// // std::find function call 
	// it = std::find (vec.begin(), vec.end(), ser); 
	// if (it != vec.end()) 
	// { 
	// 	std::cout << "Element " << ser <<" found at position : " ; 
	// 	std::cout << it - vec.begin() << " (counting from zero) \n" ; 
	// } 
	// else
	// 	std::cout << "Element not found.\n\n"; 




	return 0; 
} 
