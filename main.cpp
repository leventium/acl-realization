#include <iostream>
#include "ACL.h"
//#include <unordered_map>

int main() {
    ACL<int, int, bool> acl {};
    acl.SetAccessMode(10, 10, false);
    acl.SetAccessMode(10, 15, true);
    acl.SetAccessMode(20, 20, true);
    std::cout << acl.GetAccessMode(10, 10) << std::endl;
    std::cout << acl.GetAccessMode(10, 15) << std::endl;
    std::cout << acl.GetAccessMode(10, 20) << std::endl;
    std::cout << acl.GetAccessMode(20, 20) << std::endl;
    acl.DelEntity(20);
    std::cout << acl.GetAccessMode(20, 20) << std::endl;
    return 0;
}
