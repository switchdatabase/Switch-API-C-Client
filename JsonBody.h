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
 * JsonBody.h
 *
 * This is a JSON http body which can be submitted via http
 */

#ifndef JsonBody_H_
#define JsonBody_H_


#include "IHttpBody.h"

#include <cpprest/json.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

class  JsonBody
    : public IHttpBody
{
public:
    JsonBody( const web::json::value& value );
    virtual ~JsonBody();

    void writeTo( std::ostream& target ) override;

protected:
    web::json::value m_Json;
};

}
}
}
}

#endif /* JsonBody_H_ */