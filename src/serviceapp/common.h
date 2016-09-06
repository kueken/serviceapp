#ifndef __serviceapp__common_
#define __serviceapp__common_

#include<string>

class Url
{
    std::string m_url;
    std::string m_proto;
    std::string m_host;
    unsigned int m_port;
    std::string m_path;
    std::string m_query;
    std::string m_fragment;
    std::string url() const;
    std::string host() const;
    unsigned int port() const;
    std::string path() const;
    std::string query() const;
    std::string fragment() const;
    void parseUrl(const std::string url);

public:
    Url(const std::string &url);
    std::string url(){return m_url;}
    std::string proto(){return m_proto;}
    std::string host(){return m_host;}
    int port(){return m_port;}
    std::string path(){return m_path;}
    std::string query(){return m_query;}
    std::string fragment(){return m_fragment;}
};
#endif