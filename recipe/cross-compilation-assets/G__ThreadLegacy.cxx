// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ThreadLegacy
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "TPosixCondition.h"
#include "TPosixMutex.h"
#include "TPosixThread.h"
#include "TPosixThreadFactory.h"
#include "PosixThreadInc.h"
#include "TCondition.h"
#include "TConditionImp.h"
#include "ThreadLocalStorage.h"
#include "TMutex.h"
#include "TMutexImp.h"
#include "TThreadFactory.h"
#include "TThread.h"
#include "TThreadImp.h"
#include "ROOT/TReentrantRWLock.hxx"
#include "ROOT/TSpinMutex.hxx"

// Header files passed via #pragma extra_include

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTConditionImp(void *p);
   static void deleteArray_CppyyLegacycLcLTConditionImp(void *p);
   static void destruct_CppyyLegacycLcLTConditionImp(void *p);
   static void streamer_CppyyLegacycLcLTConditionImp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TConditionImp*)
   {
      ::CppyyLegacy::TConditionImp *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TConditionImp >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TConditionImp", ::CppyyLegacy::TConditionImp::Class_Version(), "TConditionImp.h", 31,
                  typeid(::CppyyLegacy::TConditionImp), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TConditionImp::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TConditionImp) );
      instance.SetDelete(&delete_CppyyLegacycLcLTConditionImp);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTConditionImp);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTConditionImp);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTConditionImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TConditionImp*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TConditionImp*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TConditionImp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTPosixCondition(void *p);
   static void deleteArray_CppyyLegacycLcLTPosixCondition(void *p);
   static void destruct_CppyyLegacycLcLTPosixCondition(void *p);
   static void streamer_CppyyLegacycLcLTPosixCondition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TPosixCondition*)
   {
      ::CppyyLegacy::TPosixCondition *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TPosixCondition >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TPosixCondition", ::CppyyLegacy::TPosixCondition::Class_Version(), "TPosixCondition.h", 39,
                  typeid(::CppyyLegacy::TPosixCondition), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TPosixCondition::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TPosixCondition) );
      instance.SetDelete(&delete_CppyyLegacycLcLTPosixCondition);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTPosixCondition);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTPosixCondition);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTPosixCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TPosixCondition*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TPosixCondition*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixCondition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTMutexImp(void *p);
   static void deleteArray_CppyyLegacycLcLTMutexImp(void *p);
   static void destruct_CppyyLegacycLcLTMutexImp(void *p);
   static void streamer_CppyyLegacycLcLTMutexImp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMutexImp*)
   {
      ::CppyyLegacy::TMutexImp *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TMutexImp >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMutexImp", ::CppyyLegacy::TMutexImp::Class_Version(), "TMutexImp.h", 31,
                  typeid(::CppyyLegacy::TMutexImp), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TMutexImp::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TMutexImp) );
      instance.SetDelete(&delete_CppyyLegacycLcLTMutexImp);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMutexImp);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMutexImp);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTMutexImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMutexImp*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMutexImp*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMutexImp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTPosixMutex(void *p = 0);
   static void *newArray_CppyyLegacycLcLTPosixMutex(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTPosixMutex(void *p);
   static void deleteArray_CppyyLegacycLcLTPosixMutex(void *p);
   static void destruct_CppyyLegacycLcLTPosixMutex(void *p);
   static void streamer_CppyyLegacycLcLTPosixMutex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TPosixMutex*)
   {
      ::CppyyLegacy::TPosixMutex *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TPosixMutex >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TPosixMutex", ::CppyyLegacy::TPosixMutex::Class_Version(), "TPosixMutex.h", 35,
                  typeid(::CppyyLegacy::TPosixMutex), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TPosixMutex::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TPosixMutex) );
      instance.SetNew(&new_CppyyLegacycLcLTPosixMutex);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTPosixMutex);
      instance.SetDelete(&delete_CppyyLegacycLcLTPosixMutex);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTPosixMutex);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTPosixMutex);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTPosixMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TPosixMutex*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TPosixMutex*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTCondition(void *p = 0);
   static void *newArray_CppyyLegacycLcLTCondition(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTCondition(void *p);
   static void deleteArray_CppyyLegacycLcLTCondition(void *p);
   static void destruct_CppyyLegacycLcLTCondition(void *p);
   static void streamer_CppyyLegacycLcLTCondition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TCondition*)
   {
      ::CppyyLegacy::TCondition *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TCondition >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TCondition", ::CppyyLegacy::TCondition::Class_Version(), "TCondition.h", 34,
                  typeid(::CppyyLegacy::TCondition), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TCondition::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TCondition) );
      instance.SetNew(&new_CppyyLegacycLcLTCondition);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTCondition);
      instance.SetDelete(&delete_CppyyLegacycLcLTCondition);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTCondition);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTCondition);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TCondition*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TCondition*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TCondition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTThread(void *p = 0);
   static void *newArray_CppyyLegacycLcLTThread(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTThread(void *p);
   static void deleteArray_CppyyLegacycLcLTThread(void *p);
   static void destruct_CppyyLegacycLcLTThread(void *p);
   static void streamer_CppyyLegacycLcLTThread(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TThread*)
   {
      ::CppyyLegacy::TThread *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TThread >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TThread", ::CppyyLegacy::TThread::Class_Version(), "TThread.h", 37,
                  typeid(::CppyyLegacy::TThread), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TThread::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TThread) );
      instance.SetNew(&new_CppyyLegacycLcLTThread);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTThread);
      instance.SetDelete(&delete_CppyyLegacycLcLTThread);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTThread);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTThread);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTThread);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TThread*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TThread*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TThread*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTThreadImp(void *p);
   static void deleteArray_CppyyLegacycLcLTThreadImp(void *p);
   static void destruct_CppyyLegacycLcLTThreadImp(void *p);
   static void streamer_CppyyLegacycLcLTThreadImp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TThreadImp*)
   {
      ::CppyyLegacy::TThreadImp *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TThreadImp >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TThreadImp", ::CppyyLegacy::TThreadImp::Class_Version(), "TThreadImp.h", 32,
                  typeid(::CppyyLegacy::TThreadImp), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TThreadImp::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TThreadImp) );
      instance.SetDelete(&delete_CppyyLegacycLcLTThreadImp);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTThreadImp);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTThreadImp);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTThreadImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TThreadImp*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TThreadImp*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadImp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTPosixThread(void *p = 0);
   static void *newArray_CppyyLegacycLcLTPosixThread(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTPosixThread(void *p);
   static void deleteArray_CppyyLegacycLcLTPosixThread(void *p);
   static void destruct_CppyyLegacycLcLTPosixThread(void *p);
   static void streamer_CppyyLegacycLcLTPosixThread(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TPosixThread*)
   {
      ::CppyyLegacy::TPosixThread *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TPosixThread >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TPosixThread", ::CppyyLegacy::TPosixThread::Class_Version(), "TPosixThread.h", 36,
                  typeid(::CppyyLegacy::TPosixThread), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TPosixThread::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TPosixThread) );
      instance.SetNew(&new_CppyyLegacycLcLTPosixThread);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTPosixThread);
      instance.SetDelete(&delete_CppyyLegacycLcLTPosixThread);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTPosixThread);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTPosixThread);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTPosixThread);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TPosixThread*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TPosixThread*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThread*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTThreadFactory(void *p);
   static void deleteArray_CppyyLegacycLcLTThreadFactory(void *p);
   static void destruct_CppyyLegacycLcLTThreadFactory(void *p);
   static void streamer_CppyyLegacycLcLTThreadFactory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TThreadFactory*)
   {
      ::CppyyLegacy::TThreadFactory *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TThreadFactory >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TThreadFactory", ::CppyyLegacy::TThreadFactory::Class_Version(), "TThreadFactory.h", 34,
                  typeid(::CppyyLegacy::TThreadFactory), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TThreadFactory::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TThreadFactory) );
      instance.SetDelete(&delete_CppyyLegacycLcLTThreadFactory);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTThreadFactory);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTThreadFactory);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTThreadFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TThreadFactory*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TThreadFactory*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTPosixThreadFactory(void *p = 0);
   static void *newArray_CppyyLegacycLcLTPosixThreadFactory(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTPosixThreadFactory(void *p);
   static void deleteArray_CppyyLegacycLcLTPosixThreadFactory(void *p);
   static void destruct_CppyyLegacycLcLTPosixThreadFactory(void *p);
   static void streamer_CppyyLegacycLcLTPosixThreadFactory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TPosixThreadFactory*)
   {
      ::CppyyLegacy::TPosixThreadFactory *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TPosixThreadFactory >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TPosixThreadFactory", ::CppyyLegacy::TPosixThreadFactory::Class_Version(), "TPosixThreadFactory.h", 32,
                  typeid(::CppyyLegacy::TPosixThreadFactory), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TPosixThreadFactory::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TPosixThreadFactory) );
      instance.SetNew(&new_CppyyLegacycLcLTPosixThreadFactory);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTPosixThreadFactory);
      instance.SetDelete(&delete_CppyyLegacycLcLTPosixThreadFactory);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTPosixThreadFactory);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTPosixThreadFactory);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTPosixThreadFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TPosixThreadFactory*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TPosixThreadFactory*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThreadFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTMutex(void *p = 0);
   static void *newArray_CppyyLegacycLcLTMutex(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTMutex(void *p);
   static void deleteArray_CppyyLegacycLcLTMutex(void *p);
   static void destruct_CppyyLegacycLcLTMutex(void *p);
   static void streamer_CppyyLegacycLcLTMutex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMutex*)
   {
      ::CppyyLegacy::TMutex *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TMutex >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMutex", ::CppyyLegacy::TMutex::Class_Version(), "TMutex.h", 32,
                  typeid(::CppyyLegacy::TMutex), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TMutex::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TMutex) );
      instance.SetNew(&new_CppyyLegacycLcLTMutex);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTMutex);
      instance.SetDelete(&delete_CppyyLegacycLcLTMutex);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMutex);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMutex);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMutex*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMutex*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTSpinMutex_Dictionary();
   static void CppyyLegacycLcLTSpinMutex_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLTSpinMutex(void *p = 0);
   static void *newArray_CppyyLegacycLcLTSpinMutex(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTSpinMutex(void *p);
   static void deleteArray_CppyyLegacycLcLTSpinMutex(void *p);
   static void destruct_CppyyLegacycLcLTSpinMutex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TSpinMutex*)
   {
      ::CppyyLegacy::TSpinMutex *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TSpinMutex));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TSpinMutex", "ROOT/TSpinMutex.hxx", 43,
                  typeid(::CppyyLegacy::TSpinMutex), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTSpinMutex_Dictionary, isa_proxy, 0,
                  sizeof(::CppyyLegacy::TSpinMutex) );
      instance.SetNew(&new_CppyyLegacycLcLTSpinMutex);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTSpinMutex);
      instance.SetDelete(&delete_CppyyLegacycLcLTSpinMutex);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTSpinMutex);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTSpinMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TSpinMutex*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TSpinMutex*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TSpinMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTSpinMutex_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSpinMutex*)0x0)->GetClass();
      CppyyLegacycLcLTSpinMutex_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTSpinMutex_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TConditionImp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TConditionImp::Class_Name()
{
   return "CppyyLegacy::TConditionImp";
}

