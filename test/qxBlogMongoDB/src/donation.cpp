#include "../include/precompiled.h"

#include "../include/donation.h"
#include "../include/blog.h"

#include <QxOrm_Impl.h>

QX_REGISTER_CPP_QX_BLOG(donation)

namespace qx {
template <> void register_class(QxClass<donation> & t)
{
   t.id(& donation::m_id, "donation_id");

   t.data(& donation::m_donate_amount, "donate_amount");

   t.data(& donation::m_dt_create, "date_creation");
   t.data(& donation::m_user_id, "user_id");

   t.relationManyToOne(& donation::m_blog, "blog_id");
}}
