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

#include "ApiException.h"

namespace io {
namespace swagger {
namespace client {
namespace api {

ApiException::ApiException( int errorCode
    , const utility::string_t& message
    , std::shared_ptr<std::istream> content /*= nullptr*/ )
    : web::http::http_exception( errorCode, message )
    , m_Content(content)
{
}
ApiException::ApiException( int errorCode
    , const utility::string_t& message
    , std::map<utility::string_t, utility::string_t>& headers
    , std::shared_ptr<std::istream> content /*= nullptr*/ )
    : web::http::http_exception( errorCode, message )
    , m_Content(content)
    , m_Headers(headers)
{
}

ApiException::~ApiException()
{
}

std::shared_ptr<std::istream> ApiException::getContent() const
{
    return m_Content;
}

std::map<utility::string_t, utility::string_t>& ApiException::getHeaders()
{
    return m_Headers;
}

}
}
}
}
