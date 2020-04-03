#include <iostream>
#include <vector> 

using namespace std;

int main() 
{
    
    vector<int> g1;
    vector< vector<int> > g2;
    g1.push_back(5);
    for(int i = 0; i < g1.size(); i++){
        printf("%d" ,g1[i]);
        cout << g1[i];
    }
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            g2[i].push_back(j);
        }
    }
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cout << g2[i][j] << " ";
        }
    }
    cout << "you did it" << endl;
    cout<<"ben kimim";
    cout << "Hello, World!";
    return 0;
}