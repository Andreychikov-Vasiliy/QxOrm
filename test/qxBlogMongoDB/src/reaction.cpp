#include "../include/precompiled.h"

#include "../include/reaction.h"

#include <QxOrm_Impl.h>

QX_REGISTER_CPP_QX_BLOG(reaction)

namespace qx {
template <> void register_class(QxClass<reaction> & t)
{
   t.id(& reaction::m_id, "reaction_id");

   t.data(& reaction::m_dt_create, "date_creation");
   t.data(& reaction::m_user_id, "user_id");

   t.relationManyToOne(& reaction::m_blog, "blog_id");
}}
