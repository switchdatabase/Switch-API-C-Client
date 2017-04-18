/**
 * Switch Database REST API
 * Switch API is the primary endpoint of data sevices and Switch DB's platform. You can do adding, editing, deleting or listing data works to your database with query operations by using this low-level API based on HTTP.
 *
 * OpenAPI spec version: 1.2.1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Body.h
 *
 * 
 */

#ifndef Body_H_
#define Body_H_


#include "ModelBase.h"

#include "List_order.h"
#include <cpprest/details/basic_types.h>
#include "WhereItem.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Body
    : public ModelBase
{
public:
    Body();
    virtual ~Body();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Body members

    /// <summary>
    /// List name.
    /// </summary>
    utility::string_t getList() const;
    void setList(utility::string_t value);
    bool listIsSet() const;
    void unsetList();
    /// <summary>
    /// Item count.
    /// </summary>
    int32_t getCount() const;
    void setCount(int32_t value);
    bool countIsSet() const;
    void unsetCount();
    /// <summary>
    /// Page number.
    /// </summary>
    int32_t getPage() const;
    void setPage(int32_t value);
    bool pageIsSet() const;
    void unsetPage();
    /// <summary>
    /// Optional enumerator. You can assign the mode of implementation of where criterions by using AND and OR types under whereType parameter.
    /// </summary>
    utility::string_t getWhereType() const;
    void setWhereType(utility::string_t value);
    bool whereTypeIsSet() const;
    void unsetWhereType();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<WhereItem>>& getWhere();
    bool whereIsSet() const;
    void unsetWhere();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<List_order> getOrder() const;
    void setOrder(std::shared_ptr<List_order> value);
    bool orderIsSet() const;
    void unsetOrder();

protected:
    utility::string_t m_List;
    bool m_ListIsSet;
int32_t m_Count;
    bool m_CountIsSet;
int32_t m_Page;
    bool m_PageIsSet;
utility::string_t m_WhereType;
    bool m_WhereTypeIsSet;
std::vector<std::shared_ptr<WhereItem>> m_Where;
    bool m_WhereIsSet;
std::shared_ptr<List_order> m_Order;
    bool m_OrderIsSet;
};

}
}
}
}

#endif /* Body_H_ */