//______________________________________________________________________________
const char *TConditionImp::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TConditionImp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TConditionImp::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TConditionImp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TConditionImp::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TConditionImp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TConditionImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TConditionImp*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TPosixCondition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixCondition::Class_Name()
{
   return "CppyyLegacy::TPosixCondition";
}

//______________________________________________________________________________
const char *TPosixCondition::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixCondition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixCondition::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixCondition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixCondition::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixCondition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixCondition*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TMutexImp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMutexImp::Class_Name()
{
   return "CppyyLegacy::TMutexImp";
}

//______________________________________________________________________________
const char *TMutexImp::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMutexImp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMutexImp::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMutexImp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMutexImp::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMutexImp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMutexImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMutexImp*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TPosixMutex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixMutex::Class_Name()
{
   return "CppyyLegacy::TPosixMutex";
}

//______________________________________________________________________________
const char *TPosixMutex::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixMutex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixMutex::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixMutex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixMutex::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixMutex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixMutex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixMutex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TCondition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCondition::Class_Name()
{
   return "CppyyLegacy::TCondition";
}

//______________________________________________________________________________
const char *TCondition::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCondition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCondition::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCondition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCondition::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCondition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCondition*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TThread::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TThread::Class_Name()
{
   return "CppyyLegacy::TThread";
}

