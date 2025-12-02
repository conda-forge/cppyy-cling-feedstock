// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RIOLegacy
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
#include "TBufferFile.h"
#include "TBufferIO.h"
#include "TCollectionProxyFactory.h"
#include "TContainerConverters.h"
#include "TEmulatedMapProxy.h"
#include "TEmulatedCollectionProxy.h"
#include "TDirectoryFile.h"
#include "TFree.h"
#include "TFile.h"
#include "TGenCollectionStreamer.h"
#include "TGenCollectionProxy.h"
#include "TKey.h"
#include "TMemFile.h"
#include "TStreamerInfoActions.h"
#include "TVirtualCollectionIterators.h"
#include "TStreamerInfo.h"
#include "TVirtualArray.h"

// Header files passed via #pragma extra_include

   namespace CppyyLegacyX {
      using namespace CppyyLegacy;
      inline TGenericClassInfo *GenerateInitInstance();
      static TClass *CppyyLegacy_Dictionary();

      // Function generating the singleton type initializer
      inline TGenericClassInfo *GenerateInitInstance()
      {
         static TGenericClassInfo 
            instance("CppyyLegacy", 0 /*version*/, "RtypesCore.h", 28,
                     Internal::DefineBehavior((void*)0,(void*)0),
                     &CppyyLegacy_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *CppyyLegacy_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }

namespace CppyyLegacy {
   namespace TStreamerInfoActions {
   namespace CppyyLegacyX {
      using namespace CppyyLegacy;
      inline TGenericClassInfo *GenerateInitInstance();
      static TClass *CppyyLegacycLcLTStreamerInfoActions_Dictionary();

      // Function generating the singleton type initializer
      inline TGenericClassInfo *GenerateInitInstance()
      {
         static TGenericClassInfo 
            instance("CppyyLegacy::TStreamerInfoActions", 0 /*version*/, "TBuffer.h", 38,
                     Internal::DefineBehavior((void*)0,(void*)0),
                     &CppyyLegacycLcLTStreamerInfoActions_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *CppyyLegacycLcLTStreamerInfoActions_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTBufferIO(void *p);
   static void deleteArray_CppyyLegacycLcLTBufferIO(void *p);
   static void destruct_CppyyLegacycLcLTBufferIO(void *p);
   static void streamer_CppyyLegacycLcLTBufferIO(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TBufferIO*)
   {
      ::CppyyLegacy::TBufferIO *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TBufferIO >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TBufferIO", ::CppyyLegacy::TBufferIO::Class_Version(), "TBufferIO.h", 31,
                  typeid(::CppyyLegacy::TBufferIO), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TBufferIO::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TBufferIO) );
      instance.SetDelete(&delete_CppyyLegacycLcLTBufferIO);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTBufferIO);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTBufferIO);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTBufferIO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TBufferIO*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TBufferIO*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferIO*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTBufferFile(void *p);
   static void deleteArray_CppyyLegacycLcLTBufferFile(void *p);
   static void destruct_CppyyLegacycLcLTBufferFile(void *p);
   static void streamer_CppyyLegacycLcLTBufferFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TBufferFile*)
   {
      ::CppyyLegacy::TBufferFile *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TBufferFile >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TBufferFile", ::CppyyLegacy::TBufferFile::Class_Version(), "TBufferFile.h", 48,
                  typeid(::CppyyLegacy::TBufferFile), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TBufferFile::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TBufferFile) );
      instance.SetDelete(&delete_CppyyLegacycLcLTBufferFile);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTBufferFile);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTBufferFile);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTBufferFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TBufferFile*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TBufferFile*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTGenCollectionProxy_Dictionary();
   static void CppyyLegacycLcLTGenCollectionProxy_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTGenCollectionProxy(void *p);
   static void deleteArray_CppyyLegacycLcLTGenCollectionProxy(void *p);
   static void destruct_CppyyLegacycLcLTGenCollectionProxy(void *p);
   static void streamer_CppyyLegacycLcLTGenCollectionProxy(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TGenCollectionProxy*)
   {
      ::CppyyLegacy::TGenCollectionProxy *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TGenCollectionProxy));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TGenCollectionProxy", "TGenCollectionProxy.h", 30,
                  typeid(::CppyyLegacy::TGenCollectionProxy), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTGenCollectionProxy_Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TGenCollectionProxy) );
      instance.SetDelete(&delete_CppyyLegacycLcLTGenCollectionProxy);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTGenCollectionProxy);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTGenCollectionProxy);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTGenCollectionProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TGenCollectionProxy*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TGenCollectionProxy*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TGenCollectionProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTGenCollectionProxy_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TGenCollectionProxy*)0x0)->GetClass();
      CppyyLegacycLcLTGenCollectionProxy_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTGenCollectionProxy_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTGenCollectionProxycLcLValue_Dictionary();
   static void CppyyLegacycLcLTGenCollectionProxycLcLValue_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTGenCollectionProxycLcLValue(void *p);
   static void deleteArray_CppyyLegacycLcLTGenCollectionProxycLcLValue(void *p);
   static void destruct_CppyyLegacycLcLTGenCollectionProxycLcLValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TGenCollectionProxy::Value*)
   {
      ::CppyyLegacy::TGenCollectionProxy::Value *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TGenCollectionProxy::Value));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TGenCollectionProxy::Value", "TGenCollectionProxy.h", 61,
                  typeid(::CppyyLegacy::TGenCollectionProxy::Value), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTGenCollectionProxycLcLValue_Dictionary, isa_proxy, 1,
                  sizeof(::CppyyLegacy::TGenCollectionProxy::Value) );
      instance.SetDelete(&delete_CppyyLegacycLcLTGenCollectionProxycLcLValue);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTGenCollectionProxycLcLValue);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTGenCollectionProxycLcLValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TGenCollectionProxy::Value*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TGenCollectionProxy::Value*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TGenCollectionProxy::Value*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTGenCollectionProxycLcLValue_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TGenCollectionProxy::Value*)0x0)->GetClass();
      CppyyLegacycLcLTGenCollectionProxycLcLValue_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTGenCollectionProxycLcLValue_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTGenCollectionProxycLcLMethod_Dictionary();
   static void CppyyLegacycLcLTGenCollectionProxycLcLMethod_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLTGenCollectionProxycLcLMethod(void *p = 0);
   static void *newArray_CppyyLegacycLcLTGenCollectionProxycLcLMethod(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTGenCollectionProxycLcLMethod(void *p);
   static void deleteArray_CppyyLegacycLcLTGenCollectionProxycLcLMethod(void *p);
   static void destruct_CppyyLegacycLcLTGenCollectionProxycLcLMethod(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TGenCollectionProxy::Method*)
   {
      ::CppyyLegacy::TGenCollectionProxy::Method *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TGenCollectionProxy::Method));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TGenCollectionProxy::Method", "TGenCollectionProxy.h", 194,
                  typeid(::CppyyLegacy::TGenCollectionProxy::Method), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTGenCollectionProxycLcLMethod_Dictionary, isa_proxy, 1,
                  sizeof(::CppyyLegacy::TGenCollectionProxy::Method) );
      instance.SetNew(&new_CppyyLegacycLcLTGenCollectionProxycLcLMethod);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTGenCollectionProxycLcLMethod);
      instance.SetDelete(&delete_CppyyLegacycLcLTGenCollectionProxycLcLMethod);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTGenCollectionProxycLcLMethod);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTGenCollectionProxycLcLMethod);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TGenCollectionProxy::Method*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TGenCollectionProxy::Method*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TGenCollectionProxy::Method*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTGenCollectionProxycLcLMethod_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TGenCollectionProxy::Method*)0x0)->GetClass();
      CppyyLegacycLcLTGenCollectionProxycLcLMethod_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTGenCollectionProxycLcLMethod_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTCollectionProxyFactory_Dictionary();
   static void CppyyLegacycLcLTCollectionProxyFactory_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLTCollectionProxyFactory(void *p = 0);
   static void *newArray_CppyyLegacycLcLTCollectionProxyFactory(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTCollectionProxyFactory(void *p);
   static void deleteArray_CppyyLegacycLcLTCollectionProxyFactory(void *p);
   static void destruct_CppyyLegacycLcLTCollectionProxyFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TCollectionProxyFactory*)
   {
      ::CppyyLegacy::TCollectionProxyFactory *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TCollectionProxyFactory));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TCollectionProxyFactory", "TCollectionProxyFactory.h", 65,
                  typeid(::CppyyLegacy::TCollectionProxyFactory), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTCollectionProxyFactory_Dictionary, isa_proxy, 1,
                  sizeof(::CppyyLegacy::TCollectionProxyFactory) );
      instance.SetNew(&new_CppyyLegacycLcLTCollectionProxyFactory);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTCollectionProxyFactory);
      instance.SetDelete(&delete_CppyyLegacycLcLTCollectionProxyFactory);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTCollectionProxyFactory);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTCollectionProxyFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TCollectionProxyFactory*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TCollectionProxyFactory*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TCollectionProxyFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTCollectionProxyFactory_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCollectionProxyFactory*)0x0)->GetClass();
      CppyyLegacycLcLTCollectionProxyFactory_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTCollectionProxyFactory_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTCollectionStreamer_Dictionary();
   static void CppyyLegacycLcLTCollectionStreamer_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLTCollectionStreamer(void *p = 0);
   static void *newArray_CppyyLegacycLcLTCollectionStreamer(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTCollectionStreamer(void *p);
   static void deleteArray_CppyyLegacycLcLTCollectionStreamer(void *p);
   static void destruct_CppyyLegacycLcLTCollectionStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TCollectionStreamer*)
   {
      ::CppyyLegacy::TCollectionStreamer *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TCollectionStreamer));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TCollectionStreamer", "TCollectionProxyFactory.h", 125,
                  typeid(::CppyyLegacy::TCollectionStreamer), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTCollectionStreamer_Dictionary, isa_proxy, 1,
                  sizeof(::CppyyLegacy::TCollectionStreamer) );
      instance.SetNew(&new_CppyyLegacycLcLTCollectionStreamer);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTCollectionStreamer);
      instance.SetDelete(&delete_CppyyLegacycLcLTCollectionStreamer);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTCollectionStreamer);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTCollectionStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TCollectionStreamer*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TCollectionStreamer*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TCollectionStreamer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTCollectionStreamer_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCollectionStreamer*)0x0)->GetClass();
      CppyyLegacycLcLTCollectionStreamer_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTCollectionStreamer_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTCollectionClassStreamer_Dictionary();
   static void CppyyLegacycLcLTCollectionClassStreamer_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLTCollectionClassStreamer(void *p = 0);
   static void *newArray_CppyyLegacycLcLTCollectionClassStreamer(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTCollectionClassStreamer(void *p);
   static void deleteArray_CppyyLegacycLcLTCollectionClassStreamer(void *p);
   static void destruct_CppyyLegacycLcLTCollectionClassStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TCollectionClassStreamer*)
   {
      ::CppyyLegacy::TCollectionClassStreamer *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TCollectionClassStreamer));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TCollectionClassStreamer", "TCollectionProxyFactory.h", 157,
                  typeid(::CppyyLegacy::TCollectionClassStreamer), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTCollectionClassStreamer_Dictionary, isa_proxy, 1,
                  sizeof(::CppyyLegacy::TCollectionClassStreamer) );
      instance.SetNew(&new_CppyyLegacycLcLTCollectionClassStreamer);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTCollectionClassStreamer);
      instance.SetDelete(&delete_CppyyLegacycLcLTCollectionClassStreamer);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTCollectionClassStreamer);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTCollectionClassStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TCollectionClassStreamer*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TCollectionClassStreamer*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TCollectionClassStreamer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTCollectionClassStreamer_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCollectionClassStreamer*)0x0)->GetClass();
      CppyyLegacycLcLTCollectionClassStreamer_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTCollectionClassStreamer_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTCollectionMemberStreamer_Dictionary();
   static void CppyyLegacycLcLTCollectionMemberStreamer_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLTCollectionMemberStreamer(void *p = 0);
   static void *newArray_CppyyLegacycLcLTCollectionMemberStreamer(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTCollectionMemberStreamer(void *p);
   static void deleteArray_CppyyLegacycLcLTCollectionMemberStreamer(void *p);
   static void destruct_CppyyLegacycLcLTCollectionMemberStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TCollectionMemberStreamer*)
   {
      ::CppyyLegacy::TCollectionMemberStreamer *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TCollectionMemberStreamer));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TCollectionMemberStreamer", "TCollectionProxyFactory.h", 205,
                  typeid(::CppyyLegacy::TCollectionMemberStreamer), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTCollectionMemberStreamer_Dictionary, isa_proxy, 1,
                  sizeof(::CppyyLegacy::TCollectionMemberStreamer) );
      instance.SetNew(&new_CppyyLegacycLcLTCollectionMemberStreamer);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTCollectionMemberStreamer);
      instance.SetDelete(&delete_CppyyLegacycLcLTCollectionMemberStreamer);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTCollectionMemberStreamer);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTCollectionMemberStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TCollectionMemberStreamer*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TCollectionMemberStreamer*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TCollectionMemberStreamer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTCollectionMemberStreamer_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCollectionMemberStreamer*)0x0)->GetClass();
      CppyyLegacycLcLTCollectionMemberStreamer_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTCollectionMemberStreamer_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTEmulatedCollectionProxy_Dictionary();
   static void CppyyLegacycLcLTEmulatedCollectionProxy_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTEmulatedCollectionProxy(void *p);
   static void deleteArray_CppyyLegacycLcLTEmulatedCollectionProxy(void *p);
   static void destruct_CppyyLegacycLcLTEmulatedCollectionProxy(void *p);
   static void streamer_CppyyLegacycLcLTEmulatedCollectionProxy(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TEmulatedCollectionProxy*)
   {
      ::CppyyLegacy::TEmulatedCollectionProxy *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TEmulatedCollectionProxy));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TEmulatedCollectionProxy", "TEmulatedCollectionProxy.h", 20,
                  typeid(::CppyyLegacy::TEmulatedCollectionProxy), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTEmulatedCollectionProxy_Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TEmulatedCollectionProxy) );
      instance.SetDelete(&delete_CppyyLegacycLcLTEmulatedCollectionProxy);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTEmulatedCollectionProxy);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTEmulatedCollectionProxy);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTEmulatedCollectionProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TEmulatedCollectionProxy*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TEmulatedCollectionProxy*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TEmulatedCollectionProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTEmulatedCollectionProxy_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEmulatedCollectionProxy*)0x0)->GetClass();
      CppyyLegacycLcLTEmulatedCollectionProxy_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTEmulatedCollectionProxy_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTEmulatedMapProxy_Dictionary();
   static void CppyyLegacycLcLTEmulatedMapProxy_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTEmulatedMapProxy(void *p);
   static void deleteArray_CppyyLegacycLcLTEmulatedMapProxy(void *p);
   static void destruct_CppyyLegacycLcLTEmulatedMapProxy(void *p);
   static void streamer_CppyyLegacycLcLTEmulatedMapProxy(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TEmulatedMapProxy*)
   {
      ::CppyyLegacy::TEmulatedMapProxy *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TEmulatedMapProxy));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TEmulatedMapProxy", "TEmulatedMapProxy.h", 20,
                  typeid(::CppyyLegacy::TEmulatedMapProxy), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTEmulatedMapProxy_Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TEmulatedMapProxy) );
      instance.SetDelete(&delete_CppyyLegacycLcLTEmulatedMapProxy);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTEmulatedMapProxy);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTEmulatedMapProxy);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTEmulatedMapProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TEmulatedMapProxy*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TEmulatedMapProxy*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TEmulatedMapProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTEmulatedMapProxy_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEmulatedMapProxy*)0x0)->GetClass();
      CppyyLegacycLcLTEmulatedMapProxy_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTEmulatedMapProxy_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTDirectoryFile(void *p = 0);
   static void *newArray_CppyyLegacycLcLTDirectoryFile(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTDirectoryFile(void *p);
   static void deleteArray_CppyyLegacycLcLTDirectoryFile(void *p);
   static void destruct_CppyyLegacycLcLTDirectoryFile(void *p);
   static void streamer_CppyyLegacycLcLTDirectoryFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TDirectoryFile*)
   {
      ::CppyyLegacy::TDirectoryFile *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TDirectoryFile >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TDirectoryFile", ::CppyyLegacy::TDirectoryFile::Class_Version(), "TDirectoryFile.h", 33,
                  typeid(::CppyyLegacy::TDirectoryFile), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TDirectoryFile::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TDirectoryFile) );
      instance.SetNew(&new_CppyyLegacycLcLTDirectoryFile);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTDirectoryFile);
      instance.SetDelete(&delete_CppyyLegacycLcLTDirectoryFile);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTDirectoryFile);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTDirectoryFile);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTDirectoryFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TDirectoryFile*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TDirectoryFile*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectoryFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTFree(void *p = 0);
   static void *newArray_CppyyLegacycLcLTFree(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTFree(void *p);
   static void deleteArray_CppyyLegacycLcLTFree(void *p);
   static void destruct_CppyyLegacycLcLTFree(void *p);
   static void streamer_CppyyLegacycLcLTFree(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TFree*)
   {
      ::CppyyLegacy::TFree *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TFree >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TFree", ::CppyyLegacy::TFree::Class_Version(), "TFree.h", 28,
                  typeid(::CppyyLegacy::TFree), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TFree::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TFree) );
      instance.SetNew(&new_CppyyLegacycLcLTFree);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTFree);
      instance.SetDelete(&delete_CppyyLegacycLcLTFree);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTFree);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTFree);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTFree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TFree*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TFree*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TFree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTFile(void *p = 0);
   static void *newArray_CppyyLegacycLcLTFile(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTFile(void *p);
   static void deleteArray_CppyyLegacycLcLTFile(void *p);
   static void destruct_CppyyLegacycLcLTFile(void *p);
   static void streamer_CppyyLegacycLcLTFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TFile*)
   {
      ::CppyyLegacy::TFile *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TFile >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TFile", ::CppyyLegacy::TFile::Class_Version(), "TFile.h", 50,
                  typeid(::CppyyLegacy::TFile), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TFile::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TFile) );
      instance.SetNew(&new_CppyyLegacycLcLTFile);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTFile);
      instance.SetDelete(&delete_CppyyLegacycLcLTFile);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTFile);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTFile);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TFile*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TFile*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTKey(void *p = 0);
   static void *newArray_CppyyLegacycLcLTKey(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTKey(void *p);
   static void deleteArray_CppyyLegacycLcLTKey(void *p);
   static void destruct_CppyyLegacycLcLTKey(void *p);
   static void streamer_CppyyLegacycLcLTKey(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TKey*)
   {
      ::CppyyLegacy::TKey *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TKey >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TKey", ::CppyyLegacy::TKey::Class_Version(), "TKey.h", 26,
                  typeid(::CppyyLegacy::TKey), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TKey::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TKey) );
      instance.SetNew(&new_CppyyLegacycLcLTKey);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTKey);
      instance.SetDelete(&delete_CppyyLegacycLcLTKey);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTKey);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTKey);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTKey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TKey*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TKey*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TKey*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTMemFile(void *p);
   static void deleteArray_CppyyLegacycLcLTMemFile(void *p);
   static void destruct_CppyyLegacycLcLTMemFile(void *p);
   static void streamer_CppyyLegacycLcLTMemFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMemFile*)
   {
      ::CppyyLegacy::TMemFile *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TMemFile >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMemFile", ::CppyyLegacy::TMemFile::Class_Version(), "TMemFile.h", 22,
                  typeid(::CppyyLegacy::TMemFile), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TMemFile::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TMemFile) );
      instance.SetDelete(&delete_CppyyLegacycLcLTMemFile);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMemFile);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMemFile);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTMemFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMemFile*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMemFile*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMemFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerInfo(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerInfo(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerInfo(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerInfo(void *p);
   static void destruct_CppyyLegacycLcLTStreamerInfo(void *p);
   static void streamer_CppyyLegacycLcLTStreamerInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerInfo*)
   {
      ::CppyyLegacy::TStreamerInfo *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerInfo >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerInfo", ::CppyyLegacy::TStreamerInfo::Class_Version(), "TStreamerInfo.h", 41,
                  typeid(::CppyyLegacy::TStreamerInfo), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerInfo::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerInfo) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerInfo);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerInfo);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerInfo);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerInfo);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerInfo);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerInfo*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerInfo*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTVirtualArray_Dictionary();
   static void CppyyLegacycLcLTVirtualArray_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTVirtualArray(void *p);
   static void deleteArray_CppyyLegacycLcLTVirtualArray(void *p);
   static void destruct_CppyyLegacycLcLTVirtualArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TVirtualArray*)
   {
      ::CppyyLegacy::TVirtualArray *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TVirtualArray));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TVirtualArray", 0, "TVirtualArray.h", 27,
                  typeid(::CppyyLegacy::TVirtualArray), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTVirtualArray_Dictionary, isa_proxy, 9,
                  sizeof(::CppyyLegacy::TVirtualArray) );
      instance.SetDelete(&delete_CppyyLegacycLcLTVirtualArray);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTVirtualArray);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTVirtualArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TVirtualArray*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TVirtualArray*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTVirtualArray_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualArray*)0x0)->GetClass();
      CppyyLegacycLcLTVirtualArray_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTVirtualArray_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration_Dictionary();
   static void CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration(void *p);
   static void destruct_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerInfoActions::TConfiguration*)
   {
      ::CppyyLegacy::TStreamerInfoActions::TConfiguration *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TStreamerInfoActions::TConfiguration));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerInfoActions::TConfiguration", "TStreamerInfoActions.h", 33,
                  typeid(::CppyyLegacy::TStreamerInfoActions::TConfiguration), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration_Dictionary, isa_proxy, 1,
                  sizeof(::CppyyLegacy::TStreamerInfoActions::TConfiguration) );
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerInfoActions::TConfiguration*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerInfoActions::TConfiguration*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TConfiguration*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TConfiguration*)0x0)->GetClass();
      CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(void *p);
   static void destruct_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)
   {
      ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerInfoActions::TConfiguredAction", ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction::Class_Version(), "TStreamerInfoActions.h", 73,
                  typeid(::CppyyLegacy::TStreamerInfoActions::TConfiguredAction), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerInfoActions::TConfiguredAction::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TStreamerInfoActions::TConfiguredAction) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTStreamerInfoActionscLcLTActionSequence(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerInfoActionscLcLTActionSequence(void *p);
   static void destruct_CppyyLegacycLcLTStreamerInfoActionscLcLTActionSequence(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerInfoActions::TActionSequence*)
   {
      ::CppyyLegacy::TStreamerInfoActions::TActionSequence *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerInfoActions::TActionSequence >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerInfoActions::TActionSequence", ::CppyyLegacy::TStreamerInfoActions::TActionSequence::Class_Version(), "TStreamerInfoActions.h", 170,
                  typeid(::CppyyLegacy::TStreamerInfoActions::TActionSequence), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerInfoActions::TActionSequence::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TStreamerInfoActions::TActionSequence) );
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerInfoActionscLcLTActionSequence);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerInfoActionscLcLTActionSequence);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerInfoActionscLcLTActionSequence);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerInfoActions::TActionSequence*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerInfoActions::TActionSequence*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TActionSequence*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TBufferIO::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferIO::Class_Name()
{
   return "CppyyLegacy::TBufferIO";
}

