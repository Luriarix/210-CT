#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
string size(int z);
string bau(int a);
string highest(int b);
int listSize, e = 0, i = 1, j = 1, a;
string sizeSublists, numberList, highestSubstring, f, g;

int main()
{
	cout << "Make a number list (from 1 to 9 only):"<<endl;
	cin >> numberList;//user inputs a number list
	listSize = numberList.size();// save the lists size
	cout << "Highest sublist from what you have givem me is:" << bau(i) << endl;
}

string bau(int a)//checks where a sublist ends and the other begins + it also saves their size
{
	if (a < listSize)//checks if it has arrived at the end of the list
	{

		if ((int)(numberList[a - 1]) <= (int)(numberList[a]))//which number is bigger or equal 
		{
			i++;
			j++;
			//cout << "j=" << j << endl;
			return bau(i);//recall
		}
		else if ((int)(numberList[a - 1]) >(int)(numberList[a]))//if smaller
		{
			sizeSublists += j;//save sublist size
			j = 1;//and reset
			i++;//continue
			return bau(i);//recall
		}
	}
	else if (a == listSize)//if it has arrived at the end
	{
		sizeSublists += j;//save the size again
		i = 1;
		//cout <<"d=" <<d<< endl;
		return size(i);
	}
}

string size(int z)
{
	if ((int)(sizeSublists[z - 1]) < (int)(sizeSublists[z]))//checks if one size is bigger then the other 
	{
		e += (int)(sizeSublists[z - 1]);//saves the smaller size so we know where to start
		i++;
		//cout << "e=" << e << endl;
		return size(i);//recall
	}
	else if ((int)(sizeSublists[z - 1]) > (int)(sizeSublists[z]))//checks if one size is bigger then the other 
	{
		a = e + (int)(sizeSublists[z - 1]);//so we know where the highest substring ends

		return highest(e);
	}
}

string highest(int b)
{
	if (b < a)//if it's not at the end
	{
		highestSubstring += numberList[b];//as the name states it saves the highest substring one member at a time
		e++;
		//cout << "c=" << c << endl;
		return highest(e);//recall
	}
	else if (b == a)//if it is at the end
		return highestSubstring;//result
	//P.S. It doesn't see the highest substring if there is a small substring inbetween 2 higher substrings
}
