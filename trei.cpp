#include <iostream>
#include <cstring>
#include <algorithm>


using namespace std;

const int ALPHABET_SIZE = 26;





struct TrieNode{

    TrieNode* next[ALPHABET_SIZE];
    bool nextChild;
    
    TrieNode(){
        fill(next, next + ALPHABET_SIZE, nullptr);
        nextChild = false;
    }

    ~TrieNode(){
        for(int i=0;i<ALPHABET_SIZE; i++){
            if(next[i])
                delete next[i];
        }
    }

    bool insert(const char* key){
        
        if (*key == '\0'){
            finish = true;
            
            if(nextChild){
                return 0;
            }else{
                return 1;
            }
        }
        

    }

    
};



int main(){
    printf("YES\n");
    return 0;
}