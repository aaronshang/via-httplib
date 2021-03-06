//////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2013 Ken Barker
// (ken dot barker at via-technology dot co dot uk)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//////////////////////////////////////////////////////////////////////////////
#include "response_status.hpp"
#include "character.hpp"

namespace
{
  // The following strings are for the standard response reason phrases
  // associated with the given response status code.

  // Informational 1xx
  const std::string	REASON_CONTINUE         ("Continue");
  const std::string	REASON_SWITCHING_PROTOCOLS
                                            ("Switching Protocols");
  // Successful 2xx
  const std::string	REASON_OK               ("OK");
  const std::string	REASON_CREATED          ("Created");
  const std::string	REASON_ACCEPTED         ("Accepted");
  const std::string	REASON_NON_AUTHORITATIVE("Non-Authoritative Information");
  const std::string	REASON_NO_CONTENT       ("No Content");
  const std::string	REASON_RESET_CONTENT    ("Reset Content");
  const std::string	REASON_PARTIAL_CONTENT  ("Partial Content");

  // Redirection 3xx
  const std::string	REASON_MULTIPLE_CHOICES ("Multiple Choices");
  const std::string	REASON_MOVED_PERMANENTLY("Moved Permanently");
  const std::string	REASON_FOUND            ("Found");
  const std::string	REASON_SEE_OTHER        ("See Other");
  const std::string	REASON_NOT_MODIFIED     ("Not Modified");
  const std::string	REASON_USE_PROXY        ("Use Proxy");
  const std::string	REASON_TEMPORARY_REDIRECT
                                            ("Temporary Redirect");
  // Client Error 4xx
  const std::string	REASON_BAD_REQUEST      ("Bad Request");
  const std::string	REASON_UNAUTHORISED     ("Unauthorized");
  const std::string	REASON_PAYMENT_REQUIRED ("Payment Required");
  const std::string	REASON_FORBIDDEN        ("Forbidden");
  const std::string	REASON_NOT_FOUND        ("Not Found");
  const std::string	REASON_METHOD_NOT_ALLOWED
                                            ("Method Not Allowed");
  const std::string	REASON_NOT_ACCEPTABLE   
                                            ("Not Acceptable");
  const std::string	REASON_PROXY_AUTHENTICATION_REQUIRED
                                            ("Proxy Authentication Required");
  const std::string	REASON_REQUEST_TIMEOUT  ("Request Time-out");
  const std::string	REASON_CONFLICT         ("Conflict");
  const std::string	REASON_GONE             ("Gone");
  const std::string	REASON_LENGTH_REQUIRED  ("Length Required");
  const std::string	REASON_PRECONDITION_FAILED
                                            ("Precondition Failed");
  const std::string	REASON_REQUEST_ENTITY_TOO_LARGE
                                            ("Request Entity Too Large");
  const std::string	REASON_REQUEST_URI_TOO_LONG
                                            ("Request-URI Too Large");
  const std::string	REASON_UNSUPPORTED_MEDIA_TYPE
                                            ("Unsupported Media Type");
  const std::string	REASON_REQUEST_RANGE_NOT_SATISFIABLE
                                          ("Requested range not satisfiable");
  const std::string	REASON_EXPECTATION_FAILED
                                            ("Expectation Failed");
  // Server Error 5xx
  const std::string	REASON_INTERNAL_SERVER_ERROR
                                            ("Internal Server Error");
  const std::string	REASON_NOT_IMPLEMENTED  ("Not Implemented");
  const std::string	REASON_BAD_GATEWAY      ("Bad Gateway");
  const std::string	REASON_SERVICE_UNAVAILABLE
                                            ("Service Unavailable");
  const std::string	REASON_GATEWAY_TIMEOUT  ("Gateway Time-out");
  const std::string	REASON_HTTP_VERSION_NOT_SUPPORTED
                                            ("HTTP Version not supported");

  const std::string EMPTY_STRING("");
}

