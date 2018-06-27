/////////////////////////////////////////////////////////////
//
//	Backup only
//
//	Nothing interesting.
//
//
//
///////////////////////////////////////////////////////////




#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <string>
#include <iterator>
#include <functional>

using namespace std;

int main(int argc, char** argv)

{
	int studies_choice = 0;
	cout << "Studies sections.\n\n";
	cout << "#1 Sorting \n";
	cout << "#2 Vectors numbers \n";
	cout << "#3 single program Hash functions \n";
	cout << "\n> ";
	cin >> studies_choice;
	if (studies_choice == 1)
	{
	int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0;
	int h = 0,i = 0,j = 0,k = 0,l = 0,m = 0,n = 0;
	srand(static_cast<unsigned int>(time(0)));
					int randomNumber = rand();
																
	             	a = (randomNumber % 15) + 6;
                	b = (randomNumber % 15) + 6;
            		c = (randomNumber % 15) + 6;
            		d = (randomNumber % 15) + 6;
            		e = (randomNumber % 15) + 6;
            		f = (randomNumber % 15) + 6;
            		g = (randomNumber % 15) + 6;
            		
					int randomNumber1 = rand();
																
	             	h = (randomNumber1 % 15) + 6;
	             	a = a + h;
                	i = (randomNumber1 % 15) + 6;
                	b = b + i * h / 2;
            		j = (randomNumber1 % 15) + 6;
            		c = c + j * h / 3;
            		k = (randomNumber1 % 15) + 6;
            		d = d + k * h / 4;
            		l = (randomNumber1 % 15) + 6;
            		e = e + l * h / 5;
            		m = (randomNumber1 % 15) + 6;
            		f = f + m * h / 6;
            		n = (randomNumber1 % 15) + 6;
            		g = g + n * h / 7;
            		
	int load_check = 0;
	int selection = 0;
	array <int, 7>array_list = {a,b,c,d,e,f,g};
	cout << "7 numbers generated randomly. \n\n";
	for (auto bb : array_list) {cout << bb << " ";}
	cout << "\n\nSort numbers options\n\n";
	cout << "#1 Lowest first.\n";
	cout << "#2 Highest first.\n";
	cout << "\n> ";
	cin >> selection;
	// Basic sorting lowest numbers to highest
	if(selection == 1)
		{
			sort(array_list.begin(), array_list.end());
			for (auto b : array_list) {cout << b << " ";}
        	return 0;

			
		}
	// Basic sorting highest to lowest
	if(selection == 2)
		{
			
			sort(array_list.begin(), array_list.end(), greater<int>());
    		for (auto a : array_list) {std::cout << a << " ";}
        	return 0;
				
		}
	}
	// Vectors adding/remove & display. still playing with.
	if(studies_choice == 2)
	{
	int n = 0;
	int xx = 0;
	int state_1 = 1;
	int state_2 = 1;
	while (1 == 1)
	{
		
		vector<int> v = {};
		int v_select = 0;
		if (state_1 == 1)
		{
			v.push_back(n);
		}
		if (state_2 == 1)
		{
			v.push_back(xx);
		}
		
		cout << "\n";
		cout << "#1 Push n \n";
		cout << "#2 Pop n \n";
		cout << "#3 Display vector \n\n";
		cout << "> ";
		cin >> v_select;
		if (v_select == 1)
		{
			cout << "\n";
			cout << "Enter a number\n";
			cout << "> ";
			cin >> n;
			auto in = v.begin();
   			in = v.insert(in, n);
   			state_1 = 1;
   			cout << "\nEnter another number\n";
   			cout << "> ";
   			cin >> xx;
   			in = v.insert(in, xx);
   			state_2 = 1;
   			
		}
		if (v_select == 2)
		{
			char del_choice1;
			char del_choice2;
			cout << "Erase element one??\n";
			cout << "Y/N \n";
			cout << "> ";
			cin >> del_choice1;
			if (del_choice1 == 'y')
			{
				cout << "\nElement one erased.\n";
				//v.erase(v.begin()); // well fuuuuuuu nesting issues
				state_1 = 0;
				
			}
			if (del_choice1 == 'n')
			{
				cout << "\n";	
			}
			cout << "\nErase element two??\n";
			cout << "Y/N \n";
			cout << "> ";
			cin >> del_choice2;
			if (del_choice2 == 'y')
			{
				cout << "\nElement two erased.\n";
				//v.erase(v.begin()+1);// well fuuuuuuu nesting issues
				state_2 = 0;
			}
			if (del_choice2 == 'n')
			{
				cout << "\n";	
			}
		
		}
		if (v_select == 3)
		{
			cout << "\n";
			for (auto x: v) {cout << ' ' << x;}
		}
	}
	}
	if (studies_choice == 3)	
	{
	while (1 == 1)
	{
	string enter_a_name;	
	cout << "Enter a word \n";
	cout << "> ";
	cin >> enter_a_name;
    hash<string> hash_fn;
 	size_t hash = hash_fn(enter_a_name);
 	
 	cout << "Word = " << enter_a_name << "\nHash = " << hash << "\n\n";
	}
	}
	//if ()
	return 0;
}
