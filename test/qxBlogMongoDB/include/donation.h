#ifndef _QX_BLOG_DONATION_H
#define _QX_BLOG_DONATION_H

#include "reaction.h"

class QX_BLOG_DLL_EXPORT donation  : public reaction
{
public:

    float       m_donate_amount;
// -- contructor, virtual destructor
    donation() { ; }
    virtual ~donation() { ; }
};

QX_REGISTER_PRIMARY_KEY(donation, QString)
QX_REGISTER_HPP_QX_BLOG(donation, reaction, 0)

typedef std::shared_ptr<donation> donation_ptr;
typedef QList<donation_ptr> list_donation;


#endif // _QX_BLOG_DONATION_H
