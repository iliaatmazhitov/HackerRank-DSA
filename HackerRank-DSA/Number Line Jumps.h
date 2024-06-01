//
//  Number Line Jumps.h
//  HackerRank-DSA
//
//  Created by Илья Атмажитов on 01.06.2024.
//

#ifndef Number_Line_Jumps_h
#define Number_Line_Jumps_h

#define MAX_SIZE 10000;

//You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).
//The first kangaroo starts at location  and moves at a rate of  meters per jump.
//The second kangaroo starts at location  and moves at a rate of  meters per jump.
//You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

using namespace std;

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

string kangaroo(int x1, int v1, int x2, int v2) {
    string answer = ((v1 > v2) && ((x2 - x1) % (v2 - v1) == 0)) ? "YES" : "NO";
    return answer;
}



#endif /* Number_Line_Jumps_h */
