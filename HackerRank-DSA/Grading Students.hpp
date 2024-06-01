//
//  Grading Students.hpp
//  HackerRank-DSA
//
//  Created by Илья Атмажитов on 01.06.2024.
//

#ifndef Grading_Students_hpp
#define Grading_Students_hpp


#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades, int grades_count) {

    for (int i = 0; i < grades_count; i++) {
        int res;
        res = (((grades[i]/5) + 1) * 5) - grades[i];
        if (res < 3 && grades[i] >= 38) {
            grades[i] =(((grades[i]/5) + 1) * 5);
        }
    }
    
    return grades;
}


string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](char c) { return !isspace(c); }));
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), [](char c) { return !isspace(c); }).base(), s.end());
    return s;
}




#endif /* Grading_Students_hpp */