//______________________________________________________________________________
const char *TBufferIO::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferIO*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferIO::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferIO*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferIO::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferIO*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferIO::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferIO*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TBufferFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferFile::Class_Name()
{
   return "CppyyLegacy::TBufferFile";
}

//______________________________________________________________________________
const char *TBufferFile::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferFile::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferFile::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBufferFile*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TDirectoryFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDirectoryFile::Class_Name()
{
   return "CppyyLegacy::TDirectoryFile";
}

//______________________________________________________________________________
const char *TDirectoryFile::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectoryFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDirectoryFile::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectoryFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDirectoryFile::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectoryFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDirectoryFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectoryFile*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TFree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFree::Class_Name()
{
   return "CppyyLegacy::TFree";
}

//______________________________________________________________________________
const char *TFree::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFree::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFree::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFree*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFile::Class_Name()
{
   return "CppyyLegacy::TFile";
}

//______________________________________________________________________________
const char *TFile::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFile::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFile::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFile*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TKey::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TKey::Class_Name()
{
   return "CppyyLegacy::TKey";
}

//______________________________________________________________________________
const char *TKey::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TKey*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TKey::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TKey*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKey::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TKey*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKey::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TKey*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TMemFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMemFile::Class_Name()
{
   return "CppyyLegacy::TMemFile";
}

