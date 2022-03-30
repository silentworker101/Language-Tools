/* Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.
Input format :
String S
Output format :
Output String
Constraints :
1 <= Length of S <= 50000
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde
*/


#include <bits/stdc++.h> 
using namespace std; 
char* uniqueChar(char* str)
{
 
     if (!str)
        return str;   
    int len = strlen(str);
    if (len < 2)   
        return str;
     
    int tail = 1;   
    for (int i = 1; i < len; ++i)
    {       
        int j;       
        for (j = 0; j < tail; ++j)           
            if (str[i] == str[j])               
                break;
         
        if (j == tail)
        {           
            str[tail] = str[i];
            ++tail;
        }   
    }   
    str[tail] = '\0';
    return str;
}
