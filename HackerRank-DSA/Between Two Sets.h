//
//  Between Two Sets.h
//  HackerRank-DSA
//
//  Created by Илья Атмажитов on 01.06.2024.
//

#ifndef Between_Two_Sets_h
#define Between_Two_Sets_h

//There will be two arrays of integers. Determine all integers that satisfy the following two conditions:
//The elements of the first array are all factors of the integer being considered
//The integer being considered is a factor of all elements of the second array
//These numbers are referred to as being between the two arrays. Determine how many such numbers exist.

using namespace std;

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */


int NOD(int n1, int n2) {
  if (n2 == 0) {
    return n1;
  }
  return NOD(n2, n1 % n2);
}

int NOK(int n1, int n2) {
  if (n1 == 0 || n2 == 0)
    return 0;
  else {
    int nod = NOD(n1, n2);
    return abs(n1 * n2) / nod;
  }
}



int getTotalX(vector<int> a, vector<int> b) {
    
    int result = 0;

    int nok = a[0];
    for (int i = 0; i < a.size(); i++) {
      nok = NOK(nok, a[i]);
    }

    int nod = b[0];
    for (int j = 0; j < b.size(); j++) {
      nod = NOD(nod, b[j]);
    }

    int multiple = 0;
    while (multiple <= nod) {
      multiple += nok;

      if (nod % multiple == 0)
        result++;
    }

    return result;

}


#endif /* Between_Two_Sets_h */
