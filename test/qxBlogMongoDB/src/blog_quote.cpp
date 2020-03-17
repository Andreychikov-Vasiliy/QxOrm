#include "../include/precompiled.h"

#include "../include/blog_quote.h"
#include "../include/blog.h"

#include <QxOrm_Impl.h>

QX_REGISTER_CPP_QX_BLOG(blog_quote)

namespace qx {
template <> void register_class(QxClass<blog_quote> & t)
{
   t.data(& blog_quote::m_quote_start_at, "quote_start_at");
   t.data(& blog_quote::m_quote_end_at, "quote_end_at");
   t.data(& blog_quote::m_quote_text, "quote_text");
}}
