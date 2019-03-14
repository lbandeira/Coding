// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

string solution(string &S, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int divi, res;
    unsigned int i,j;
    //Remove Dashes and upper char
    
    for(i = 0; i < S.size(); i++){
        if(S[i] == '-') {
            S.erase(S.begin()+i);
        }
        else{
            S[i] = toupper(S[i]);    
        }
    }
    
    //Make divisions
    divi = S.size()/K;
    res = S.size()%K;
    //cout << "div: " << divi << " res: " << res << " size: " << S.size();
    
    //Base case
    if(divi == 1) return S;
    if(K > S.size()) return S;
    
    //non res
    if(!res){
        S.insert(K,"-");
    }
    else{
        S.insert(res,"-");
        j = res;
        i = 0;
        
        while(i < divi){
            j = j+K+1;
            if(j < S.size()){
               S.insert(j, "-"); 
            }
            
            i++;
        }
    }
    
    return S;
}

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int i, aux = 1, j = 1;
    int Res_level = 1, level = 1;
    int max = A[0];

    for(i = 1; i < A.size(); i++){
       
       //Calculate level
       if(i == aux){
            j = j << 1;
            aux = j+aux;
            level++;
       }
       
       //Calculate MAX and get the level   
        if(A[i] + A[i+1] > max){
            max = A[i] + A[i+1];
            Res_level = level;
        }
        
        i++;
    }
    
    return Res_level;
}