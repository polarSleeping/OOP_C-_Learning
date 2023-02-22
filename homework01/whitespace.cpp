#include <iostream> // Stream declarations 
#include <cstring>
using namespace std; 

int countSpace(char *sentence);
int main() { 
    char sentence[100] = {'\0'};
    cout << "Please enter your sentence:" << endl;
    gets(sentence);
    printf("%s", sentence);
    cout << "The number of the whitespace-separated words in the sentence is:" 
        << countSpace(sentence) + 1<< endl;
    system("pause>nul");
    return 0;
}

int countSpace(char *sentence) {
    int cnt = 0;
    for(int i = 0; i < strlen(sentence); i++) {
        if(sentence[i] == ' ') {
            cnt++;
        }
    }
    return cnt;
}