
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_DelegatedTask__
#define __gnu_javax_net_ssl_provider_DelegatedTask__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace debug
      {
          class SystemLogger;
      }
    }
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class DelegatedTask;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::DelegatedTask : public ::java::lang::Object
{

public: // actually protected
  DelegatedTask();
public:
  virtual void run();
  virtual jboolean hasRun();
  virtual ::java::lang::Throwable * thrown();
public: // actually protected
  virtual void implRun() = 0;
private:
  static ::gnu::classpath::debug::SystemLogger * logger;
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object)))) hasRun__;
public: // actually protected
  ::java::lang::Throwable * thrown__;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_DelegatedTask__
