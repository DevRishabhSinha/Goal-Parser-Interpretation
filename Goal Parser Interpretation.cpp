class Solution {
public:
    string interpret(string command) {
        string result;
        for(int i = 0; i < command.length(); i++){
            if(command[i] == 'G'){
                result += 'G';
            }
            else if (i+1 < command.length() && command[i] == '(' 
                && command[i+1] == ')'){
                    result += 'o';
            }
            else if (i+3 < command.length() && command[i] == '(' 
                && command[i+1] == 'a' && command[i+2] == 'l' 
                && command[i+3] == ')'){
                    result += 'a';
                    result += 'l';
            }
        }
        return result;
    }
};
