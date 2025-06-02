#include <iostream>
using namespace std;

void maxProfit(int *prices, int n){
    int bestbuy[100000];
    bestbuy[0] = INT_MAX;
    for(int i = 1; i < n; i++){
        bestbuy[i] = min(bestbuy[i - 1], prices[i - 1]);
    }
    int maxprofit = 0;
    for(int i = 1; i < n; i++){
        int currProfit = prices[i] - bestbuy[i];
        maxprofit = max(maxprofit, currProfit);
    }
    cout << "Maximum profit is: " << maxprofit << endl;
}

int main(){
    int prices[6]= {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    maxProfit(prices, n);
    return 0;
}