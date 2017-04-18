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



#include "WhereItem.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

WhereItem::WhereItem()
{
    m_Type = U("");
    m_TypeIsSet = false;
    m_Column = U("");
    m_ColumnIsSet = false;
    m_Value = U("");
    m_ValueIsSet = false;
    
}

WhereItem::~WhereItem()
{
}

void WhereItem::validate()
{
    // TODO: implement validation
}

web::json::value WhereItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }
    if(m_ColumnIsSet)
    {
        val[U("column")] = ModelBase::toJson(m_Column);
    }
    if(m_ValueIsSet)
    {
        val[U("value")] = ModelBase::toJson(m_Value);
    }
    

    return val;
}

void WhereItem::fromJson(web::json::value& val)
{
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
        
    }
    if(val.has_field(U("column")))
    {
        setColumn(ModelBase::stringFromJson(val[U("column")]));
        
    }
    if(val.has_field(U("value")))
    {
        setValue(ModelBase::stringFromJson(val[U("value")]));
        
    }
    
}

void WhereItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
    if(m_ColumnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("column"), m_Column));
        
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
        
    }
    
}

void WhereItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
        
    }
    if(multipart->hasContent(U("column")))
    {
        setColumn(ModelBase::stringFromHttpContent(multipart->getContent(U("column"))));
        
    }
    if(multipart->hasContent(U("value")))
    {
        setValue(ModelBase::stringFromHttpContent(multipart->getContent(U("value"))));
        
    }
    
}


utility::string_t WhereItem::getType() const
{
    return m_Type;
}
void WhereItem::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool WhereItem::typeIsSet() const
{
    return m_TypeIsSet;
}
void WhereItem::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t WhereItem::getColumn() const
{
    return m_Column;
}
void WhereItem::setColumn(utility::string_t value)
{
    m_Column = value;
    m_ColumnIsSet = true;
}
bool WhereItem::columnIsSet() const
{
    return m_ColumnIsSet;
}
void WhereItem::unsetColumn()
{
    m_ColumnIsSet = false;
}
utility::string_t WhereItem::getValue() const
{
    return m_Value;
}
void WhereItem::setValue(utility::string_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool WhereItem::valueIsSet() const
{
    return m_ValueIsSet;
}
void WhereItem::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}

