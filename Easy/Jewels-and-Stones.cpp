class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i, z;
        int cont = 0;

        for(i = 0; i < J.length(); i++){
            for(z = 0; z <= S.length(); z++){
                if(J[i] == S[z]){
                   cont++;
                }
            }
        }
        return cont;
    }
};