//______________________________________________________________________________
const char *TMemFile::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMemFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMemFile::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMemFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMemFile::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMemFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMemFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMemFile*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerInfo::Class_Name()
{
   return "CppyyLegacy::TStreamerInfo";
}

//______________________________________________________________________________
const char *TStreamerInfo::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerInfo::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerInfo::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   namespace TStreamerInfoActions {
//______________________________________________________________________________
atomic_TClass_ptr TConfiguredAction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TConfiguredAction::Class_Name()
{
   return "CppyyLegacy::TStreamerInfoActions::TConfiguredAction";
}

//______________________________________________________________________________
const char *TConfiguredAction::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TConfiguredAction::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TConfiguredAction::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TConfiguredAction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy::TStreamerInfoActions
} // namespace CppyyLegacy::TStreamerInfoActions
namespace CppyyLegacy {
   namespace TStreamerInfoActions {
//______________________________________________________________________________
atomic_TClass_ptr TActionSequence::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TActionSequence::Class_Name()
{
   return "CppyyLegacy::TStreamerInfoActions::TActionSequence";
}

//______________________________________________________________________________
const char *TActionSequence::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TActionSequence*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TActionSequence::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TActionSequence*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActionSequence::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TActionSequence*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActionSequence::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerInfoActions::TActionSequence*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy::TStreamerInfoActions
} // namespace CppyyLegacy::TStreamerInfoActions
namespace CppyyLegacy {
//______________________________________________________________________________
void TBufferIO::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TBufferIO.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TBuffer baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTBufferIO(void *p) {
      delete ((::CppyyLegacy::TBufferIO*)p);
   }
   static void deleteArray_CppyyLegacycLcLTBufferIO(void *p) {
      delete [] ((::CppyyLegacy::TBufferIO*)p);
   }
   static void destruct_CppyyLegacycLcLTBufferIO(void *p) {
      typedef ::CppyyLegacy::TBufferIO current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTBufferIO(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TBufferIO*)obj)->::CppyyLegacy::TBufferIO::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TBufferIO

namespace CppyyLegacy {
//______________________________________________________________________________
void TBufferFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TBufferFile.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TBufferIO baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTBufferFile(void *p) {
      delete ((::CppyyLegacy::TBufferFile*)p);
   }
   static void deleteArray_CppyyLegacycLcLTBufferFile(void *p) {
      delete [] ((::CppyyLegacy::TBufferFile*)p);
   }
   static void destruct_CppyyLegacycLcLTBufferFile(void *p) {
      typedef ::CppyyLegacy::TBufferFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTBufferFile(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TBufferFile*)obj)->::CppyyLegacy::TBufferFile::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TBufferFile

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTGenCollectionProxy(void *p) {
      delete ((::CppyyLegacy::TGenCollectionProxy*)p);
   }
   static void deleteArray_CppyyLegacycLcLTGenCollectionProxy(void *p) {
      delete [] ((::CppyyLegacy::TGenCollectionProxy*)p);
   }
   static void destruct_CppyyLegacycLcLTGenCollectionProxy(void *p) {
      typedef ::CppyyLegacy::TGenCollectionProxy current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTGenCollectionProxy(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TGenCollectionProxy*)obj)->::CppyyLegacy::TGenCollectionProxy::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TGenCollectionProxy

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTGenCollectionProxycLcLValue(void *p) {
      delete ((::CppyyLegacy::TGenCollectionProxy::Value*)p);
   }
   static void deleteArray_CppyyLegacycLcLTGenCollectionProxycLcLValue(void *p) {
      delete [] ((::CppyyLegacy::TGenCollectionProxy::Value*)p);
   }
   static void destruct_CppyyLegacycLcLTGenCollectionProxycLcLValue(void *p) {
      typedef ::CppyyLegacy::TGenCollectionProxy::Value current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TGenCollectionProxy::Value

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTGenCollectionProxycLcLMethod(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TGenCollectionProxy::Method : new ::CppyyLegacy::TGenCollectionProxy::Method;
   }
   static void *newArray_CppyyLegacycLcLTGenCollectionProxycLcLMethod(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TGenCollectionProxy::Method[nElements] : new ::CppyyLegacy::TGenCollectionProxy::Method[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTGenCollectionProxycLcLMethod(void *p) {
      delete ((::CppyyLegacy::TGenCollectionProxy::Method*)p);
   }
   static void deleteArray_CppyyLegacycLcLTGenCollectionProxycLcLMethod(void *p) {
      delete [] ((::CppyyLegacy::TGenCollectionProxy::Method*)p);
   }
   static void destruct_CppyyLegacycLcLTGenCollectionProxycLcLMethod(void *p) {
      typedef ::CppyyLegacy::TGenCollectionProxy::Method current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TGenCollectionProxy::Method

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTCollectionProxyFactory(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TCollectionProxyFactory : new ::CppyyLegacy::TCollectionProxyFactory;
   }
   static void *newArray_CppyyLegacycLcLTCollectionProxyFactory(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TCollectionProxyFactory[nElements] : new ::CppyyLegacy::TCollectionProxyFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTCollectionProxyFactory(void *p) {
      delete ((::CppyyLegacy::TCollectionProxyFactory*)p);
   }
   static void deleteArray_CppyyLegacycLcLTCollectionProxyFactory(void *p) {
      delete [] ((::CppyyLegacy::TCollectionProxyFactory*)p);
   }
   static void destruct_CppyyLegacycLcLTCollectionProxyFactory(void *p) {
      typedef ::CppyyLegacy::TCollectionProxyFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TCollectionProxyFactory

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTCollectionStreamer(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TCollectionStreamer : new ::CppyyLegacy::TCollectionStreamer;
   }
   static void *newArray_CppyyLegacycLcLTCollectionStreamer(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TCollectionStreamer[nElements] : new ::CppyyLegacy::TCollectionStreamer[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTCollectionStreamer(void *p) {
      delete ((::CppyyLegacy::TCollectionStreamer*)p);
   }
   static void deleteArray_CppyyLegacycLcLTCollectionStreamer(void *p) {
      delete [] ((::CppyyLegacy::TCollectionStreamer*)p);
   }
   static void destruct_CppyyLegacycLcLTCollectionStreamer(void *p) {
      typedef ::CppyyLegacy::TCollectionStreamer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TCollectionStreamer

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTCollectionClassStreamer(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TCollectionClassStreamer : new ::CppyyLegacy::TCollectionClassStreamer;
   }
   static void *newArray_CppyyLegacycLcLTCollectionClassStreamer(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TCollectionClassStreamer[nElements] : new ::CppyyLegacy::TCollectionClassStreamer[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTCollectionClassStreamer(void *p) {
      delete ((::CppyyLegacy::TCollectionClassStreamer*)p);
   }
   static void deleteArray_CppyyLegacycLcLTCollectionClassStreamer(void *p) {
      delete [] ((::CppyyLegacy::TCollectionClassStreamer*)p);
   }
   static void destruct_CppyyLegacycLcLTCollectionClassStreamer(void *p) {
      typedef ::CppyyLegacy::TCollectionClassStreamer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TCollectionClassStreamer

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTCollectionMemberStreamer(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TCollectionMemberStreamer : new ::CppyyLegacy::TCollectionMemberStreamer;
   }
   static void *newArray_CppyyLegacycLcLTCollectionMemberStreamer(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TCollectionMemberStreamer[nElements] : new ::CppyyLegacy::TCollectionMemberStreamer[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTCollectionMemberStreamer(void *p) {
      delete ((::CppyyLegacy::TCollectionMemberStreamer*)p);
   }
   static void deleteArray_CppyyLegacycLcLTCollectionMemberStreamer(void *p) {
      delete [] ((::CppyyLegacy::TCollectionMemberStreamer*)p);
   }
   static void destruct_CppyyLegacycLcLTCollectionMemberStreamer(void *p) {
      typedef ::CppyyLegacy::TCollectionMemberStreamer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TCollectionMemberStreamer

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTEmulatedCollectionProxy(void *p) {
      delete ((::CppyyLegacy::TEmulatedCollectionProxy*)p);
   }
   static void deleteArray_CppyyLegacycLcLTEmulatedCollectionProxy(void *p) {
      delete [] ((::CppyyLegacy::TEmulatedCollectionProxy*)p);
   }
   static void destruct_CppyyLegacycLcLTEmulatedCollectionProxy(void *p) {
      typedef ::CppyyLegacy::TEmulatedCollectionProxy current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTEmulatedCollectionProxy(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TEmulatedCollectionProxy*)obj)->::CppyyLegacy::TEmulatedCollectionProxy::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TEmulatedCollectionProxy

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTEmulatedMapProxy(void *p) {
      delete ((::CppyyLegacy::TEmulatedMapProxy*)p);
   }
   static void deleteArray_CppyyLegacycLcLTEmulatedMapProxy(void *p) {
      delete [] ((::CppyyLegacy::TEmulatedMapProxy*)p);
   }
   static void destruct_CppyyLegacycLcLTEmulatedMapProxy(void *p) {
      typedef ::CppyyLegacy::TEmulatedMapProxy current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTEmulatedMapProxy(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TEmulatedMapProxy*)obj)->::CppyyLegacy::TEmulatedMapProxy::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TEmulatedMapProxy

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTDirectoryFile(void *p) {
      return  p ? new(p) ::CppyyLegacy::TDirectoryFile : new ::CppyyLegacy::TDirectoryFile;
   }
   static void *newArray_CppyyLegacycLcLTDirectoryFile(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TDirectoryFile[nElements] : new ::CppyyLegacy::TDirectoryFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTDirectoryFile(void *p) {
      delete ((::CppyyLegacy::TDirectoryFile*)p);
   }
   static void deleteArray_CppyyLegacycLcLTDirectoryFile(void *p) {
      delete [] ((::CppyyLegacy::TDirectoryFile*)p);
   }
   static void destruct_CppyyLegacycLcLTDirectoryFile(void *p) {
      typedef ::CppyyLegacy::TDirectoryFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTDirectoryFile(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TDirectoryFile*)obj)->::CppyyLegacy::TDirectoryFile::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TDirectoryFile

namespace CppyyLegacy {
//______________________________________________________________________________
void TFree::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TFree.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TFree thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef ::CppyyLegacy::TObject baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> fFirst;
      R__b >> fLast;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef ::CppyyLegacy::TObject baseClass0;
      baseClass0::Streamer(R__b);
      R__b << fFirst;
      R__b << fLast;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTFree(void *p) {
      return  p ? new(p) ::CppyyLegacy::TFree : new ::CppyyLegacy::TFree;
   }
   static void *newArray_CppyyLegacycLcLTFree(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TFree[nElements] : new ::CppyyLegacy::TFree[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTFree(void *p) {
      delete ((::CppyyLegacy::TFree*)p);
   }
   static void deleteArray_CppyyLegacycLcLTFree(void *p) {
      delete [] ((::CppyyLegacy::TFree*)p);
   }
   static void destruct_CppyyLegacycLcLTFree(void *p) {
      typedef ::CppyyLegacy::TFree current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTFree(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TFree*)obj)->::CppyyLegacy::TFree::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TFree

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTFile(void *p) {
      return  p ? new(p) ::CppyyLegacy::TFile : new ::CppyyLegacy::TFile;
   }
   static void *newArray_CppyyLegacycLcLTFile(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TFile[nElements] : new ::CppyyLegacy::TFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTFile(void *p) {
      delete ((::CppyyLegacy::TFile*)p);
   }
   static void deleteArray_CppyyLegacycLcLTFile(void *p) {
      delete [] ((::CppyyLegacy::TFile*)p);
   }
   static void destruct_CppyyLegacycLcLTFile(void *p) {
      typedef ::CppyyLegacy::TFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTFile(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TFile*)obj)->::CppyyLegacy::TFile::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TFile

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTKey(void *p) {
      return  p ? new(p) ::CppyyLegacy::TKey : new ::CppyyLegacy::TKey;
   }
   static void *newArray_CppyyLegacycLcLTKey(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TKey[nElements] : new ::CppyyLegacy::TKey[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTKey(void *p) {
      delete ((::CppyyLegacy::TKey*)p);
   }
   static void deleteArray_CppyyLegacycLcLTKey(void *p) {
      delete [] ((::CppyyLegacy::TKey*)p);
   }
   static void destruct_CppyyLegacycLcLTKey(void *p) {
      typedef ::CppyyLegacy::TKey current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTKey(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TKey*)obj)->::CppyyLegacy::TKey::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TKey

namespace CppyyLegacy {
//______________________________________________________________________________
void TMemFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TMemFile.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TFile baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMemFile(void *p) {
      delete ((::CppyyLegacy::TMemFile*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMemFile(void *p) {
      delete [] ((::CppyyLegacy::TMemFile*)p);
   }
   static void destruct_CppyyLegacycLcLTMemFile(void *p) {
      typedef ::CppyyLegacy::TMemFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTMemFile(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TMemFile*)obj)->::CppyyLegacy::TMemFile::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMemFile

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerInfo(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerInfo : new ::CppyyLegacy::TStreamerInfo;
   }
   static void *newArray_CppyyLegacycLcLTStreamerInfo(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerInfo[nElements] : new ::CppyyLegacy::TStreamerInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerInfo(void *p) {
      delete ((::CppyyLegacy::TStreamerInfo*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerInfo(void *p) {
      delete [] ((::CppyyLegacy::TStreamerInfo*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerInfo(void *p) {
      typedef ::CppyyLegacy::TStreamerInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerInfo(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerInfo*)obj)->::CppyyLegacy::TStreamerInfo::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerInfo

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTVirtualArray(void *p) {
      delete ((::CppyyLegacy::TVirtualArray*)p);
   }
   static void deleteArray_CppyyLegacycLcLTVirtualArray(void *p) {
      delete [] ((::CppyyLegacy::TVirtualArray*)p);
   }
   static void destruct_CppyyLegacycLcLTVirtualArray(void *p) {
      typedef ::CppyyLegacy::TVirtualArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TVirtualArray

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration(void *p) {
      delete ((::CppyyLegacy::TStreamerInfoActions::TConfiguration*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration(void *p) {
      delete [] ((::CppyyLegacy::TStreamerInfoActions::TConfiguration*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguration(void *p) {
      typedef ::CppyyLegacy::TStreamerInfoActions::TConfiguration current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerInfoActions::TConfiguration

namespace CppyyLegacy {
   namespace TStreamerInfoActions {
//______________________________________________________________________________
void TConfiguredAction::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TStreamerInfoActions::TConfiguredAction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TStreamerInfoActions::TConfiguredAction::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TStreamerInfoActions::TConfiguredAction::Class(),this);
   }
}

} // namespace CppyyLegacy::TStreamerInfoActions
} // namespace CppyyLegacy::TStreamerInfoActions
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction : new ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction;
   }
   static void *newArray_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction[nElements] : new ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(void *p) {
      delete ((::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(void *p) {
      delete [] ((::CppyyLegacy::TStreamerInfoActions::TConfiguredAction*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerInfoActionscLcLTConfiguredAction(void *p) {
      typedef ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerInfoActions::TConfiguredAction

namespace CppyyLegacy {
   namespace TStreamerInfoActions {
//______________________________________________________________________________
void TActionSequence::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TStreamerInfoActions::TActionSequence.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TStreamerInfoActions::TActionSequence::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TStreamerInfoActions::TActionSequence::Class(),this);
   }
}

} // namespace CppyyLegacy::TStreamerInfoActions
} // namespace CppyyLegacy::TStreamerInfoActions
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerInfoActionscLcLTActionSequence(void *p) {
      delete ((::CppyyLegacy::TStreamerInfoActions::TActionSequence*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerInfoActionscLcLTActionSequence(void *p) {
      delete [] ((::CppyyLegacy::TStreamerInfoActions::TActionSequence*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerInfoActionscLcLTActionSequence(void *p) {
      typedef ::CppyyLegacy::TStreamerInfoActions::TActionSequence current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerInfoActions::TActionSequence

namespace {
  void TriggerDictionaryInitialization_libRIOLegacy_Impl() {
    static const char* headers[] = {
"TBufferFile.h",
"TBufferIO.h",
"TCollectionProxyFactory.h",
"TContainerConverters.h",
"TEmulatedMapProxy.h",
"TEmulatedCollectionProxy.h",
"TDirectoryFile.h",
"TFree.h",
"TFile.h",
"TGenCollectionStreamer.h",
"TGenCollectionProxy.h",
"TKey.h",
"TMemFile.h",
"TStreamerInfoActions.h",
"TVirtualCollectionIterators.h",
"TStreamerInfo.h",
"TVirtualArray.h",
0
    };
    static const char* includePaths[] = {
"$PREFIX/include",
0
    };
    static const char* fwdDeclCode = nullptr;
    static const char* payloadCode = nullptr;
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      ::CppyyLegacy::TROOT::RegisterModule("libRIOLegacy",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRIOLegacy_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRIOLegacy_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRIOLegacy() {
  TriggerDictionaryInitialization_libRIOLegacy_Impl();
}
