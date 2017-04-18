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



#include "Body.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Body::Body()
{
    m_List = U("");
    m_ListIsSet = false;
    m_Count = 0;
    m_CountIsSet = false;
    m_Page = 0;
    m_PageIsSet = false;
    m_WhereType = U("");
    m_WhereTypeIsSet = false;
    m_WhereIsSet = false;
    m_OrderIsSet = false;
    
}

Body::~Body()
{
}

void Body::validate()
{
    // TODO: implement validation
}

web::json::value Body::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ListIsSet)
    {
        val[U("list")] = ModelBase::toJson(m_List);
    }
    if(m_CountIsSet)
    {
        val[U("count")] = ModelBase::toJson(m_Count);
    }
    if(m_PageIsSet)
    {
        val[U("page")] = ModelBase::toJson(m_Page);
    }
    if(m_WhereTypeIsSet)
    {
        val[U("whereType")] = ModelBase::toJson(m_WhereType);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Where )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("where")] = web::json::value::array(jsonArray);
        }
    }
    if(m_OrderIsSet)
    {
        val[U("order")] = ModelBase::toJson(m_Order);
    }
    

    return val;
}

void Body::fromJson(web::json::value& val)
{
    if(val.has_field(U("list")))
    {
        setList(ModelBase::stringFromJson(val[U("list")]));
        
    }
    if(val.has_field(U("count")))
    {
        setCount(ModelBase::int32_tFromJson(val[U("count")]));
    }
    if(val.has_field(U("page")))
    {
        setPage(ModelBase::int32_tFromJson(val[U("page")]));
    }
    if(val.has_field(U("whereType")))
    {
        setWhereType(ModelBase::stringFromJson(val[U("whereType")]));
        
    }
    {
        m_Where.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("where")))
        {
        for( auto& item : val[U("where")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Where.push_back( std::shared_ptr<WhereItem>(nullptr) );
            }
            else
            {
                std::shared_ptr<WhereItem> newItem(new WhereItem());
                newItem->fromJson(item);
                m_Where.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("order")))
    {
        if(!val[U("order")].is_null())
        {
            std::shared_ptr<List_order> newItem(new List_order());
            newItem->fromJson(val[U("order")]);
            setOrder( newItem );
        }
        
    }
    
}

void Body::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("list"), m_List));
        
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("count"), m_Count));
    }
    if(m_PageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("page"), m_Page));
    }
    if(m_WhereTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("whereType"), m_WhereType));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Where )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("where"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_OrderIsSet)
    {
        if (m_Order.get())
        {
            m_Order->toMultipart(multipart, U("order."));
        }
        
    }
    
}

void Body::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("list")))
    {
        setList(ModelBase::stringFromHttpContent(multipart->getContent(U("list"))));
        
    }
    if(multipart->hasContent(U("count")))
    {
        setCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("count"))));
    }
    if(multipart->hasContent(U("page")))
    {
        setPage(ModelBase::int32_tFromHttpContent(multipart->getContent(U("page"))));
    }
    if(multipart->hasContent(U("whereType")))
    {
        setWhereType(ModelBase::stringFromHttpContent(multipart->getContent(U("whereType"))));
        
    }
    {
        m_Where.clear();
        if(multipart->hasContent(U("where")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("where"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Where.push_back( std::shared_ptr<WhereItem>(nullptr) );
            }
            else
            {
                std::shared_ptr<WhereItem> newItem(new WhereItem());
                newItem->fromJson(item);
                m_Where.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("order")))
    {
        if(multipart->hasContent(U("order")))
        {
            std::shared_ptr<List_order> newItem(new List_order());
            newItem->fromMultiPart(multipart, U("order."));
            setOrder( newItem );
        }
        
    }
    
}


utility::string_t Body::getList() const
{
    return m_List;
}
void Body::setList(utility::string_t value)
{
    m_List = value;
    m_ListIsSet = true;
}
bool Body::listIsSet() const
{
    return m_ListIsSet;
}
void Body::unsetList()
{
    m_ListIsSet = false;
}
int32_t Body::getCount() const
{
    return m_Count;
}
void Body::setCount(int32_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}
bool Body::countIsSet() const
{
    return m_CountIsSet;
}
void Body::unsetCount()
{
    m_CountIsSet = false;
}
int32_t Body::getPage() const
{
    return m_Page;
}
void Body::setPage(int32_t value)
{
    m_Page = value;
    m_PageIsSet = true;
}
bool Body::pageIsSet() const
{
    return m_PageIsSet;
}
void Body::unsetPage()
{
    m_PageIsSet = false;
}
utility::string_t Body::getWhereType() const
{
    return m_WhereType;
}
void Body::setWhereType(utility::string_t value)
{
    m_WhereType = value;
    m_WhereTypeIsSet = true;
}
bool Body::whereTypeIsSet() const
{
    return m_WhereTypeIsSet;
}
void Body::unsetWhereType()
{
    m_WhereTypeIsSet = false;
}
std::vector<std::shared_ptr<WhereItem>>& Body::getWhere()
{
    return m_Where;
}
bool Body::whereIsSet() const
{
    return m_WhereIsSet;
}
void Body::unsetWhere()
{
    m_WhereIsSet = false;
}
std::shared_ptr<List_order> Body::getOrder() const
{
    return m_Order;
}
void Body::setOrder(std::shared_ptr<List_order> value)
{
    m_Order = value;
    m_OrderIsSet = true;
}
bool Body::orderIsSet() const
{
    return m_OrderIsSet;
}
void Body::unsetOrder()
{
    m_OrderIsSet = false;
}

}
}
}
}
