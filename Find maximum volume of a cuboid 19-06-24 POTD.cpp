// https://www.geeksforgeeks.org/problems/magical-box5306/1

class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        double d = sqrt(pow(perimeter, 2) - 24*area);
        double h = (perimeter - d)/12;
        double vol = h * (perimeter*h - 8*pow(h, 2))/4;
        return vol;
    }
};