namespace via
{
  namespace http
  {
    namespace response_status
    {
    //////////////////////////////////////////////////////////////////////////
    const std::string& reason_phrase(status_code status)
    {
      switch(status)
      {
      // Informational 1xx
      case CONTINUE:                      return REASON_CONTINUE;
      case SWITCHING_PROTOCOLS:           return REASON_SWITCHING_PROTOCOLS;

      // Successful 2xx
      case OK:                            return REASON_OK;
      case CREATED:                       return REASON_CREATED;
      case ACCEPTED:                      return REASON_ACCEPTED;
      case NON_AUTHORITATIVE:             return REASON_NON_AUTHORITATIVE;
      case NO_CONTENT:                    return REASON_NO_CONTENT;
      case RESET_CONTENT:                 return REASON_RESET_CONTENT;
      case PARTIAL_CONTENT:               return REASON_PARTIAL_CONTENT;

      // Redirection 3xx
      case MULTIPLE_CHOICES:              return REASON_MULTIPLE_CHOICES;
      case MOVED_PERMANENTLY:             return REASON_MOVED_PERMANENTLY;
      case FOUND:                         return REASON_FOUND;
      case SEE_OTHER:                     return REASON_SEE_OTHER;
      case NOT_MODIFIED:                  return REASON_NOT_MODIFIED;
      case USE_PROXY:                     return REASON_USE_PROXY;
      case TEMPORARY_REDIRECT:            return REASON_TEMPORARY_REDIRECT;

      // Client Error 4xx
      case BAD_REQUEST:                   return REASON_BAD_REQUEST;
      case UNAUTHORISED:                  return REASON_UNAUTHORISED;
      case PAYMENT_REQUIRED:              return REASON_PAYMENT_REQUIRED;
      case FORBIDDEN:                     return REASON_FORBIDDEN;
      case NOT_FOUND:                     return REASON_NOT_FOUND;
      case METHOD_NOT_ALLOWED:            return REASON_METHOD_NOT_ALLOWED;
      case NOT_ACCEPTABLE:                return REASON_NOT_ACCEPTABLE;
      case PROXY_AUTHENTICATION_REQUIRED: 
                                  return REASON_PROXY_AUTHENTICATION_REQUIRED;
      case REQUEST_TIMEOUT:               return REASON_REQUEST_TIMEOUT;
      case CONFLICT:                      return REASON_CONFLICT;
      case GONE:                          return REASON_GONE;
      case LENGTH_REQUIRED:               return REASON_LENGTH_REQUIRED;
      case PRECONDITION_FAILED:           return REASON_PRECONDITION_FAILED;
      case REQUEST_ENTITY_TOO_LARGE:   return REASON_REQUEST_ENTITY_TOO_LARGE;
      case REQUEST_URI_TOO_LONG:          return REASON_REQUEST_URI_TOO_LONG;
      case UNSUPPORTED_MEDIA_TYPE:       return REASON_UNSUPPORTED_MEDIA_TYPE;
      case REQUEST_RANGE_NOT_SATISFIABLE:
                                  return REASON_REQUEST_RANGE_NOT_SATISFIABLE;
      case EXPECTATION_FAILED:            return REASON_EXPECTATION_FAILED;

      // Server Error 5xx
      case INTERNAL_SERVER_ERROR:         return REASON_INTERNAL_SERVER_ERROR;
      case NOT_IMPLEMENTED:               return REASON_NOT_IMPLEMENTED;
      case BAD_GATEWAY:                   return REASON_BAD_GATEWAY;
      case SERVICE_UNAVAILABLE:           return REASON_SERVICE_UNAVAILABLE;
      case GATEWAY_TIMEOUT:               return REASON_GATEWAY_TIMEOUT;
      case HTTP_VERSION_NOT_SUPPORTED:    
                                     return REASON_HTTP_VERSION_NOT_SUPPORTED;
      // Unknown Error Status Code
      default:                            return EMPTY_STRING;
      }

      return EMPTY_STRING;
    }
    //////////////////////////////////////////////////////////////////////////

    }
  }
}
