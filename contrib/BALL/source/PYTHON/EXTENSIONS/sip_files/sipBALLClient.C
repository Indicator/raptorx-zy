/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLClient.h"

#include "sipBALLGeneralException.h"
#include "sipBALLString.h"
#include "sipBALLClient.h"
#include "sipBALLComposite.h"


sipClient::sipClient() throw(): Client(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipClient::sipClient(const String& a0,int a1) throw(): Client(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipClient::sipClient(const Client& a0): Client(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipClient::~sipClient() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipClient::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Client::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipClient::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Client::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Client_clear(PyObject *, PyObject *);}
static PyObject *meth_Client_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Client *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Client,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Client::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Client,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Client_connect(PyObject *, PyObject *);}
static PyObject *meth_Client_connect(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = VIEW_DEFAULT_PORT;
        Client *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|i",&sipSelf,sipClass_Client,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            sipCpp->connect(*a0,a1);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Client,sipNm_BALL_connect);

    return NULL;
}


extern "C" {static PyObject *meth_Client_insert(PyObject *, PyObject *);}
static PyObject *meth_Client_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Client *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Client,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            sipCpp->insert(*a0);
            }
            catch (GeneralException &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                GeneralException *sipExceptionCopy = new GeneralException(sipExceptionRef);

                sipRaiseClassException(sipClass_GeneralException,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Client,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_Client_isValid(PyObject *, PyObject *);}
static PyObject *meth_Client_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Client *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Client,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Client::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Client,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Client(void *, sipWrapperType *);}
static void *cast_Client(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Client)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Client(void *, int);}
static void release_Client(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipClient *>(ptr);
    else
        delete reinterpret_cast<Client *>(ptr);
}


extern "C" {static void dealloc_Client(sipWrapper *);}
static void dealloc_Client(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipClient *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Client(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Client(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Client(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipClient *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipClient();
        }
    }

    if (!sipCpp)
    {
        const String * a0;
        int a0State = 0;
        int a1 = VIEW_DEFAULT_PORT;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|i",sipClass_String,&a0,&a0State,&a1))
        {
            sipCpp = new sipClient(*a0,a1);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        const Client * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Client,&a0))
        {
            try
            {
            sipCpp = new sipClient(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Client(PyObject *, int *);}
static void *forceConvertTo_Client(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Client))
        return sipConvertToCpp(valobj,sipClass_Client,iserrp);

    sipBadClass(sipNm_BALL_Client);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Client[] = {
    {sipNm_BALL_clear, meth_Client_clear, METH_VARARGS, NULL},
    {sipNm_BALL_connect, meth_Client_connect, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_Client_insert, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Client_isValid, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_Client[] = {
    {sipNm_BALL_COMMAND__SEND_OBJECT, Client::COMMAND__SEND_OBJECT, 36},
    {sipNm_BALL_COMMAND__UNKOWN, Client::COMMAND__UNKOWN, 36},
    {sipNm_BALL_NUMBER_OF_COMMANDS, Client::NUMBER_OF_COMMANDS, 36},
};


sipTypeDef sipType_BALL_Client = {
    0,
    0,
    "BALL.Client",
    0,
    {0, 0, 1},
    0,
    0,
    4, methods_Client,
    3, enummembers_Client,
    0,
    init_Client,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Client,
    cast_Client,
    release_Client,
    forceConvertTo_Client,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
