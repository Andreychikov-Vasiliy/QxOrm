#ifndef _QX_BLOG_REACTION_H_
#define _QX_BLOG_REACTION_H_

class blog;

class reaction
{
public:
// -- typedef
   typedef std::shared_ptr<blog> blog_ptr;
// -- properties
   QString     m_id;
   QDateTime   m_dt_create;
   blog_ptr    m_blog;
   int         m_user_id;
// -- contructor, virtual destructor
   reaction() { ; }
   virtual ~reaction() { ; }
};

QX_REGISTER_PRIMARY_KEY(reaction, QString)
QX_REGISTER_HPP_QX_BLOG(reaction, qx::trait::no_base_class_defined, 0)

typedef std::shared_ptr<reaction> reaction_ptr;
typedef QList<reaction_ptr> list_reaction;

#endif // _QX_BLOG_REACTION_H_
