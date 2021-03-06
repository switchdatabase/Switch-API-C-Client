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
 * AddResponse.h
 *
 * 
 */

#ifndef AddResponse_H_
#define AddResponse_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  AddResponse
    : public ModelBase
{
public:
    AddResponse();
    virtual ~AddResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AddResponse members

    /// <summary>
    /// 
    /// </summary>
    int64_t getResponseTime() const;
    void setResponseTime(int64_t value);
    bool ResponseTimeIsSet() const;
    void unsetResponseTime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResponse() const;
    void setResponse(utility::string_t value);
    bool ResponseIsSet() const;
    void unsetResponse();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getListItemId() const;
    void setListItemId(utility::string_t value);
    bool ListItemIdIsSet() const;
    void unsetListItemId();

protected:
    int64_t m_ResponseTime;
    bool m_ResponseTimeIsSet;
utility::string_t m_Response;
    bool m_ResponseIsSet;
utility::string_t m_ListItemId;
    bool m_ListItemIdIsSet;
};

}
}
}
}

#endif /* AddResponse_H_ */
