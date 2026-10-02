class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s1;
        
        for(int i=1;i<=n;i++){
            if(i%3==0){
                if(i%5==0)
                    s1.push_back("FizzBuzz");
                else
                    s1.push_back("Fizz");
                }
            else if(i%5==0)
                    s1.push_back("Buzz"); 
            else 
                s1.push_back(to_string(i)); 
                
        
            }
            return s1;
        
        
    }
};