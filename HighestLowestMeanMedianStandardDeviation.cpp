/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Reading a file, creating a sorted vector, analyzing for highest, lowest, mean, median, standard deviation
// Gwendolyn Bruggeman 3/19/2022

#include <bits/stdc++.h>
using namespace std;

int main(){

  // VECTOR
  vector<float> vect;

  // READ FROM FILE
  float temp;
  
  ifstream myfile ("numbers.txt");
  if (myfile.is_open()){
      while (!myfile.eof()){
            myfile >> temp;
            vect.push_back(temp);
        }
    myfile.close();
    sort(vect.begin(), vect.end());
  }
  else cout << "Unable to open file";

  // CALCULATE
  float highest, lowest, sum, mean, median, variance, standardDeviation;

  highest = vect[vect.size()-1];                                                  //highest
  lowest = vect[0];                                                               //lowest
  for(float i:vect) sum += i;                                                     //sum
  mean = sum / vect.size();                                                       //mean
  median = vect[vect.size()/2];                                                   //median
  for(float i: vect) variance += pow(i-mean,2); variance = variance/vect.size();  //variance
  standardDeviation = sqrt(variance);                                             //standardDeviation


  // OUTPUT
  cout << "Highest: " << highest << endl;
  cout << "Lowest: " << lowest << endl;
  cout << "Mean: " << mean << endl;
  cout << "Median: " << median << endl;
  cout << "Standard Deviation: " << standardDeviation << endl;

  return 0;
}