#ifndef _QX_BLOG_DONATION_H
#define _QX_BLOG_DONATION_H

class blog;

class QX_BLOG_DLL_EXPORT donation
{
public:
// -- typedef
    typedef std::shared_ptr<blog> blog_ptr;
// -- properties
    QString     m_id;
    float       m_donate_amount;
    QDateTime   m_dt_create;
    blog_ptr    m_blog;
    int         m_user_id;
// -- contructor, virtual destructor
    donation() { ; }
    virtual ~donation() { ; }
};

QX_REGISTER_PRIMARY_KEY(donation, QString)
QX_REGISTER_HPP_QX_BLOG(donation, qx::trait::no_base_class_defined, 0)

typedef std::shared_ptr<donation> donation_ptr;
typedef QList<donation_ptr> list_donation;


#endif // _QX_BLOG_DONATION_H
