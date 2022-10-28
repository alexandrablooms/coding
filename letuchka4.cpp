#include <iostream>

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
    std::cout<< "<MobilePhones>"<<std::endl;
    for (int i = 0; i < mob; ++i){
        std::cout<<"\t"<< "<MobilePhone "<< "id=\""<<i<<"\""<<" weight=" <<"\""<< phone[i].weight <<"\""<< " is_broken=" <<"\""<< ((phone[i].isbroken) ? "true":"false")<<"\"" << " price=" <<"\""<< phone[i].price<<"\""<< "/>" <<std::endl;
    }
    std::cout<< "</MobilePhones>"<<std::endl;
    return 0;
}
