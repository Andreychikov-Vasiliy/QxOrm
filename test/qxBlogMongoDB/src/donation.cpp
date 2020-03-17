#include "../include/precompiled.h"

#include "../include/donation.h"
#include "../include/blog.h"

#include <QxOrm_Impl.h>

QX_REGISTER_CPP_QX_BLOG(donation)

namespace qx {
template <> void register_class(QxClass<donation> & t)
{
   t.data(& donation::m_donate_amount, "donate_amount");
}}
