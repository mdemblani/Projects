
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    // Take input from standard input
    int interviewCount, negelectCount;
    
    cin >> interviewCount;
    cin >> negelectCount;
    
    if(negelectCount < 0) {
        negelectCount = 0;
    }
    
    if(interviewCount < negelectCount) {
        cout << "Value Mismatch";
        return 1;
    }
    
    int luck, balance = 0, important;
    int minImportantLuck = 0, importantCount = 0;
    
    int importantInterviewCount = 0, 
        *importantInterviewLuck = new int[negelectCount];
    
    // Take in user input
    do {
        cin >> luck >> important;
        // Add the total luck to the balance
        balance += luck;
        if(luck < 0) {
            cout << "No Luck, Error";
            return 1;
        }
        if(!!important) {
            importantInterviewLuck[importantInterviewCount] = luck;
            importantInterviewCount++;
        }
        interviewCount--;
        
    } while(interviewCount);
    
    sort(importantInterviewLuck, importantInterviewLuck + importantInterviewCount);
    
    for(int i = 0; i < importantInterviewCount - negelectCount; i++) {
        balance -= (importantInterviewLuck[i] * 2);
    }
    cout << balance << endl; 
   
    return 0;
}