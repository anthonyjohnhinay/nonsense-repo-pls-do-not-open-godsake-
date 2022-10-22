#include <iostream>
#include <string>


using namespace std;
// concat the char then flip accordingly to upper / lower depends on  count_low < count_up
string word_assembler(int count_up, int count_low, string word){
    string temp_word = "";
    for (char &c : word){
        if(count_low < count_up){
            if (c>=65 && c<=90){
            temp_word += c;
            }
            else{
                temp_word += c - 32;
            }
        }
        else{
             if (c>=65 && c<=90){
            temp_word += c + 32;
            }
            else{
                temp_word += c ;
            }
        }
    }
    return temp_word;
}

// counterize the lower and upper in each char
string check_word(string x){
    int count_low = 0, count_up = 0, ascii_check;
    
    for(char &c : x){
        ascii_check = c;
        if (ascii_check>=65 && ascii_check<=90){
            count_up ++;
        }
        else if (ascii_check>=97 && ascii_check<=122){
            count_low++;
        }
    }
    
    return word_assembler(count_up, count_low, x);
}


int main(){
    string x; 
   
    
    cin >> x;
    cout<<check_word(x);
}
