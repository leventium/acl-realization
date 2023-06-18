#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "acl.h"


TEST_CASE("test ACL insert") {
    ACL<int, int, bool> acl;
    acl.SetAccessMode(10, 10, true);
    CHECK(acl.GetAccessMode(10, 10) == true);
}

TEST_CASE("test ACL get") {
    ACL<int, int, bool> acl;
    bool res {};
    CHECK(acl.GetAccessMode(10, 10) == res);
}

TEST_CASE("test ACL delete") {
    ACL<int, int, bool> acl;
    bool res {};

    acl.SetAccessMode(10, 10, true);
    CHECK(acl.GetAccessMode(10, 10) == true);
    acl.DelEntity(10);
    CHECK(acl.GetAccessMode(10, 10) == res);
}
