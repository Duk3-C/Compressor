#include <iostream>
#include <unordered_map>
#include <string>

using namespace std; 

unordered_map<char, int> CharFreqTable(const string& input) 
{
    unordered_map<char, int> freqTable;
    for(char ch : input) {
        freqTable[ch]++;
    }
        return freqTable;
};

int main()
{
   string input;
   getline(cin, input);

   unordered_map<char, int> table = CharFreqTable(input);
   for(const auto& pair : table)
   {
       cout << pair.first << " : " << pair.second << endl;
   }
   return 0;
}
