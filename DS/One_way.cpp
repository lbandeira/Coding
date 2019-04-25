/************************************************************
 * Receive two strings and know if one is operation of other
 * 
 * S1S -> Change a char
 * S2S -> Delete a char
 * S3S -> Add a char
 * 
 *************************************************************/
 
 #include <iostream>

// If #s1 == #s2, operation change char

bool equal_len(std:: string s1, std::string s2 ){
    int i, diff = 0;
    for (i = 0; i < s1.size(); i++)
    {
        if(s1[i] != s2[i]){
            diff++;
            if (diff > 1)
                return false;
        }
    }
    return true;
}

//if #s1 == #s2 - 1, operation delete char

bool diff_len(std:: string s1, std:: string s2){
    int i, diff = 0;
    for(i = 0; i < s2.size(); i++){
        if(s1[i+diff] != s2[i]){
            diff++;
            if(diff > 1)
                return false;
        }
    }
    return true;
}



int main(){
    std:: string s1, s2;
    bool res;
    std:: cin >> s1 >> s2;

    if (s1.size() == s2.size()){
        res = equal_len(s1,s2);
        if (res)
            std::cout << "Is change" << std:: endl;
        else
            std::cout << "Is not change" << std::endl;
    }
    else if (s1.size() == (s2.size()-1)){
        res = diff_len(s2,s1);
        if (res)
            std::cout << "Is add" << std:: endl;
        else
            std::cout << "Is not add" << std::endl;
    }
    else if (s2.size() == (s1.size()-1)){
        res = diff_len(s1,s2);
        if (res)
            std::cout << "Is delete" << std:: endl;
        else
            std::cout << "Is not delete" << std::endl;
    }
    else
    {
        std::cout << "Is none" << std::endl;
    }
    
    return 0;
}
