//
//  main.cpp
//  HackerRank-DSA
//
//  Created by Илья Атмажитов on 01.06.2024.
//

#include <iostream>

#include "func.h"
#include "Grading Students.hpp"
#include "Number Line Jumps.h"
#include "Between Two Sets.h"


int main()
{

    // Grading Students:
    
//    string grades_count_temp;
//    getline(cin, grades_count_temp);
//
//    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));
//
//    vector<int> grades(grades_count);
//
//    for (int i = 0; i < grades_count; i++) {
//        string grades_item_temp;
//        getline(cin, grades_item_temp);
//
//        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));
//
//        grades[i] = grades_item;
//    }
//
//    vector<int> result = gradingStudents(grades, grades_count);
//
//    for (size_t i = 0; i < result.size(); i++) {
//        cout << result[i];
//
//        if (i != result.size() - 1) {
//            cout << "\n";
//        }
//    }
//
//    cout << "\n";
    
    
    
    
    
    // Number Line Jumps:
    


//    string first_multiple_input_temp;
//    getline(cin, first_multiple_input_temp);
//
//    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
//
//    int x1 = stoi(first_multiple_input[0]);
//
//    int v1 = stoi(first_multiple_input[1]);
//
//    int x2 = stoi(first_multiple_input[2]);
//
//    int v2 = stoi(first_multiple_input[3]);
//
//    string result = kangaroo(x1, v1, x2, v2);
//
//    cout << result << "\n";
//
//
//    return 0;
    
    
    // Between Two Sets:
    
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    cout << total << "\n";


    return 0;

}

