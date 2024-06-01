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


//HackerLand University has the following grading policy:
//Every student receives a  in the inclusive range from  to .
//Any  less than  is a failing grade.
//Sam is a professor at the university and likes to round each student's  according to these rules:
//If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
//If the value of  is less than , no rounding occurs as the result will still be a failing grade.


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



#endif /* Grading_Students_hpp */
