#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <vector<int> > createHiddenMap(int m, int n){
    vector <vector <int> > hiddenMap(m, vector<int> (n));
    for (int i = 0; i < m ; i++){
        for (int j = 0; j < n; j++){
            hiddenMap[i][j] = -1;
        }
    }
    return hiddenMap;
}
void printRevealedMap(vector<vector <int> > arr){
   for (int i = 0; i < arr.size();i++){
       for (int j = 0; j < arr[0].size();j++) cout << arr[i][j] <<" ";
       cout <<endl;
   }
}
vector <vector <int> > countMine(vector <vector <int> > intMap){
    int m = intMap.size();
    vector <vector <int> > tempMap(m+2,vector <int>(intMap[0].size()+2));
    for (int i = 1; i < m+1; i++){
        for (int j = 1; j < tempMap[0].size()+1; j++) tempMap[i][j] = intMap[i-1][j-1];
    }
    for (int i = 1; i < m+1;i++){
        for (int j = 1; j < tempMap[0].size()+1;j++){
            int mines = 0;
            if (tempMap[i][j] == 1){
                if (tempMap[i+1][j+1] == -1) mines++;
                if (tempMap[i-1][j-1] == -1) mines++;
                if (tempMap[i][j+1] == -1) mines++;
                if (tempMap[i][j-1] == -1) mines++;
                if (tempMap[i+1][j] == -1) mines++;
                if (tempMap[i-1][j] == -1) mines++;
                if (tempMap[i+1][j-1] == -1) mines++;
                if (tempMap[i-1][j+1] == -1) mines++;
                tempMap[i][j] = mines;
            }
        }
    }
    for (int i = 1; i < m+1; i++){
        for (int j = 1; j < tempMap[0].size()+1; j++)  intMap[i-1][j-1] = tempMap[i][j];
    }
    return intMap;
}
vector <vector <int> > intMap(vector <vector<char> > map){
    int x = map.size();
    vector <vector <int> > intMap(x,vector <int> (map[0].size()));
    for (int i = 0; i < map.size();i++){
        for (int j = 0;j < map[0].size();j++){
            if (map[i][j] == 'M') intMap[i][j] = -1;
            else if (map[i][j] == 'E') intMap[i][j] = 1;
        }
    }
    return intMap;
}
int main(){
    int m,n,k;
    cin >> m >> n >> k;
    vector <vector <int> > hiddenMap(m,vector <int> (n));
    hiddenMap = createHiddenMap(m,n);
    vector <vector <char> > map(m, vector <char> (n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) cin >> map[i][j];
    }
    vector <vector <int> > intMap1(m, vector <int> (n));
    intMap1 = intMap(map);
    intMap1 = countMine(intMap1);
    
    for (int i = 0; i < k; i++){
        int x,y;
        cin >> x >> y;
        if(intMap1[x][y] == -1){
            cout << "YOU'RE DEAD!" <<endl;
            for (int i = 0; i < m; i++){
                for (int j = 0; j < n; j++) cout << map[i][j];
                cout <<endl;
            }
            break;
        }else{
            hiddenMap[x][y] = intMap1[x][y];
            printRevealedMap(hiddenMap);
        }
    }
}