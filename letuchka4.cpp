#include <iostream>
using namespace std;

struct mobilephone{
    double weight;
    bool isbroken;
    double price;
};

int main(){
    int mob;
    std::cin >> mob;
    mobilephone phone[mob];
    for (int i = 0; i < mob; ++i){
        std::cin >> phone[i].weight >> phone[i].isbroken >> phone[i].price;
    }
