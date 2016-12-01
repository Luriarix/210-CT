#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
string vowel_check(string w);
string check(char w);
int i = 0, wordSize, j = 0;
char vowels[10] = { 'a','A','e','E','i','I','o','O','u','U' }, vowel, letterCheck;
string word, consonant;
int main()
{
	cout << "Chosen a word:";
	cin >> word;//user input
	wordSize = word.size();//saves the size of the inputed word
	cout << "And the lucky con... conso... consonan... consonants (man that's a weird word) in your word are (drum roll please) ... " << vowel_check(word) << endl;//who you gonna call... the recursive function that's who 
}
string vowel_check(string w)
{
	if (i < wordSize)
	{
		letterCheck = w[i];//letterCheck takes the letter from possition i
		return check(letterCheck);//check please
	}
	else if (i == wordSize)

		return consonant;

}
string check(char w)
{
	vowel = vowels[j];//vowel takes the first vowel... intensive match wouldn't you say chess fans
	if (j == 10)//if there are no more vowels to check
	{
		consonant += w;//add that con... conso... consonant
		i++;//and also go to the next position
		j = 0;//restat of the vowels list
		return vowel_check(word);//go back to word
	}
	else if (vowel == w)//though if it is a vowel
	{
		i++;//still go to the next position
		j = 0;//and reset
		return vowel_check(word);//but this time it goes back to word without saving anything
	}
	else if ((j < 10) && (vowel != w))//but if it is still in it's prime it just...
	{
		j++;//goes to the next position in vowels
		return check(w);//and checks again
	}
}