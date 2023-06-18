#ifndef ACL_ACL_H
#define ACL_ACL_H

#include <unordered_map>


template<typename Entity, typename Resource, typename AccessMode>
class ACL {
    using resource_map = std::unordered_map<Resource, AccessMode>;
    using entity_map = std::unordered_map<Entity, resource_map>;

    entity_map table {};

public:
    void SetAccessMode(
            const Entity& ent,
            const Resource& res,
            const AccessMode& mode) {
        if (auto entity = table.find(ent); entity != table.end()) {
            entity->second.insert_or_assign(res, mode);
            return;
        }
        resource_map rec;
        rec.insert({res, mode});
        table.insert({ent, rec});
    };

    void DelEntity(const Entity& ent) {
        table.erase(ent);
    };

    AccessMode GetAccessMode(const Entity& ent, const Resource& res) {
        if (auto entity = table.find(ent); entity != table.end())
            if (auto resource = entity->second.find(res);
                    resource != entity->second.end())
                return resource->second;
        AccessMode m {};
        return m;
    };
};


#endif //ACL_ACL_H
