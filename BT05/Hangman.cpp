#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;
void game(string word)
{
    int step = 10,index = 0,limit = word.size();
    cout <<"PLAY"<<endl;
    string ans ="";
    for (int i = 0; i < word.size();i++) ans +="_";
    char input;
    bool isRunning = false;
    while(true)
    {
        cin >> input;
        int found = word.find(input);
        if (found == string::npos)
        {
            step--;
            cout << "step left: " << step <<endl;
        }
        else
        {
            for (int i = 0; i < word.size();i++){
                if (word[i] == input)
                {
                    ans[i] = word[i];
                }
            }
            cout <<"word: " << ans <<endl;
        }
        if (step == 0)
        {   
            cout << "YOU LOST"<<endl << word;
            break;
        }
        if(ans == word) cout <<"you win";
        
    }
}
int main(){
    vector <string> wordList;
    bool again = true;
    while(true)
    {
        string s;
        cin >> s;
        if (s == ".") break;
        wordList.push_back(s);
    }
    while(again){
        int rand = rand % wordList.size();
        game(wordList[rand]);
        cout <<"Do you want to play again(y/n)"<<endl;
        char choice;
        cin >> choice;
        if (choice == 'n') again = false;
    }
    
}