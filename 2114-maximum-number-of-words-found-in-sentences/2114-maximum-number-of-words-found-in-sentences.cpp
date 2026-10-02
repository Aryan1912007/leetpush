class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max1=0;
        int current;
        for(int i=0;i<sentences.size();i++){
            current=0;
            for(int j=0;j<sentences[i].length();j++){
                
                if(!(isalpha(sentences[i][j])))
                    current++;}
                max1=max(current,max1);
            
        }
        return max1+1;
        
    }
};