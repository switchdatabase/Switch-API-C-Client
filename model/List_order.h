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
 * List_order.h
 *
 * 
 */

#ifndef List_order_H_
#define List_order_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  List_order
    : public ModelBase
{
public:
    List_order();
    virtual ~List_order();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// List_order members

    /// <summary>
    /// Order types: ASC, DESC
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// Column name.
    /// </summary>
    utility::string_t getBy() const;
    void setBy(utility::string_t value);
    bool byIsSet() const;
    void unsetBy();

protected:
    utility::string_t m_Type;
    bool m_TypeIsSet;
utility::string_t m_By;
    bool m_ByIsSet;
};

}
}
}
}

#endif /* List_order_H_ */
