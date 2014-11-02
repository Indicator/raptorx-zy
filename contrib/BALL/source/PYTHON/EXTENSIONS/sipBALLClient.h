/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLClient_h
#define _BALLClient_h

#line 10 "client.sip"
	#include <BALL/CONCEPT/client.h>
	using namespace BALL;
#line 18 "client.sip"
	#include <BALL/CONCEPT/client.h>
	using namespace BALL;
#line 29 "client.sip"
	#include <BALL/CONCEPT/client.h>
	using namespace BALL;
#line 23 "sipBALLClient.h"

#define sipClass_Client             sipModuleAPI_BALL.em_types[244]
#define sipCast_Client              sipType_BALL_Client.td_cast
#define sipForceConvertTo_Client    sipType_BALL_Client.td_fcto

#define sipEnum_Client_Command              sipModuleAPI_BALL.em_enums[36]

extern sipTypeDef sipType_BALL_Client;


class sipClient : public Client
{
public:
    sipClient() throw();
    sipClient(const String&,int) throw();
    sipClient(const Client&);
    virtual ~sipClient() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool isValid() const throw();

public:
    sipWrapper *sipPySelf;

private:
    sipClient(const sipClient &);
    sipClient &operator = (const sipClient &);

    sipMethodCache sipPyMethods[2];
};

#endif
