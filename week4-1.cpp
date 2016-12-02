#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
bool binary(int myList[], int head, int tail, int low, int high);//sir, we found the enemy society
int first = 1, last, mid, low, high;//nicknamed The Global Value
int valueMid;//on these 3 lines
int main()
{
	int myList[]{ 1, 3, 5, 7, 9, 11, 13, 15, 16 };// the resistance "The Local Values"
	cout << "Where does the interval which you want to search in starts?" << endl;
	cin >> low;//the user inputed start for the search interval
	cout << "How about an end to that?" << endl;
	cin >> high;//the user inputed end for that interval
	if (binary(myList, 0, 9, low, high) == true)//if the recursive function is true it will spout nonesence
		cout << "Congrats it is somewhere (no idea where) in there (and you don't need to know where) (TOP SECRET)." << endl;
	else if (binary(myList, 0, 9, low, high) == false) //if false try again
		cout << "Better luck next time.";
}

bool binary(int myList[], int head, int tail, int low, int high)
{
	if (first < 9)//it does this until it reaches the end of the list
	{
		mid = first + ((tail - first) / 2);//selecting a middle point
		valueMid = myList[mid];//taking the value from that point
							   //cout << valueMid << endl;//bug check (was needed for my sanity)

		if (high < valueMid)//if mid is higher then the user inputed interval
		{
			last = mid - 1;//changing the end of the search interval
			return binary(myList, head, last, low, high);//call again
		}
		else if (valueMid < low)//if mid is lower then the user inputed interval
		{
			first = mid + 1;//now mid takes the starting position 
			return binary(myList, first, tail, low, high);//come back again
		}
		else if ((low <= valueMid) && (valueMid <= high))//if you're lucky and it is in the list it goes here
		{
			return true;//and comes back as true
		}
	}
	else//tough if not it comes back as false.
		return false;
}


