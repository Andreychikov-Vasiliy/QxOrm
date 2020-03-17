#ifndef _QX_BLOG_COMMENT_H_
#define _QX_BLOG_COMMENT_H_

#include "reaction.h"

class QX_BLOG_DLL_EXPORT comment : public reaction
{
public:
// -- typedef
// -- properties
   QString     m_text;

// -- contructor, virtual destructor
   comment() { ; }
   virtual ~comment() { ; }
};

QX_REGISTER_PRIMARY_KEY(comment, QString)
QX_REGISTER_HPP_QX_BLOG(comment, reaction, 0)

typedef std::shared_ptr<comment> comment_ptr;
typedef QList<comment_ptr> list_comment;

#endif // _QX_BLOG_COMMENT_H_
