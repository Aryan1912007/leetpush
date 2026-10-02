class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> s;
        s.push_back(celsius+273.15);
        s.push_back(celsius*1.80+32.00);
        return s;
        
    }
};