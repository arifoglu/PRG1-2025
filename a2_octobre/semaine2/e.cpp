#include <iostream>

using namespace std;

int f(const string& str, char c, int& sequence);



int main() {
    char c; 
    cout << "caracter : ";
    cin >> c ;

    cout << "text : ";
    string str;
    cin >> str ;

    int sequence = 0;

    cout << f(str,c,sequence) << " fois " << endl;
    cout << "sequence " << c << " : " << sequence << endl;

    return 0;
}

int f(const string& str, char c,int& sequence){
    int count = 0;
    for(int i = 0 ; i < str.length();++i){
        if(str[i] == c){
            count++;
        }
        
        
        if(str[i] == c  && str[i + 1] == c){
            ++sequence;
        }
      
    }
    return count;
}
