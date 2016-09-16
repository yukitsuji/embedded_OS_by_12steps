
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_zip_Inflater__
#define __java_util_zip_Inflater__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
        class RawData;
    }
  }
}

class java::util::zip::Inflater : public ::java::lang::Object
{

public:
  Inflater();
  Inflater(jboolean);
public: // actually protected
  virtual void finalize();
public:
  virtual void end();
  virtual jboolean finished();
  virtual jint getAdler();
  virtual jint getRemaining();
  virtual jint getTotalIn();
  virtual jint getTotalOut();
  virtual jint inflate(JArray< jbyte > *);
  virtual jint inflate(JArray< jbyte > *, jint, jint);
private:
  void init(jboolean);
public:
  virtual jboolean needsDictionary();
  virtual jboolean needsInput();
  virtual void reset();
  virtual void setDictionary(JArray< jbyte > *);
  virtual void setDictionary(JArray< jbyte > *, jint, jint);
  virtual void setInput(JArray< jbyte > *);
  virtual void setInput(JArray< jbyte > *, jint, jint);
private:
  ::gnu::gcj::RawData * __attribute__((aligned(__alignof__( ::java::lang::Object)))) zstream;
  jboolean is_finished;
  jboolean dict_needed;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_zip_Inflater__
