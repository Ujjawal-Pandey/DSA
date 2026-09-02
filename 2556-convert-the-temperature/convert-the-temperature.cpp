class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double far = (celsius *1.80 )+ 32.00;
        double kel = celsius + 273.15;

    vector<double> arr={kel,far};
        return arr;
        
    }
};