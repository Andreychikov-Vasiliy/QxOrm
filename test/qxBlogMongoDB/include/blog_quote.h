#ifndef BLOG_QUOTE_H
#define BLOG_QUOTE_H

#include "reaction.h"

class QX_BLOG_DLL_EXPORT blog_quote : public reaction
{
public:
// -- properties
    int         m_quote_start_at;
    int         m_quote_end_at;
    QString     m_quote_text;

// -- contructor, virtual destructor
    blog_quote() { ; }
    virtual ~blog_quote() { ; }
};

QX_REGISTER_PRIMARY_KEY(blog_quote, QString)
QX_REGISTER_HPP_QX_BLOG(blog_quote, reaction, 0)

typedef std::shared_ptr<blog_quote> blog_quote_ptr;
typedef QList<blog_quote_ptr> list_blog_quote;


#endif // BLOG_QUOTE_H