//______________________________________________________________________________
const char *TThread::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThread*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TThread::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThread*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TThread::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThread*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TThread::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThread*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TThreadImp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TThreadImp::Class_Name()
{
   return "CppyyLegacy::TThreadImp";
}

//______________________________________________________________________________
const char *TThreadImp::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadImp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TThreadImp::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadImp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TThreadImp::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadImp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TThreadImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadImp*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TPosixThread::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixThread::Class_Name()
{
   return "CppyyLegacy::TPosixThread";
}

//______________________________________________________________________________
const char *TPosixThread::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThread*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixThread::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThread*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixThread::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThread*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixThread::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThread*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TThreadFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TThreadFactory::Class_Name()
{
   return "CppyyLegacy::TThreadFactory";
}

//______________________________________________________________________________
const char *TThreadFactory::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TThreadFactory::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TThreadFactory::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TThreadFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TThreadFactory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TPosixThreadFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixThreadFactory::Class_Name()
{
   return "CppyyLegacy::TPosixThreadFactory";
}

//______________________________________________________________________________
const char *TPosixThreadFactory::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThreadFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixThreadFactory::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThreadFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixThreadFactory::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThreadFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixThreadFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPosixThreadFactory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TMutex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMutex::Class_Name()
{
   return "CppyyLegacy::TMutex";
}

