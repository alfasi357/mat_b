#include "mat.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
using namespace std;

namespace ariel{std::string mat(int col, int row, char a, char b){
    
    if(col%2==0||col<0){
        throw col;
    }
    if(row%2==0||row<0){
        throw row;
    }
     

    int num = row*col;
    std::vector<char> vec(num, a);
    int min = row;
    if (col<min){
        min=col;
    }
    min=min/2;
    int count =0;
    for (int k=1; k<=min; k++){
        for(int j=k; j<row-k; j++){
            for(int i=j*col+k; i<(j+1)*col-k; i++){
                if(k%2==0){
                    vec[i]=a;
         }
                else if(k%2==1){
                    vec[i]=b;
                }
    
      }
      
 }
 
        
    }

    vec.resize(row*(col+1)-1);
    for (int i=1; i<row; i++){
        vec.insert(vec.begin()+i*col+i-1, '\n');
    }
    std::string s;
    for(int i = 0; i<row*(col+1)-1; i++){
       s+=vec[i];
    }
    
    return s;

  
}
}