//______________________________________________________________________________
const char *TMutex::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMutex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMutex::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMutex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMutex::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMutex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMutex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMutex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
void TConditionImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TConditionImp.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTConditionImp(void *p) {
      delete ((::CppyyLegacy::TConditionImp*)p);
   }
   static void deleteArray_CppyyLegacycLcLTConditionImp(void *p) {
      delete [] ((::CppyyLegacy::TConditionImp*)p);
   }
   static void destruct_CppyyLegacycLcLTConditionImp(void *p) {
      typedef ::CppyyLegacy::TConditionImp current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTConditionImp(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TConditionImp*)obj)->::CppyyLegacy::TConditionImp::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TConditionImp

namespace CppyyLegacy {
//______________________________________________________________________________
void TPosixCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TPosixCondition.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TConditionImp baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTPosixCondition(void *p) {
      delete ((::CppyyLegacy::TPosixCondition*)p);
   }
   static void deleteArray_CppyyLegacycLcLTPosixCondition(void *p) {
      delete [] ((::CppyyLegacy::TPosixCondition*)p);
   }
   static void destruct_CppyyLegacycLcLTPosixCondition(void *p) {
      typedef ::CppyyLegacy::TPosixCondition current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTPosixCondition(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TPosixCondition*)obj)->::CppyyLegacy::TPosixCondition::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TPosixCondition

namespace CppyyLegacy {
//______________________________________________________________________________
void TMutexImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TMutexImp.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMutexImp(void *p) {
      delete ((::CppyyLegacy::TMutexImp*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMutexImp(void *p) {
      delete [] ((::CppyyLegacy::TMutexImp*)p);
   }
   static void destruct_CppyyLegacycLcLTMutexImp(void *p) {
      typedef ::CppyyLegacy::TMutexImp current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTMutexImp(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TMutexImp*)obj)->::CppyyLegacy::TMutexImp::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMutexImp

namespace CppyyLegacy {
//______________________________________________________________________________
void TPosixMutex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TPosixMutex.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TMutexImp baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTPosixMutex(void *p) {
      return  p ? new(p) ::CppyyLegacy::TPosixMutex : new ::CppyyLegacy::TPosixMutex;
   }
   static void *newArray_CppyyLegacycLcLTPosixMutex(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TPosixMutex[nElements] : new ::CppyyLegacy::TPosixMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTPosixMutex(void *p) {
      delete ((::CppyyLegacy::TPosixMutex*)p);
   }
   static void deleteArray_CppyyLegacycLcLTPosixMutex(void *p) {
      delete [] ((::CppyyLegacy::TPosixMutex*)p);
   }
   static void destruct_CppyyLegacycLcLTPosixMutex(void *p) {
      typedef ::CppyyLegacy::TPosixMutex current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTPosixMutex(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TPosixMutex*)obj)->::CppyyLegacy::TPosixMutex::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TPosixMutex

namespace CppyyLegacy {
//______________________________________________________________________________
void TCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TCondition.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTCondition(void *p) {
      return  p ? new(p) ::CppyyLegacy::TCondition : new ::CppyyLegacy::TCondition;
   }
   static void *newArray_CppyyLegacycLcLTCondition(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TCondition[nElements] : new ::CppyyLegacy::TCondition[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTCondition(void *p) {
      delete ((::CppyyLegacy::TCondition*)p);
   }
   static void deleteArray_CppyyLegacycLcLTCondition(void *p) {
      delete [] ((::CppyyLegacy::TCondition*)p);
   }
   static void destruct_CppyyLegacycLcLTCondition(void *p) {
      typedef ::CppyyLegacy::TCondition current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTCondition(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TCondition*)obj)->::CppyyLegacy::TCondition::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TCondition

namespace CppyyLegacy {
//______________________________________________________________________________
void TThread::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TThread.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TNamed baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTThread(void *p) {
      return  p ? new(p) ::CppyyLegacy::TThread : new ::CppyyLegacy::TThread;
   }
   static void *newArray_CppyyLegacycLcLTThread(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TThread[nElements] : new ::CppyyLegacy::TThread[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTThread(void *p) {
      delete ((::CppyyLegacy::TThread*)p);
   }
   static void deleteArray_CppyyLegacycLcLTThread(void *p) {
      delete [] ((::CppyyLegacy::TThread*)p);
   }
   static void destruct_CppyyLegacycLcLTThread(void *p) {
      typedef ::CppyyLegacy::TThread current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTThread(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TThread*)obj)->::CppyyLegacy::TThread::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TThread

namespace CppyyLegacy {
//______________________________________________________________________________
void TThreadImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TThreadImp.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTThreadImp(void *p) {
      delete ((::CppyyLegacy::TThreadImp*)p);
   }
   static void deleteArray_CppyyLegacycLcLTThreadImp(void *p) {
      delete [] ((::CppyyLegacy::TThreadImp*)p);
   }
   static void destruct_CppyyLegacycLcLTThreadImp(void *p) {
      typedef ::CppyyLegacy::TThreadImp current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTThreadImp(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TThreadImp*)obj)->::CppyyLegacy::TThreadImp::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TThreadImp

namespace CppyyLegacy {
//______________________________________________________________________________
void TPosixThread::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TPosixThread.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TThreadImp baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTPosixThread(void *p) {
      return  p ? new(p) ::CppyyLegacy::TPosixThread : new ::CppyyLegacy::TPosixThread;
   }
   static void *newArray_CppyyLegacycLcLTPosixThread(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TPosixThread[nElements] : new ::CppyyLegacy::TPosixThread[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTPosixThread(void *p) {
      delete ((::CppyyLegacy::TPosixThread*)p);
   }
   static void deleteArray_CppyyLegacycLcLTPosixThread(void *p) {
      delete [] ((::CppyyLegacy::TPosixThread*)p);
   }
   static void destruct_CppyyLegacycLcLTPosixThread(void *p) {
      typedef ::CppyyLegacy::TPosixThread current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTPosixThread(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TPosixThread*)obj)->::CppyyLegacy::TPosixThread::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TPosixThread

namespace CppyyLegacy {
//______________________________________________________________________________
void TThreadFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TThreadFactory.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TNamed baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTThreadFactory(void *p) {
      delete ((::CppyyLegacy::TThreadFactory*)p);
   }
   static void deleteArray_CppyyLegacycLcLTThreadFactory(void *p) {
      delete [] ((::CppyyLegacy::TThreadFactory*)p);
   }
   static void destruct_CppyyLegacycLcLTThreadFactory(void *p) {
      typedef ::CppyyLegacy::TThreadFactory current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTThreadFactory(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TThreadFactory*)obj)->::CppyyLegacy::TThreadFactory::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TThreadFactory

namespace CppyyLegacy {
//______________________________________________________________________________
void TPosixThreadFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TPosixThreadFactory.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TThreadFactory baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTPosixThreadFactory(void *p) {
      return  p ? new(p) ::CppyyLegacy::TPosixThreadFactory : new ::CppyyLegacy::TPosixThreadFactory;
   }
   static void *newArray_CppyyLegacycLcLTPosixThreadFactory(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TPosixThreadFactory[nElements] : new ::CppyyLegacy::TPosixThreadFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTPosixThreadFactory(void *p) {
      delete ((::CppyyLegacy::TPosixThreadFactory*)p);
   }
   static void deleteArray_CppyyLegacycLcLTPosixThreadFactory(void *p) {
      delete [] ((::CppyyLegacy::TPosixThreadFactory*)p);
   }
   static void destruct_CppyyLegacycLcLTPosixThreadFactory(void *p) {
      typedef ::CppyyLegacy::TPosixThreadFactory current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTPosixThreadFactory(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TPosixThreadFactory*)obj)->::CppyyLegacy::TPosixThreadFactory::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TPosixThreadFactory

namespace CppyyLegacy {
//______________________________________________________________________________
void TMutex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TMutex.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TVirtualMutex baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTMutex(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TMutex : new ::CppyyLegacy::TMutex;
   }
   static void *newArray_CppyyLegacycLcLTMutex(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TMutex[nElements] : new ::CppyyLegacy::TMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMutex(void *p) {
      delete ((::CppyyLegacy::TMutex*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMutex(void *p) {
      delete [] ((::CppyyLegacy::TMutex*)p);
   }
   static void destruct_CppyyLegacycLcLTMutex(void *p) {
      typedef ::CppyyLegacy::TMutex current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTMutex(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TMutex*)obj)->::CppyyLegacy::TMutex::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMutex

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTSpinMutex(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TSpinMutex : new ::CppyyLegacy::TSpinMutex;
   }
   static void *newArray_CppyyLegacycLcLTSpinMutex(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TSpinMutex[nElements] : new ::CppyyLegacy::TSpinMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTSpinMutex(void *p) {
      delete ((::CppyyLegacy::TSpinMutex*)p);
   }
   static void deleteArray_CppyyLegacycLcLTSpinMutex(void *p) {
      delete [] ((::CppyyLegacy::TSpinMutex*)p);
   }
   static void destruct_CppyyLegacycLcLTSpinMutex(void *p) {
      typedef ::CppyyLegacy::TSpinMutex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TSpinMutex

namespace {
  void TriggerDictionaryInitialization_libThreadLegacy_Impl() {
    static const char* headers[] = {
"TPosixCondition.h",
"TPosixMutex.h",
"TPosixThread.h",
"TPosixThreadFactory.h",
"PosixThreadInc.h",
"TCondition.h",
"TConditionImp.h",
"ThreadLocalStorage.h",
"TMutex.h",
"TMutexImp.h",
"TThreadFactory.h",
"TThread.h",
"TThreadImp.h",
"ROOT/TReentrantRWLock.hxx",
"ROOT/TSpinMutex.hxx",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = nullptr;
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      ::CppyyLegacy::TROOT::RegisterModule("libThreadLegacy",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libThreadLegacy_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libThreadLegacy_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libThreadLegacy() {
  TriggerDictionaryInitialization_libThreadLegacy_Impl();
}

