// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__CoreLegacy
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
#include "Bytes.h"
#include "Byteswap.h"
#include "Riostream.h"
#include "Rtypes.h"
#include "TApplication.h"
#include "TBuffer.h"
#include "TDatime.h"
#include "TDirectory.h"
#include "TEnv.h"
#include "TError.h"
#include "TException.h"
#include "TInetAddress.h"
#include "TMathBase.h"
#include "TMD5.h"
#include "TMemberInspector.h"
#include "TNamed.h"
#include "TObject.h"
#include "TObjString.h"
#include "TProcessID.h"
#include "TProcessUUID.h"
#include "TRegexp.h"
#include "TROOT.h"
#include "TStorage.h"
#include "TString.h"
#include "TSysEvtHandler.h"
#include "TSystem.h"
#include "TThreadSlots.h"
#include "TTime.h"
#include "TTimeStamp.h"
#include "TUrl.h"
#include "TUUID.h"
#include "TVersionCheck.h"
#include "TVirtualMutex.h"
#include "TVirtualRWMutex.h"
#include "strlcpy.h"
#include "snprintf.h"
#include "TArrayC.h"
#include "TArray.h"
#include "TBits.h"
#include "TClassTable.h"
#include "TCollection.h"
#include "TCollectionProxyInfo.h"
#include "TExMap.h"
#include "THashList.h"
#include "THashTable.h"
#include "TIterator.h"
#include "TList.h"
#include "TMap.h"
#include "TObjArray.h"
#include "TObjectTable.h"
#include "TOrdCollection.h"
#include "TSeqCollection.h"
#include "TVirtualCollectionProxy.h"
#include "ESTLType.h"
#include "RStringView.h"
#include "TClassEdit.h"
#include "ROOT/RMakeUnique.hxx"
#include "ROOT/RSpan.hxx"
#include "ROOT/RStringView.hxx"
#include "ROOT/TypeTraits.hxx"
#include "TUnixSystem.h"
#include "root_std_complex.h"
#include "TClingRuntime.h"
#include "TBaseClass.h"
#include "TClassGenerator.h"
#include "TClass.h"
#include "TClassRef.h"
#include "TClassStreamer.h"
#include "TDataMember.h"
#include "TDataType.h"
#include "TDictAttributeMap.h"
#include "TDictionary.h"
#include "TEnumConstant.h"
#include "TEnum.h"
#include "TFunction.h"
#include "TFunctionTemplate.h"
#include "TGenericClassInfo.h"
#include "TGlobal.h"
#include "TInterpreter.h"
#include "TInterpreterValue.h"
#include "TIsAProxy.h"
#include "TListOfDataMembers.h"
#include "TListOfEnums.h"
#include "TListOfEnumsWithLock.h"
#include "TListOfFunctions.h"
#include "TListOfFunctionTemplates.h"
#include "TMemberStreamer.h"
#include "TMethodArg.h"
#include "TMethod.h"
#include "TProtoClass.h"
#include "TRealData.h"
#include "TStreamerElement.h"
#include "TStreamer.h"
#include "TVirtualIsAProxy.h"
#include "TVirtualStreamerInfo.h"
#include "Getline.h"

// Header files passed via #pragma extra_include
#include "string"
#include "string"
#include "Rpair.h"
#include "Rtypes.h"

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
   namespace TMath {
   namespace CppyyLegacyX {
      using namespace CppyyLegacy;
      inline TGenericClassInfo *GenerateInitInstance();
      static TClass *CppyyLegacycLcLTMath_Dictionary();

      // Function generating the singleton type initializer
      inline TGenericClassInfo *GenerateInitInstance()
      {
         static TGenericClassInfo 
            instance("CppyyLegacy::TMath", 0 /*version*/, "TMathBase.h", 38,
                     Internal::DefineBehavior((void*)0,(void*)0),
                     &CppyyLegacycLcLTMath_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *CppyyLegacycLcLTMath_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace CppyyLegacy {
   static TClass *timespec_Dictionary();
   static void timespec_TClassManip(TClass*);
   static void *new_timespec(void *p = 0);
   static void *newArray_timespec(Long_t size, void *p);
   static void delete_timespec(void *p);
   static void deleteArray_timespec(void *p);
   static void destruct_timespec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::timespec*)
   {
      ::timespec *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::timespec));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("timespec", "time.h", 120,
                  typeid(::timespec), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &timespec_Dictionary, isa_proxy, 0,
                  sizeof(::timespec) );
      instance.SetNew(&new_timespec);
      instance.SetNewArray(&newArray_timespec);
      instance.SetDelete(&delete_timespec);
      instance.SetDeleteArray(&deleteArray_timespec);
      instance.SetDestructor(&destruct_timespec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::timespec*)
   {
      return GenerateInitInstanceLocal((::timespec*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::timespec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *timespec_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::timespec*)0x0)->GetClass();
      timespec_TClassManip(theClass);
   return theClass;
   }

   static void timespec_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPintcOintgR_Dictionary();
   static void stdcLcLpairlEconstsPintcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPintcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPintcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPintcOintgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPintcOintgR(void *p);
   static void destruct_stdcLcLpairlEconstsPintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const int,int>*)
   {
      std::pair<const int,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const int,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const int,int>", "string", 208,
                  typeid(std::pair<const int,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const int,int>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPintcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPintcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPintcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPintcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPintcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPintcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const int,int>*)0x0)->GetClass();
      stdcLcLpairlEconstsPintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEstdcLcLstringcOintgR_Dictionary();
   static void stdcLcLpairlEstdcLcLstringcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEstdcLcLstringcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEstdcLcLstringcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEstdcLcLstringcOintgR(void *p);
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOintgR(void *p);
   static void destruct_stdcLcLpairlEstdcLcLstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<std::string,int>*)
   {
      std::pair<std::string,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<std::string,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<std::string,int>", "string", 208,
                  typeid(std::pair<std::string,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEstdcLcLstringcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<std::string,int>) );
      instance.SetNew(&new_stdcLcLpairlEstdcLcLstringcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEstdcLcLstringcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEstdcLcLstringcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEstdcLcLstringcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEstdcLcLstringcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<std::string,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEstdcLcLstringcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<std::string,int>*)0x0)->GetClass();
      stdcLcLpairlEstdcLcLstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEstdcLcLstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPdoublecOcharmUgR_Dictionary();
   static void stdcLcLpairlEconstsPdoublecOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPdoublecOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPdoublecOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPdoublecOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPdoublecOcharmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPdoublecOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const double,char*>*)
   {
      std::pair<const double,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const double,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const double,char*>", "string", 208,
                  typeid(std::pair<const double,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPdoublecOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const double,char*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPdoublecOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPdoublecOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPdoublecOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPdoublecOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPdoublecOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const double,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPdoublecOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const double,char*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPdoublecOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPdoublecOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPdoublecOvoidmUgR_Dictionary();
   static void stdcLcLpairlEconstsPdoublecOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPdoublecOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPdoublecOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPdoublecOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPdoublecOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPdoublecOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const double,void*>*)
   {
      std::pair<const double,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const double,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const double,void*>", "string", 208,
                  typeid(std::pair<const double,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPdoublecOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const double,void*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPdoublecOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPdoublecOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPdoublecOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPdoublecOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPdoublecOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const double,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPdoublecOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const double,void*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPdoublecOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPdoublecOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPdoublecOdoublegR_Dictionary();
   static void stdcLcLpairlEconstsPdoublecOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPdoublecOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPdoublecOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPdoublecOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPdoublecOdoublegR(void *p);
   static void destruct_stdcLcLpairlEconstsPdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const double,double>*)
   {
      std::pair<const double,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const double,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const double,double>", "string", 208,
                  typeid(std::pair<const double,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const double,double>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPdoublecOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPdoublecOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPdoublecOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPdoublecOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPdoublecOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const double,double>*)0x0)->GetClass();
      stdcLcLpairlEconstsPdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPdoublecOfloatgR_Dictionary();
   static void stdcLcLpairlEconstsPdoublecOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPdoublecOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPdoublecOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPdoublecOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPdoublecOfloatgR(void *p);
   static void destruct_stdcLcLpairlEconstsPdoublecOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const double,float>*)
   {
      std::pair<const double,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const double,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const double,float>", "string", 208,
                  typeid(std::pair<const double,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPdoublecOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const double,float>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPdoublecOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPdoublecOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPdoublecOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPdoublecOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPdoublecOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const double,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPdoublecOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const double,float>*)0x0)->GetClass();
      stdcLcLpairlEconstsPdoublecOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPdoublecOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPdoublecOlonggR_Dictionary();
   static void stdcLcLpairlEconstsPdoublecOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPdoublecOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPdoublecOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPdoublecOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPdoublecOlonggR(void *p);
   static void destruct_stdcLcLpairlEconstsPdoublecOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const double,long>*)
   {
      std::pair<const double,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const double,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const double,long>", "string", 208,
                  typeid(std::pair<const double,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPdoublecOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const double,long>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPdoublecOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPdoublecOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPdoublecOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPdoublecOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPdoublecOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const double,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPdoublecOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const double,long>*)0x0)->GetClass();
      stdcLcLpairlEconstsPdoublecOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPdoublecOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPdoublecOintgR_Dictionary();
   static void stdcLcLpairlEconstsPdoublecOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPdoublecOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPdoublecOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPdoublecOintgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPdoublecOintgR(void *p);
   static void destruct_stdcLcLpairlEconstsPdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const double,int>*)
   {
      std::pair<const double,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const double,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const double,int>", "string", 208,
                  typeid(std::pair<const double,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const double,int>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPdoublecOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPdoublecOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPdoublecOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPdoublecOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPdoublecOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const double,int>*)0x0)->GetClass();
      stdcLcLpairlEconstsPdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPfloatcOcharmUgR_Dictionary();
   static void stdcLcLpairlEconstsPfloatcOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPfloatcOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPfloatcOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPfloatcOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPfloatcOcharmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPfloatcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const float,char*>*)
   {
      std::pair<const float,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const float,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const float,char*>", "string", 208,
                  typeid(std::pair<const float,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPfloatcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const float,char*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPfloatcOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPfloatcOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPfloatcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPfloatcOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPfloatcOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const float,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPfloatcOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const float,char*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPfloatcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPfloatcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPfloatcOvoidmUgR_Dictionary();
   static void stdcLcLpairlEconstsPfloatcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPfloatcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPfloatcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPfloatcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPfloatcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPfloatcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const float,void*>*)
   {
      std::pair<const float,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const float,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const float,void*>", "string", 208,
                  typeid(std::pair<const float,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPfloatcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const float,void*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPfloatcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPfloatcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPfloatcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPfloatcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPfloatcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const float,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPfloatcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const float,void*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPfloatcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPfloatcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPfloatcOdoublegR_Dictionary();
   static void stdcLcLpairlEconstsPfloatcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPfloatcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPfloatcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPfloatcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPfloatcOdoublegR(void *p);
   static void destruct_stdcLcLpairlEconstsPfloatcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const float,double>*)
   {
      std::pair<const float,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const float,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const float,double>", "string", 208,
                  typeid(std::pair<const float,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPfloatcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const float,double>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPfloatcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPfloatcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPfloatcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPfloatcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPfloatcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const float,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPfloatcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const float,double>*)0x0)->GetClass();
      stdcLcLpairlEconstsPfloatcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPfloatcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPfloatcOfloatgR_Dictionary();
   static void stdcLcLpairlEconstsPfloatcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPfloatcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPfloatcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPfloatcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPfloatcOfloatgR(void *p);
   static void destruct_stdcLcLpairlEconstsPfloatcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const float,float>*)
   {
      std::pair<const float,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const float,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const float,float>", "string", 208,
                  typeid(std::pair<const float,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPfloatcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const float,float>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPfloatcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPfloatcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPfloatcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPfloatcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPfloatcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const float,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPfloatcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const float,float>*)0x0)->GetClass();
      stdcLcLpairlEconstsPfloatcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPfloatcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPfloatcOlonggR_Dictionary();
   static void stdcLcLpairlEconstsPfloatcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPfloatcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPfloatcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPfloatcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPfloatcOlonggR(void *p);
   static void destruct_stdcLcLpairlEconstsPfloatcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const float,long>*)
   {
      std::pair<const float,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const float,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const float,long>", "string", 208,
                  typeid(std::pair<const float,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPfloatcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const float,long>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPfloatcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPfloatcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPfloatcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPfloatcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPfloatcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const float,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPfloatcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const float,long>*)0x0)->GetClass();
      stdcLcLpairlEconstsPfloatcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPfloatcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPfloatcOintgR_Dictionary();
   static void stdcLcLpairlEconstsPfloatcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPfloatcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPfloatcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPfloatcOintgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPfloatcOintgR(void *p);
   static void destruct_stdcLcLpairlEconstsPfloatcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const float,int>*)
   {
      std::pair<const float,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const float,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const float,int>", "string", 208,
                  typeid(std::pair<const float,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPfloatcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const float,int>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPfloatcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPfloatcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPfloatcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPfloatcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPfloatcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const float,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPfloatcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const float,int>*)0x0)->GetClass();
      stdcLcLpairlEconstsPfloatcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPfloatcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPlongcOcharmUgR_Dictionary();
   static void stdcLcLpairlEconstsPlongcOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPlongcOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPlongcOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPlongcOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPlongcOcharmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPlongcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const long,char*>*)
   {
      std::pair<const long,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const long,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const long,char*>", "string", 208,
                  typeid(std::pair<const long,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPlongcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const long,char*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPlongcOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPlongcOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPlongcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPlongcOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPlongcOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const long,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPlongcOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const long,char*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPlongcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPlongcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPlongcOvoidmUgR_Dictionary();
   static void stdcLcLpairlEconstsPlongcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPlongcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPlongcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPlongcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPlongcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPlongcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const long,void*>*)
   {
      std::pair<const long,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const long,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const long,void*>", "string", 208,
                  typeid(std::pair<const long,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPlongcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const long,void*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPlongcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPlongcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPlongcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPlongcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPlongcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const long,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPlongcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const long,void*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPlongcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPlongcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPlongcOdoublegR_Dictionary();
   static void stdcLcLpairlEconstsPlongcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPlongcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPlongcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPlongcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPlongcOdoublegR(void *p);
   static void destruct_stdcLcLpairlEconstsPlongcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const long,double>*)
   {
      std::pair<const long,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const long,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const long,double>", "string", 208,
                  typeid(std::pair<const long,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPlongcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const long,double>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPlongcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPlongcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPlongcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPlongcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPlongcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const long,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPlongcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const long,double>*)0x0)->GetClass();
      stdcLcLpairlEconstsPlongcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPlongcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPlongcOfloatgR_Dictionary();
   static void stdcLcLpairlEconstsPlongcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPlongcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPlongcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPlongcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPlongcOfloatgR(void *p);
   static void destruct_stdcLcLpairlEconstsPlongcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const long,float>*)
   {
      std::pair<const long,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const long,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const long,float>", "string", 208,
                  typeid(std::pair<const long,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPlongcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const long,float>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPlongcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPlongcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPlongcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPlongcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPlongcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const long,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPlongcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const long,float>*)0x0)->GetClass();
      stdcLcLpairlEconstsPlongcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPlongcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPlongcOlonggR_Dictionary();
   static void stdcLcLpairlEconstsPlongcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPlongcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPlongcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPlongcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPlongcOlonggR(void *p);
   static void destruct_stdcLcLpairlEconstsPlongcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const long,long>*)
   {
      std::pair<const long,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const long,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const long,long>", "string", 208,
                  typeid(std::pair<const long,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPlongcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const long,long>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPlongcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPlongcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPlongcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPlongcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPlongcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const long,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPlongcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const long,long>*)0x0)->GetClass();
      stdcLcLpairlEconstsPlongcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPlongcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPlongcOintgR_Dictionary();
   static void stdcLcLpairlEconstsPlongcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPlongcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPlongcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPlongcOintgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPlongcOintgR(void *p);
   static void destruct_stdcLcLpairlEconstsPlongcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const long,int>*)
   {
      std::pair<const long,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const long,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const long,int>", "string", 208,
                  typeid(std::pair<const long,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPlongcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const long,int>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPlongcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPlongcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPlongcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPlongcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPlongcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const long,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPlongcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const long,int>*)0x0)->GetClass();
      stdcLcLpairlEconstsPlongcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPlongcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPintcOcharmUgR_Dictionary();
   static void stdcLcLpairlEconstsPintcOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPintcOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPintcOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPintcOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPintcOcharmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPintcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const int,char*>*)
   {
      std::pair<const int,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const int,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const int,char*>", "string", 208,
                  typeid(std::pair<const int,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPintcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const int,char*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPintcOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPintcOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPintcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPintcOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPintcOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const int,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPintcOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const int,char*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPintcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPintcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPintcOvoidmUgR_Dictionary();
   static void stdcLcLpairlEconstsPintcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPintcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPintcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPintcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPintcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPintcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const int,void*>*)
   {
      std::pair<const int,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const int,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const int,void*>", "string", 208,
                  typeid(std::pair<const int,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPintcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const int,void*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPintcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPintcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPintcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPintcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPintcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const int,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPintcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const int,void*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPintcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPintcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPintcOdoublegR_Dictionary();
   static void stdcLcLpairlEconstsPintcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPintcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPintcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPintcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPintcOdoublegR(void *p);
   static void destruct_stdcLcLpairlEconstsPintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const int,double>*)
   {
      std::pair<const int,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const int,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const int,double>", "string", 208,
                  typeid(std::pair<const int,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const int,double>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPintcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPintcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPintcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPintcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPintcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const int,double>*)0x0)->GetClass();
      stdcLcLpairlEconstsPintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPintcOfloatgR_Dictionary();
   static void stdcLcLpairlEconstsPintcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPintcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPintcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPintcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPintcOfloatgR(void *p);
   static void destruct_stdcLcLpairlEconstsPintcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const int,float>*)
   {
      std::pair<const int,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const int,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const int,float>", "string", 208,
                  typeid(std::pair<const int,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPintcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const int,float>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPintcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPintcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPintcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPintcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPintcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const int,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPintcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const int,float>*)0x0)->GetClass();
      stdcLcLpairlEconstsPintcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPintcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPintcOlonggR_Dictionary();
   static void stdcLcLpairlEconstsPintcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPintcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPintcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPintcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPintcOlonggR(void *p);
   static void destruct_stdcLcLpairlEconstsPintcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const int,long>*)
   {
      std::pair<const int,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const int,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const int,long>", "string", 208,
                  typeid(std::pair<const int,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPintcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const int,long>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPintcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPintcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPintcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPintcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPintcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const int,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPintcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const int,long>*)0x0)->GetClass();
      stdcLcLpairlEconstsPintcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPintcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR_Dictionary();
   static void stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const std::string,void*>*)
   {
      std::pair<const std::string,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const std::string,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const std::string,void*>", "string", 208,
                  typeid(std::pair<const std::string,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const std::string,void*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const std::string,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const std::string,void*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPstdcLcLstringcOdoublegR_Dictionary();
   static void stdcLcLpairlEconstsPstdcLcLstringcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(void *p);
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const std::string,double>*)
   {
      std::pair<const std::string,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const std::string,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const std::string,double>", "string", 208,
                  typeid(std::pair<const std::string,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPstdcLcLstringcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const std::string,double>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const std::string,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPstdcLcLstringcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const std::string,double>*)0x0)->GetClass();
      stdcLcLpairlEconstsPstdcLcLstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPstdcLcLstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPstdcLcLstringcOfloatgR_Dictionary();
   static void stdcLcLpairlEconstsPstdcLcLstringcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(void *p);
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const std::string,float>*)
   {
      std::pair<const std::string,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const std::string,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const std::string,float>", "string", 208,
                  typeid(std::pair<const std::string,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPstdcLcLstringcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const std::string,float>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const std::string,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPstdcLcLstringcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const std::string,float>*)0x0)->GetClass();
      stdcLcLpairlEconstsPstdcLcLstringcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPstdcLcLstringcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPstdcLcLstringcOlonggR_Dictionary();
   static void stdcLcLpairlEconstsPstdcLcLstringcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(void *p);
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const std::string,long>*)
   {
      std::pair<const std::string,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const std::string,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const std::string,long>", "string", 208,
                  typeid(std::pair<const std::string,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPstdcLcLstringcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const std::string,long>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPstdcLcLstringcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPstdcLcLstringcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPstdcLcLstringcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPstdcLcLstringcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const std::string,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPstdcLcLstringcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const std::string,long>*)0x0)->GetClass();
      stdcLcLpairlEconstsPstdcLcLstringcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPstdcLcLstringcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPstdcLcLstringcOintgR_Dictionary();
   static void stdcLcLpairlEconstsPstdcLcLstringcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOintgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOintgR(void *p);
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const std::string,int>*)
   {
      std::pair<const std::string,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const std::string,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const std::string,int>", "string", 208,
                  typeid(std::pair<const std::string,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPstdcLcLstringcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const std::string,int>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPstdcLcLstringcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPstdcLcLstringcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPstdcLcLstringcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPstdcLcLstringcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const std::string,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPstdcLcLstringcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const std::string,int>*)0x0)->GetClass();
      stdcLcLpairlEconstsPstdcLcLstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPstdcLcLstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPcharmUcOcharmUgR_Dictionary();
   static void stdcLcLpairlEconstsPcharmUcOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPcharmUcOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPcharmUcOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPcharmUcOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOcharmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPcharmUcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const char*,char*>*)
   {
      std::pair<const char*,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const char*,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const char*,char*>", "string", 208,
                  typeid(std::pair<const char*,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPcharmUcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const char*,char*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPcharmUcOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPcharmUcOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPcharmUcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPcharmUcOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPcharmUcOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const char*,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPcharmUcOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const char*,char*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPcharmUcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPcharmUcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPcharmUcOvoidmUgR_Dictionary();
   static void stdcLcLpairlEconstsPcharmUcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPcharmUcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPcharmUcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPcharmUcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEconstsPcharmUcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const char*,void*>*)
   {
      std::pair<const char*,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const char*,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const char*,void*>", "string", 208,
                  typeid(std::pair<const char*,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPcharmUcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const char*,void*>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPcharmUcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPcharmUcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPcharmUcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPcharmUcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPcharmUcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const char*,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPcharmUcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const char*,void*>*)0x0)->GetClass();
      stdcLcLpairlEconstsPcharmUcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPcharmUcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPcharmUcOdoublegR_Dictionary();
   static void stdcLcLpairlEconstsPcharmUcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPcharmUcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPcharmUcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPcharmUcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOdoublegR(void *p);
   static void destruct_stdcLcLpairlEconstsPcharmUcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const char*,double>*)
   {
      std::pair<const char*,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const char*,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const char*,double>", "string", 208,
                  typeid(std::pair<const char*,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPcharmUcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const char*,double>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPcharmUcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPcharmUcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPcharmUcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPcharmUcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPcharmUcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const char*,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPcharmUcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const char*,double>*)0x0)->GetClass();
      stdcLcLpairlEconstsPcharmUcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPcharmUcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPcharmUcOfloatgR_Dictionary();
   static void stdcLcLpairlEconstsPcharmUcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPcharmUcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPcharmUcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPcharmUcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOfloatgR(void *p);
   static void destruct_stdcLcLpairlEconstsPcharmUcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const char*,float>*)
   {
      std::pair<const char*,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const char*,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const char*,float>", "string", 208,
                  typeid(std::pair<const char*,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPcharmUcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const char*,float>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPcharmUcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPcharmUcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPcharmUcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPcharmUcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPcharmUcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const char*,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPcharmUcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const char*,float>*)0x0)->GetClass();
      stdcLcLpairlEconstsPcharmUcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPcharmUcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPcharmUcOlonggR_Dictionary();
   static void stdcLcLpairlEconstsPcharmUcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPcharmUcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPcharmUcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPcharmUcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOlonggR(void *p);
   static void destruct_stdcLcLpairlEconstsPcharmUcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const char*,long>*)
   {
      std::pair<const char*,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const char*,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const char*,long>", "string", 208,
                  typeid(std::pair<const char*,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPcharmUcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const char*,long>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPcharmUcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPcharmUcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPcharmUcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPcharmUcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPcharmUcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const char*,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPcharmUcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const char*,long>*)0x0)->GetClass();
      stdcLcLpairlEconstsPcharmUcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPcharmUcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEconstsPcharmUcOintgR_Dictionary();
   static void stdcLcLpairlEconstsPcharmUcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEconstsPcharmUcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEconstsPcharmUcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEconstsPcharmUcOintgR(void *p);
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOintgR(void *p);
   static void destruct_stdcLcLpairlEconstsPcharmUcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<const char*,int>*)
   {
      std::pair<const char*,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<const char*,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<const char*,int>", "string", 208,
                  typeid(std::pair<const char*,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEconstsPcharmUcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<const char*,int>) );
      instance.SetNew(&new_stdcLcLpairlEconstsPcharmUcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEconstsPcharmUcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEconstsPcharmUcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEconstsPcharmUcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEconstsPcharmUcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<const char*,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEconstsPcharmUcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<const char*,int>*)0x0)->GetClass();
      stdcLcLpairlEconstsPcharmUcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEconstsPcharmUcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEdoublecOcharmUgR_Dictionary();
   static void stdcLcLpairlEdoublecOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEdoublecOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEdoublecOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEdoublecOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlEdoublecOcharmUgR(void *p);
   static void destruct_stdcLcLpairlEdoublecOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<double,char*>*)
   {
      std::pair<double,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<double,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<double,char*>", "string", 208,
                  typeid(std::pair<double,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEdoublecOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<double,char*>) );
      instance.SetNew(&new_stdcLcLpairlEdoublecOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEdoublecOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEdoublecOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEdoublecOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEdoublecOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<double,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEdoublecOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<double,char*>*)0x0)->GetClass();
      stdcLcLpairlEdoublecOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEdoublecOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEdoublecOvoidmUgR_Dictionary();
   static void stdcLcLpairlEdoublecOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEdoublecOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEdoublecOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEdoublecOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEdoublecOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEdoublecOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<double,void*>*)
   {
      std::pair<double,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<double,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<double,void*>", "string", 208,
                  typeid(std::pair<double,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEdoublecOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<double,void*>) );
      instance.SetNew(&new_stdcLcLpairlEdoublecOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEdoublecOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEdoublecOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEdoublecOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEdoublecOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<double,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEdoublecOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<double,void*>*)0x0)->GetClass();
      stdcLcLpairlEdoublecOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEdoublecOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEdoublecOdoublegR_Dictionary();
   static void stdcLcLpairlEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEdoublecOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEdoublecOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEdoublecOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEdoublecOdoublegR(void *p);
   static void destruct_stdcLcLpairlEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<double,double>*)
   {
      std::pair<double,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<double,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<double,double>", "string", 208,
                  typeid(std::pair<double,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEdoublecOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<double,double>) );
      instance.SetNew(&new_stdcLcLpairlEdoublecOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEdoublecOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEdoublecOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEdoublecOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEdoublecOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<double,double>*)0x0)->GetClass();
      stdcLcLpairlEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEdoublecOfloatgR_Dictionary();
   static void stdcLcLpairlEdoublecOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEdoublecOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEdoublecOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEdoublecOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEdoublecOfloatgR(void *p);
   static void destruct_stdcLcLpairlEdoublecOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<double,float>*)
   {
      std::pair<double,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<double,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<double,float>", "string", 208,
                  typeid(std::pair<double,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEdoublecOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<double,float>) );
      instance.SetNew(&new_stdcLcLpairlEdoublecOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEdoublecOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEdoublecOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEdoublecOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEdoublecOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<double,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEdoublecOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<double,float>*)0x0)->GetClass();
      stdcLcLpairlEdoublecOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEdoublecOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEdoublecOlonggR_Dictionary();
   static void stdcLcLpairlEdoublecOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEdoublecOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEdoublecOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEdoublecOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEdoublecOlonggR(void *p);
   static void destruct_stdcLcLpairlEdoublecOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<double,long>*)
   {
      std::pair<double,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<double,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<double,long>", "string", 208,
                  typeid(std::pair<double,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEdoublecOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<double,long>) );
      instance.SetNew(&new_stdcLcLpairlEdoublecOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEdoublecOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEdoublecOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEdoublecOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEdoublecOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<double,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEdoublecOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<double,long>*)0x0)->GetClass();
      stdcLcLpairlEdoublecOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEdoublecOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEdoublecOintgR_Dictionary();
   static void stdcLcLpairlEdoublecOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEdoublecOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEdoublecOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEdoublecOintgR(void *p);
   static void deleteArray_stdcLcLpairlEdoublecOintgR(void *p);
   static void destruct_stdcLcLpairlEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<double,int>*)
   {
      std::pair<double,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<double,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<double,int>", "string", 208,
                  typeid(std::pair<double,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEdoublecOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<double,int>) );
      instance.SetNew(&new_stdcLcLpairlEdoublecOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEdoublecOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEdoublecOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEdoublecOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEdoublecOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<double,int>*)0x0)->GetClass();
      stdcLcLpairlEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEfloatcOcharmUgR_Dictionary();
   static void stdcLcLpairlEfloatcOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEfloatcOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEfloatcOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEfloatcOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlEfloatcOcharmUgR(void *p);
   static void destruct_stdcLcLpairlEfloatcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<float,char*>*)
   {
      std::pair<float,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<float,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<float,char*>", "string", 208,
                  typeid(std::pair<float,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEfloatcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<float,char*>) );
      instance.SetNew(&new_stdcLcLpairlEfloatcOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEfloatcOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEfloatcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEfloatcOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEfloatcOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<float,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEfloatcOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<float,char*>*)0x0)->GetClass();
      stdcLcLpairlEfloatcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEfloatcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEfloatcOvoidmUgR_Dictionary();
   static void stdcLcLpairlEfloatcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEfloatcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEfloatcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEfloatcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEfloatcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEfloatcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<float,void*>*)
   {
      std::pair<float,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<float,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<float,void*>", "string", 208,
                  typeid(std::pair<float,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEfloatcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<float,void*>) );
      instance.SetNew(&new_stdcLcLpairlEfloatcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEfloatcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEfloatcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEfloatcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEfloatcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<float,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEfloatcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<float,void*>*)0x0)->GetClass();
      stdcLcLpairlEfloatcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEfloatcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEfloatcOdoublegR_Dictionary();
   static void stdcLcLpairlEfloatcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEfloatcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEfloatcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEfloatcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEfloatcOdoublegR(void *p);
   static void destruct_stdcLcLpairlEfloatcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<float,double>*)
   {
      std::pair<float,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<float,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<float,double>", "string", 208,
                  typeid(std::pair<float,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEfloatcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<float,double>) );
      instance.SetNew(&new_stdcLcLpairlEfloatcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEfloatcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEfloatcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEfloatcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEfloatcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<float,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEfloatcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<float,double>*)0x0)->GetClass();
      stdcLcLpairlEfloatcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEfloatcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEfloatcOfloatgR_Dictionary();
   static void stdcLcLpairlEfloatcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEfloatcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEfloatcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEfloatcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEfloatcOfloatgR(void *p);
   static void destruct_stdcLcLpairlEfloatcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<float,float>*)
   {
      std::pair<float,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<float,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<float,float>", "string", 208,
                  typeid(std::pair<float,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEfloatcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<float,float>) );
      instance.SetNew(&new_stdcLcLpairlEfloatcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEfloatcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEfloatcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEfloatcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEfloatcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<float,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEfloatcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<float,float>*)0x0)->GetClass();
      stdcLcLpairlEfloatcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEfloatcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEfloatcOlonggR_Dictionary();
   static void stdcLcLpairlEfloatcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEfloatcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEfloatcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEfloatcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEfloatcOlonggR(void *p);
   static void destruct_stdcLcLpairlEfloatcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<float,long>*)
   {
      std::pair<float,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<float,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<float,long>", "string", 208,
                  typeid(std::pair<float,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEfloatcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<float,long>) );
      instance.SetNew(&new_stdcLcLpairlEfloatcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEfloatcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEfloatcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEfloatcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEfloatcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<float,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEfloatcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<float,long>*)0x0)->GetClass();
      stdcLcLpairlEfloatcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEfloatcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEfloatcOintgR_Dictionary();
   static void stdcLcLpairlEfloatcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEfloatcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEfloatcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEfloatcOintgR(void *p);
   static void deleteArray_stdcLcLpairlEfloatcOintgR(void *p);
   static void destruct_stdcLcLpairlEfloatcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<float,int>*)
   {
      std::pair<float,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<float,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<float,int>", "string", 208,
                  typeid(std::pair<float,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEfloatcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<float,int>) );
      instance.SetNew(&new_stdcLcLpairlEfloatcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEfloatcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEfloatcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEfloatcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEfloatcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<float,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEfloatcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<float,int>*)0x0)->GetClass();
      stdcLcLpairlEfloatcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEfloatcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlElongcOcharmUgR_Dictionary();
   static void stdcLcLpairlElongcOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlElongcOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlElongcOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlElongcOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlElongcOcharmUgR(void *p);
   static void destruct_stdcLcLpairlElongcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<long,char*>*)
   {
      std::pair<long,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<long,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<long,char*>", "string", 208,
                  typeid(std::pair<long,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlElongcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<long,char*>) );
      instance.SetNew(&new_stdcLcLpairlElongcOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlElongcOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlElongcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlElongcOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlElongcOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<long,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlElongcOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<long,char*>*)0x0)->GetClass();
      stdcLcLpairlElongcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlElongcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlElongcOvoidmUgR_Dictionary();
   static void stdcLcLpairlElongcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlElongcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlElongcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlElongcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlElongcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlElongcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<long,void*>*)
   {
      std::pair<long,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<long,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<long,void*>", "string", 208,
                  typeid(std::pair<long,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlElongcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<long,void*>) );
      instance.SetNew(&new_stdcLcLpairlElongcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlElongcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlElongcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlElongcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlElongcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<long,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlElongcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<long,void*>*)0x0)->GetClass();
      stdcLcLpairlElongcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlElongcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlElongcOdoublegR_Dictionary();
   static void stdcLcLpairlElongcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlElongcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlElongcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlElongcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlElongcOdoublegR(void *p);
   static void destruct_stdcLcLpairlElongcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<long,double>*)
   {
      std::pair<long,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<long,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<long,double>", "string", 208,
                  typeid(std::pair<long,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlElongcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<long,double>) );
      instance.SetNew(&new_stdcLcLpairlElongcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlElongcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlElongcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlElongcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlElongcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<long,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlElongcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<long,double>*)0x0)->GetClass();
      stdcLcLpairlElongcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlElongcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlElongcOfloatgR_Dictionary();
   static void stdcLcLpairlElongcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlElongcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlElongcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlElongcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlElongcOfloatgR(void *p);
   static void destruct_stdcLcLpairlElongcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<long,float>*)
   {
      std::pair<long,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<long,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<long,float>", "string", 208,
                  typeid(std::pair<long,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlElongcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<long,float>) );
      instance.SetNew(&new_stdcLcLpairlElongcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlElongcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlElongcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlElongcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlElongcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<long,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlElongcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<long,float>*)0x0)->GetClass();
      stdcLcLpairlElongcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlElongcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlElongcOlonggR_Dictionary();
   static void stdcLcLpairlElongcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlElongcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlElongcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlElongcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlElongcOlonggR(void *p);
   static void destruct_stdcLcLpairlElongcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<long,long>*)
   {
      std::pair<long,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<long,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<long,long>", "string", 208,
                  typeid(std::pair<long,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlElongcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<long,long>) );
      instance.SetNew(&new_stdcLcLpairlElongcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlElongcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlElongcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlElongcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlElongcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<long,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlElongcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<long,long>*)0x0)->GetClass();
      stdcLcLpairlElongcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlElongcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlElongcOintgR_Dictionary();
   static void stdcLcLpairlElongcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlElongcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlElongcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlElongcOintgR(void *p);
   static void deleteArray_stdcLcLpairlElongcOintgR(void *p);
   static void destruct_stdcLcLpairlElongcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<long,int>*)
   {
      std::pair<long,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<long,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<long,int>", "string", 208,
                  typeid(std::pair<long,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlElongcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<long,int>) );
      instance.SetNew(&new_stdcLcLpairlElongcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlElongcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlElongcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlElongcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlElongcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<long,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlElongcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<long,int>*)0x0)->GetClass();
      stdcLcLpairlElongcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlElongcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEintcOcharmUgR_Dictionary();
   static void stdcLcLpairlEintcOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEintcOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEintcOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEintcOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlEintcOcharmUgR(void *p);
   static void destruct_stdcLcLpairlEintcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<int,char*>*)
   {
      std::pair<int,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<int,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<int,char*>", "string", 208,
                  typeid(std::pair<int,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEintcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<int,char*>) );
      instance.SetNew(&new_stdcLcLpairlEintcOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEintcOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEintcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEintcOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEintcOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<int,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEintcOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<int,char*>*)0x0)->GetClass();
      stdcLcLpairlEintcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEintcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEintcOvoidmUgR_Dictionary();
   static void stdcLcLpairlEintcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEintcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEintcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEintcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEintcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEintcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<int,void*>*)
   {
      std::pair<int,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<int,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<int,void*>", "string", 208,
                  typeid(std::pair<int,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEintcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<int,void*>) );
      instance.SetNew(&new_stdcLcLpairlEintcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEintcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEintcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEintcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEintcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<int,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEintcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<int,void*>*)0x0)->GetClass();
      stdcLcLpairlEintcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEintcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEintcOdoublegR_Dictionary();
   static void stdcLcLpairlEintcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEintcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEintcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEintcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEintcOdoublegR(void *p);
   static void destruct_stdcLcLpairlEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<int,double>*)
   {
      std::pair<int,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<int,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<int,double>", "string", 208,
                  typeid(std::pair<int,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEintcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<int,double>) );
      instance.SetNew(&new_stdcLcLpairlEintcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEintcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEintcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEintcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEintcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<int,double>*)0x0)->GetClass();
      stdcLcLpairlEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEintcOfloatgR_Dictionary();
   static void stdcLcLpairlEintcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEintcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEintcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEintcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEintcOfloatgR(void *p);
   static void destruct_stdcLcLpairlEintcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<int,float>*)
   {
      std::pair<int,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<int,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<int,float>", "string", 208,
                  typeid(std::pair<int,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEintcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<int,float>) );
      instance.SetNew(&new_stdcLcLpairlEintcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEintcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEintcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEintcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEintcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<int,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEintcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<int,float>*)0x0)->GetClass();
      stdcLcLpairlEintcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEintcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEintcOlonggR_Dictionary();
   static void stdcLcLpairlEintcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEintcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEintcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEintcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEintcOlonggR(void *p);
   static void destruct_stdcLcLpairlEintcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<int,long>*)
   {
      std::pair<int,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<int,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<int,long>", "string", 208,
                  typeid(std::pair<int,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEintcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<int,long>) );
      instance.SetNew(&new_stdcLcLpairlEintcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEintcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEintcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEintcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEintcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<int,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEintcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<int,long>*)0x0)->GetClass();
      stdcLcLpairlEintcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEintcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEintcOintgR_Dictionary();
   static void stdcLcLpairlEintcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEintcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEintcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEintcOintgR(void *p);
   static void deleteArray_stdcLcLpairlEintcOintgR(void *p);
   static void destruct_stdcLcLpairlEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<int,int>*)
   {
      std::pair<int,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<int,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<int,int>", "string", 208,
                  typeid(std::pair<int,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEintcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<int,int>) );
      instance.SetNew(&new_stdcLcLpairlEintcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEintcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEintcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEintcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEintcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEintcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<int,int>*)0x0)->GetClass();
      stdcLcLpairlEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEstdcLcLstringcOvoidmUgR_Dictionary();
   static void stdcLcLpairlEstdcLcLstringcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEstdcLcLstringcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEstdcLcLstringcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEstdcLcLstringcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEstdcLcLstringcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<std::string,void*>*)
   {
      std::pair<std::string,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<std::string,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<std::string,void*>", "string", 208,
                  typeid(std::pair<std::string,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEstdcLcLstringcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<std::string,void*>) );
      instance.SetNew(&new_stdcLcLpairlEstdcLcLstringcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEstdcLcLstringcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEstdcLcLstringcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEstdcLcLstringcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEstdcLcLstringcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<std::string,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEstdcLcLstringcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<std::string,void*>*)0x0)->GetClass();
      stdcLcLpairlEstdcLcLstringcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEstdcLcLstringcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEstdcLcLstringcOdoublegR_Dictionary();
   static void stdcLcLpairlEstdcLcLstringcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEstdcLcLstringcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEstdcLcLstringcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEstdcLcLstringcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOdoublegR(void *p);
   static void destruct_stdcLcLpairlEstdcLcLstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<std::string,double>*)
   {
      std::pair<std::string,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<std::string,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<std::string,double>", "string", 208,
                  typeid(std::pair<std::string,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEstdcLcLstringcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<std::string,double>) );
      instance.SetNew(&new_stdcLcLpairlEstdcLcLstringcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEstdcLcLstringcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEstdcLcLstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEstdcLcLstringcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEstdcLcLstringcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<std::string,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEstdcLcLstringcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<std::string,double>*)0x0)->GetClass();
      stdcLcLpairlEstdcLcLstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEstdcLcLstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEstdcLcLstringcOfloatgR_Dictionary();
   static void stdcLcLpairlEstdcLcLstringcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEstdcLcLstringcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEstdcLcLstringcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEstdcLcLstringcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOfloatgR(void *p);
   static void destruct_stdcLcLpairlEstdcLcLstringcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<std::string,float>*)
   {
      std::pair<std::string,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<std::string,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<std::string,float>", "string", 208,
                  typeid(std::pair<std::string,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEstdcLcLstringcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<std::string,float>) );
      instance.SetNew(&new_stdcLcLpairlEstdcLcLstringcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEstdcLcLstringcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEstdcLcLstringcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEstdcLcLstringcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEstdcLcLstringcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<std::string,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEstdcLcLstringcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<std::string,float>*)0x0)->GetClass();
      stdcLcLpairlEstdcLcLstringcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEstdcLcLstringcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEstdcLcLstringcOlonggR_Dictionary();
   static void stdcLcLpairlEstdcLcLstringcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEstdcLcLstringcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEstdcLcLstringcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEstdcLcLstringcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOlonggR(void *p);
   static void destruct_stdcLcLpairlEstdcLcLstringcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<std::string,long>*)
   {
      std::pair<std::string,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<std::string,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<std::string,long>", "string", 208,
                  typeid(std::pair<std::string,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEstdcLcLstringcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<std::string,long>) );
      instance.SetNew(&new_stdcLcLpairlEstdcLcLstringcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEstdcLcLstringcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEstdcLcLstringcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEstdcLcLstringcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEstdcLcLstringcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<std::string,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEstdcLcLstringcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<std::string,long>*)0x0)->GetClass();
      stdcLcLpairlEstdcLcLstringcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEstdcLcLstringcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEcharmUcOcharmUgR_Dictionary();
   static void stdcLcLpairlEcharmUcOcharmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEcharmUcOcharmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEcharmUcOcharmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEcharmUcOcharmUgR(void *p);
   static void deleteArray_stdcLcLpairlEcharmUcOcharmUgR(void *p);
   static void destruct_stdcLcLpairlEcharmUcOcharmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<char*,char*>*)
   {
      std::pair<char*,char*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<char*,char*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<char*,char*>", "string", 208,
                  typeid(std::pair<char*,char*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEcharmUcOcharmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<char*,char*>) );
      instance.SetNew(&new_stdcLcLpairlEcharmUcOcharmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEcharmUcOcharmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEcharmUcOcharmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEcharmUcOcharmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEcharmUcOcharmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<char*,char*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEcharmUcOcharmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<char*,char*>*)0x0)->GetClass();
      stdcLcLpairlEcharmUcOcharmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEcharmUcOcharmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEcharmUcOvoidmUgR_Dictionary();
   static void stdcLcLpairlEcharmUcOvoidmUgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEcharmUcOvoidmUgR(void *p = 0);
   static void *newArray_stdcLcLpairlEcharmUcOvoidmUgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEcharmUcOvoidmUgR(void *p);
   static void deleteArray_stdcLcLpairlEcharmUcOvoidmUgR(void *p);
   static void destruct_stdcLcLpairlEcharmUcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<char*,void*>*)
   {
      std::pair<char*,void*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<char*,void*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<char*,void*>", "string", 208,
                  typeid(std::pair<char*,void*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEcharmUcOvoidmUgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<char*,void*>) );
      instance.SetNew(&new_stdcLcLpairlEcharmUcOvoidmUgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEcharmUcOvoidmUgR);
      instance.SetDelete(&delete_stdcLcLpairlEcharmUcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEcharmUcOvoidmUgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEcharmUcOvoidmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<char*,void*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEcharmUcOvoidmUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<char*,void*>*)0x0)->GetClass();
      stdcLcLpairlEcharmUcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEcharmUcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEcharmUcOdoublegR_Dictionary();
   static void stdcLcLpairlEcharmUcOdoublegR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEcharmUcOdoublegR(void *p = 0);
   static void *newArray_stdcLcLpairlEcharmUcOdoublegR(Long_t size, void *p);
   static void delete_stdcLcLpairlEcharmUcOdoublegR(void *p);
   static void deleteArray_stdcLcLpairlEcharmUcOdoublegR(void *p);
   static void destruct_stdcLcLpairlEcharmUcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<char*,double>*)
   {
      std::pair<char*,double> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<char*,double>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<char*,double>", "string", 208,
                  typeid(std::pair<char*,double>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEcharmUcOdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<char*,double>) );
      instance.SetNew(&new_stdcLcLpairlEcharmUcOdoublegR);
      instance.SetNewArray(&newArray_stdcLcLpairlEcharmUcOdoublegR);
      instance.SetDelete(&delete_stdcLcLpairlEcharmUcOdoublegR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEcharmUcOdoublegR);
      instance.SetDestructor(&destruct_stdcLcLpairlEcharmUcOdoublegR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<char*,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEcharmUcOdoublegR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<char*,double>*)0x0)->GetClass();
      stdcLcLpairlEcharmUcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEcharmUcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEcharmUcOfloatgR_Dictionary();
   static void stdcLcLpairlEcharmUcOfloatgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEcharmUcOfloatgR(void *p = 0);
   static void *newArray_stdcLcLpairlEcharmUcOfloatgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEcharmUcOfloatgR(void *p);
   static void deleteArray_stdcLcLpairlEcharmUcOfloatgR(void *p);
   static void destruct_stdcLcLpairlEcharmUcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<char*,float>*)
   {
      std::pair<char*,float> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<char*,float>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<char*,float>", "string", 208,
                  typeid(std::pair<char*,float>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEcharmUcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<char*,float>) );
      instance.SetNew(&new_stdcLcLpairlEcharmUcOfloatgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEcharmUcOfloatgR);
      instance.SetDelete(&delete_stdcLcLpairlEcharmUcOfloatgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEcharmUcOfloatgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEcharmUcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<char*,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEcharmUcOfloatgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<char*,float>*)0x0)->GetClass();
      stdcLcLpairlEcharmUcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEcharmUcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEcharmUcOlonggR_Dictionary();
   static void stdcLcLpairlEcharmUcOlonggR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEcharmUcOlonggR(void *p = 0);
   static void *newArray_stdcLcLpairlEcharmUcOlonggR(Long_t size, void *p);
   static void delete_stdcLcLpairlEcharmUcOlonggR(void *p);
   static void deleteArray_stdcLcLpairlEcharmUcOlonggR(void *p);
   static void destruct_stdcLcLpairlEcharmUcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<char*,long>*)
   {
      std::pair<char*,long> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<char*,long>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<char*,long>", "string", 208,
                  typeid(std::pair<char*,long>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEcharmUcOlonggR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<char*,long>) );
      instance.SetNew(&new_stdcLcLpairlEcharmUcOlonggR);
      instance.SetNewArray(&newArray_stdcLcLpairlEcharmUcOlonggR);
      instance.SetDelete(&delete_stdcLcLpairlEcharmUcOlonggR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEcharmUcOlonggR);
      instance.SetDestructor(&destruct_stdcLcLpairlEcharmUcOlonggR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<char*,long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEcharmUcOlonggR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<char*,long>*)0x0)->GetClass();
      stdcLcLpairlEcharmUcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEcharmUcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *stdcLcLpairlEcharmUcOintgR_Dictionary();
   static void stdcLcLpairlEcharmUcOintgR_TClassManip(TClass*);
   static void *new_stdcLcLpairlEcharmUcOintgR(void *p = 0);
   static void *newArray_stdcLcLpairlEcharmUcOintgR(Long_t size, void *p);
   static void delete_stdcLcLpairlEcharmUcOintgR(void *p);
   static void deleteArray_stdcLcLpairlEcharmUcOintgR(void *p);
   static void destruct_stdcLcLpairlEcharmUcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::pair<char*,int>*)
   {
      std::pair<char*,int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::pair<char*,int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::pair<char*,int>", "string", 208,
                  typeid(std::pair<char*,int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLpairlEcharmUcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(std::pair<char*,int>) );
      instance.SetNew(&new_stdcLcLpairlEcharmUcOintgR);
      instance.SetNewArray(&newArray_stdcLcLpairlEcharmUcOintgR);
      instance.SetDelete(&delete_stdcLcLpairlEcharmUcOintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLpairlEcharmUcOintgR);
      instance.SetDestructor(&destruct_stdcLcLpairlEcharmUcOintgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::pair<char*,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLpairlEcharmUcOintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::pair<char*,int>*)0x0)->GetClass();
      stdcLcLpairlEcharmUcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLpairlEcharmUcOintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTVirtualIsAProxy_Dictionary();
   static void CppyyLegacycLcLTVirtualIsAProxy_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTVirtualIsAProxy(void *p);
   static void deleteArray_CppyyLegacycLcLTVirtualIsAProxy(void *p);
   static void destruct_CppyyLegacycLcLTVirtualIsAProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TVirtualIsAProxy*)
   {
      ::CppyyLegacy::TVirtualIsAProxy *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TVirtualIsAProxy));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TVirtualIsAProxy", "TVirtualIsAProxy.h", 27,
                  typeid(::CppyyLegacy::TVirtualIsAProxy), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTVirtualIsAProxy_Dictionary, isa_proxy, 0,
                  sizeof(::CppyyLegacy::TVirtualIsAProxy) );
      instance.SetDelete(&delete_CppyyLegacycLcLTVirtualIsAProxy);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTVirtualIsAProxy);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTVirtualIsAProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TVirtualIsAProxy*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TVirtualIsAProxy*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualIsAProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTVirtualIsAProxy_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualIsAProxy*)0x0)->GetClass();
      CppyyLegacycLcLTVirtualIsAProxy_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTVirtualIsAProxy_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTIsAProxy_Dictionary();
   static void CppyyLegacycLcLTIsAProxy_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTIsAProxy(void *p);
   static void deleteArray_CppyyLegacycLcLTIsAProxy(void *p);
   static void destruct_CppyyLegacycLcLTIsAProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TIsAProxy*)
   {
      ::CppyyLegacy::TIsAProxy *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TIsAProxy));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TIsAProxy", "TIsAProxy.h", 30,
                  typeid(::CppyyLegacy::TIsAProxy), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTIsAProxy_Dictionary, isa_proxy, 0,
                  sizeof(::CppyyLegacy::TIsAProxy) );
      instance.SetDelete(&delete_CppyyLegacycLcLTIsAProxy);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTIsAProxy);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTIsAProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TIsAProxy*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TIsAProxy*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TIsAProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTIsAProxy_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TIsAProxy*)0x0)->GetClass();
      CppyyLegacycLcLTIsAProxy_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTIsAProxy_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStorage(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStorage(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStorage(void *p);
   static void deleteArray_CppyyLegacycLcLTStorage(void *p);
   static void destruct_CppyyLegacycLcLTStorage(void *p);
   static void streamer_CppyyLegacycLcLTStorage(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStorage*)
   {
      ::CppyyLegacy::TStorage *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStorage >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStorage", ::CppyyLegacy::TStorage::Class_Version(), "TStorage.h", 36,
                  typeid(::CppyyLegacy::TStorage), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStorage::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TStorage) );
      instance.SetNew(&new_CppyyLegacycLcLTStorage);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStorage);
      instance.SetDelete(&delete_CppyyLegacycLcLTStorage);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStorage);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStorage);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStorage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStorage*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStorage*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStorage*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTObject(void *p = 0);
   static void *newArray_CppyyLegacycLcLTObject(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTObject(void *p);
   static void deleteArray_CppyyLegacycLcLTObject(void *p);
   static void destruct_CppyyLegacycLcLTObject(void *p);
   static void streamer_CppyyLegacycLcLTObject(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TObject*)
   {
      ::CppyyLegacy::TObject *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TObject >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TObject", ::CppyyLegacy::TObject::Class_Version(), "TObject.h", 36,
                  typeid(::CppyyLegacy::TObject), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TObject::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TObject) );
      instance.SetNew(&new_CppyyLegacycLcLTObject);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTObject);
      instance.SetDelete(&delete_CppyyLegacycLcLTObject);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTObject);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTObject);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TObject*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TObject*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTApplication(void *p);
   static void deleteArray_CppyyLegacycLcLTApplication(void *p);
   static void destruct_CppyyLegacycLcLTApplication(void *p);
   static void streamer_CppyyLegacycLcLTApplication(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TApplication*)
   {
      ::CppyyLegacy::TApplication *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TApplication >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TApplication", ::CppyyLegacy::TApplication::Class_Version(), "TApplication.h", 34,
                  typeid(::CppyyLegacy::TApplication), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TApplication::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TApplication) );
      instance.SetDelete(&delete_CppyyLegacycLcLTApplication);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTApplication);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTApplication);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TApplication*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TApplication*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TApplication*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTSubString_Dictionary();
   static void CppyyLegacycLcLTSubString_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTSubString(void *p);
   static void deleteArray_CppyyLegacycLcLTSubString(void *p);
   static void destruct_CppyyLegacycLcLTSubString(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TSubString*)
   {
      ::CppyyLegacy::TSubString *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TSubString));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TSubString", "TString.h", 80,
                  typeid(::CppyyLegacy::TSubString), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTSubString_Dictionary, isa_proxy, 0,
                  sizeof(::CppyyLegacy::TSubString) );
      instance.SetDelete(&delete_CppyyLegacycLcLTSubString);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTSubString);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTSubString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TSubString*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TSubString*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TSubString*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTSubString_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSubString*)0x0)->GetClass();
      CppyyLegacycLcLTSubString_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTSubString_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTString(void *p = 0);
   static void *newArray_CppyyLegacycLcLTString(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTString(void *p);
   static void deleteArray_CppyyLegacycLcLTString(void *p);
   static void destruct_CppyyLegacycLcLTString(void *p);
   static void streamer_CppyyLegacycLcLTString(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TString*)
   {
      ::CppyyLegacy::TString *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TString >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TString", ::CppyyLegacy::TString::Class_Version(), "TString.h", 133,
                  typeid(::CppyyLegacy::TString), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TString::Dictionary, isa_proxy, 19,
                  sizeof(::CppyyLegacy::TString) );
      instance.SetNew(&new_CppyyLegacycLcLTString);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTString);
      instance.SetDelete(&delete_CppyyLegacycLcLTString);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTString);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTString);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TString*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TString*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TString*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTNamed(void *p = 0);
   static void *newArray_CppyyLegacycLcLTNamed(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTNamed(void *p);
   static void deleteArray_CppyyLegacycLcLTNamed(void *p);
   static void destruct_CppyyLegacycLcLTNamed(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TNamed*)
   {
      ::CppyyLegacy::TNamed *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TNamed >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TNamed", ::CppyyLegacy::TNamed::Class_Version(), "TNamed.h", 30,
                  typeid(::CppyyLegacy::TNamed), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TNamed::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TNamed) );
      instance.SetNew(&new_CppyyLegacycLcLTNamed);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTNamed);
      instance.SetDelete(&delete_CppyyLegacycLcLTNamed);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTNamed);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTNamed);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TNamed*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TNamed*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TNamed*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTDictionary(void *p);
   static void deleteArray_CppyyLegacycLcLTDictionary(void *p);
   static void destruct_CppyyLegacycLcLTDictionary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TDictionary*)
   {
      ::CppyyLegacy::TDictionary *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TDictionary >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TDictionary", ::CppyyLegacy::TDictionary::Class_Version(), "TDictionary.h", 159,
                  typeid(::CppyyLegacy::TDictionary), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TDictionary::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TDictionary) );
      instance.SetDelete(&delete_CppyyLegacycLcLTDictionary);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTDictionary);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTDictionary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TDictionary*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TDictionary*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TDictionary*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTDataType(void *p = 0);
   static void *newArray_CppyyLegacycLcLTDataType(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTDataType(void *p);
   static void deleteArray_CppyyLegacycLcLTDataType(void *p);
   static void destruct_CppyyLegacycLcLTDataType(void *p);
   static void streamer_CppyyLegacycLcLTDataType(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TDataType*)
   {
      ::CppyyLegacy::TDataType *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TDataType >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TDataType", ::CppyyLegacy::TDataType::Class_Version(), "TDataType.h", 46,
                  typeid(::CppyyLegacy::TDataType), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TDataType::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TDataType) );
      instance.SetNew(&new_CppyyLegacycLcLTDataType);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTDataType);
      instance.SetDelete(&delete_CppyyLegacycLcLTDataType);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTDataType);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTDataType);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTDataType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TDataType*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TDataType*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TDataType*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTIterator(void *p);
   static void deleteArray_CppyyLegacycLcLTIterator(void *p);
   static void destruct_CppyyLegacycLcLTIterator(void *p);
   static void streamer_CppyyLegacycLcLTIterator(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TIterator*)
   {
      ::CppyyLegacy::TIterator *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TIterator >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TIterator", ::CppyyLegacy::TIterator::Class_Version(), "TIterator.h", 32,
                  typeid(::CppyyLegacy::TIterator), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TIterator::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TIterator) );
      instance.SetDelete(&delete_CppyyLegacycLcLTIterator);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTIterator);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTIterator);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTIterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TIterator*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TIterator*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TIterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTVirtualMutex(void *p);
   static void deleteArray_CppyyLegacycLcLTVirtualMutex(void *p);
   static void destruct_CppyyLegacycLcLTVirtualMutex(void *p);
   static void streamer_CppyyLegacycLcLTVirtualMutex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TVirtualMutex*)
   {
      ::CppyyLegacy::TVirtualMutex *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TVirtualMutex >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TVirtualMutex", ::CppyyLegacy::TVirtualMutex::Class_Version(), "TVirtualMutex.h", 37,
                  typeid(::CppyyLegacy::TVirtualMutex), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TVirtualMutex::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TVirtualMutex) );
      instance.SetDelete(&delete_CppyyLegacycLcLTVirtualMutex);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTVirtualMutex);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTVirtualMutex);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTVirtualMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TVirtualMutex*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TVirtualMutex*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTLockGuard(void *p);
   static void deleteArray_CppyyLegacycLcLTLockGuard(void *p);
   static void destruct_CppyyLegacycLcLTLockGuard(void *p);
   static void streamer_CppyyLegacycLcLTLockGuard(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TLockGuard*)
   {
      ::CppyyLegacy::TLockGuard *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TLockGuard >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TLockGuard", ::CppyyLegacy::TLockGuard::Class_Version(), "TVirtualMutex.h", 72,
                  typeid(::CppyyLegacy::TLockGuard), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TLockGuard::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TLockGuard) );
      instance.SetDelete(&delete_CppyyLegacycLcLTLockGuard);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTLockGuard);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTLockGuard);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTLockGuard);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TLockGuard*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TLockGuard*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TLockGuard*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTVirtualRWMutex(void *p);
   static void deleteArray_CppyyLegacycLcLTVirtualRWMutex(void *p);
   static void destruct_CppyyLegacycLcLTVirtualRWMutex(void *p);
   static void streamer_CppyyLegacycLcLTVirtualRWMutex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TVirtualRWMutex*)
   {
      ::CppyyLegacy::TVirtualRWMutex *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TVirtualRWMutex >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TVirtualRWMutex", ::CppyyLegacy::TVirtualRWMutex::Class_Version(), "TVirtualRWMutex.h", 36,
                  typeid(::CppyyLegacy::TVirtualRWMutex), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TVirtualRWMutex::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TVirtualRWMutex) );
      instance.SetDelete(&delete_CppyyLegacycLcLTVirtualRWMutex);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTVirtualRWMutex);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTVirtualRWMutex);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTVirtualRWMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TVirtualRWMutex*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TVirtualRWMutex*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualRWMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTReadLockGuard(void *p);
   static void deleteArray_CppyyLegacycLcLTReadLockGuard(void *p);
   static void destruct_CppyyLegacycLcLTReadLockGuard(void *p);
   static void streamer_CppyyLegacycLcLTReadLockGuard(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TReadLockGuard*)
   {
      ::CppyyLegacy::TReadLockGuard *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TReadLockGuard >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TReadLockGuard", ::CppyyLegacy::TReadLockGuard::Class_Version(), "TVirtualRWMutex.h", 94,
                  typeid(::CppyyLegacy::TReadLockGuard), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TReadLockGuard::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TReadLockGuard) );
      instance.SetDelete(&delete_CppyyLegacycLcLTReadLockGuard);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTReadLockGuard);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTReadLockGuard);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTReadLockGuard);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TReadLockGuard*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TReadLockGuard*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TReadLockGuard*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTWriteLockGuard(void *p);
   static void deleteArray_CppyyLegacycLcLTWriteLockGuard(void *p);
   static void destruct_CppyyLegacycLcLTWriteLockGuard(void *p);
   static void streamer_CppyyLegacycLcLTWriteLockGuard(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TWriteLockGuard*)
   {
      ::CppyyLegacy::TWriteLockGuard *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TWriteLockGuard >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TWriteLockGuard", ::CppyyLegacy::TWriteLockGuard::Class_Version(), "TVirtualRWMutex.h", 113,
                  typeid(::CppyyLegacy::TWriteLockGuard), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TWriteLockGuard::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TWriteLockGuard) );
      instance.SetDelete(&delete_CppyyLegacycLcLTWriteLockGuard);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTWriteLockGuard);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTWriteLockGuard);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTWriteLockGuard);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TWriteLockGuard*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TWriteLockGuard*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TWriteLockGuard*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTCollection(void *p);
   static void deleteArray_CppyyLegacycLcLTCollection(void *p);
   static void destruct_CppyyLegacycLcLTCollection(void *p);
   static void streamer_CppyyLegacycLcLTCollection(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TCollection*)
   {
      ::CppyyLegacy::TCollection *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TCollection >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TCollection", ::CppyyLegacy::TCollection::Class_Version(), "TCollection.h", 61,
                  typeid(::CppyyLegacy::TCollection), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TCollection::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TCollection) );
      instance.SetDelete(&delete_CppyyLegacycLcLTCollection);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTCollection);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTCollection);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TCollection*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TCollection*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTIter(void *p);
   static void deleteArray_CppyyLegacycLcLTIter(void *p);
   static void destruct_CppyyLegacycLcLTIter(void *p);
   static void streamer_CppyyLegacycLcLTIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TIter*)
   {
      ::CppyyLegacy::TIter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TIter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TIter", ::CppyyLegacy::TIter::Class_Version(), "TCollection.h", 220,
                  typeid(::CppyyLegacy::TIter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TIter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TIter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTIter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTIter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTIter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TIter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TIter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTSeqCollection(void *p);
   static void deleteArray_CppyyLegacycLcLTSeqCollection(void *p);
   static void destruct_CppyyLegacycLcLTSeqCollection(void *p);
   static void streamer_CppyyLegacycLcLTSeqCollection(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TSeqCollection*)
   {
      ::CppyyLegacy::TSeqCollection *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TSeqCollection >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TSeqCollection", ::CppyyLegacy::TSeqCollection::Class_Version(), "TSeqCollection.h", 29,
                  typeid(::CppyyLegacy::TSeqCollection), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TSeqCollection::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TSeqCollection) );
      instance.SetDelete(&delete_CppyyLegacycLcLTSeqCollection);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTSeqCollection);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTSeqCollection);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTSeqCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TSeqCollection*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TSeqCollection*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TSeqCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTObjArray(void *p = 0);
   static void *newArray_CppyyLegacycLcLTObjArray(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTObjArray(void *p);
   static void deleteArray_CppyyLegacycLcLTObjArray(void *p);
   static void destruct_CppyyLegacycLcLTObjArray(void *p);
   static void streamer_CppyyLegacycLcLTObjArray(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TObjArray*)
   {
      ::CppyyLegacy::TObjArray *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TObjArray >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TObjArray", ::CppyyLegacy::TObjArray::Class_Version(), "TObjArray.h", 39,
                  typeid(::CppyyLegacy::TObjArray), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TObjArray::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TObjArray) );
      instance.SetNew(&new_CppyyLegacycLcLTObjArray);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTObjArray);
      instance.SetDelete(&delete_CppyyLegacycLcLTObjArray);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTObjArray);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTObjArray);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTObjArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TObjArray*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TObjArray*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTObjArrayIter(void *p);
   static void deleteArray_CppyyLegacycLcLTObjArrayIter(void *p);
   static void destruct_CppyyLegacycLcLTObjArrayIter(void *p);
   static void streamer_CppyyLegacycLcLTObjArrayIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TObjArrayIter*)
   {
      ::CppyyLegacy::TObjArrayIter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TObjArrayIter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TObjArrayIter", ::CppyyLegacy::TObjArrayIter::Class_Version(), "TObjArray.h", 123,
                  typeid(::CppyyLegacy::TObjArrayIter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TObjArrayIter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TObjArrayIter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTObjArrayIter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTObjArrayIter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTObjArrayIter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTObjArrayIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TObjArrayIter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TObjArrayIter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArrayIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTObjString(void *p = 0);
   static void *newArray_CppyyLegacycLcLTObjString(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTObjString(void *p);
   static void deleteArray_CppyyLegacycLcLTObjString(void *p);
   static void destruct_CppyyLegacycLcLTObjString(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TObjString*)
   {
      ::CppyyLegacy::TObjString *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TObjString >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TObjString", ::CppyyLegacy::TObjString::Class_Version(), "TObjString.h", 30,
                  typeid(::CppyyLegacy::TObjString), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TObjString::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TObjString) );
      instance.SetNew(&new_CppyyLegacycLcLTObjString);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTObjString);
      instance.SetDelete(&delete_CppyyLegacycLcLTObjString);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTObjString);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTObjString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TObjString*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TObjString*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TObjString*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTClass(void *p = 0);
   static void *newArray_CppyyLegacycLcLTClass(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTClass(void *p);
   static void deleteArray_CppyyLegacycLcLTClass(void *p);
   static void destruct_CppyyLegacycLcLTClass(void *p);
   static void streamer_CppyyLegacycLcLTClass(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TClass*)
   {
      ::CppyyLegacy::TClass *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TClass >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TClass", ::CppyyLegacy::TClass::Class_Version(), "TClass.h", 71,
                  typeid(::CppyyLegacy::TClass), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TClass::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TClass) );
      instance.SetNew(&new_CppyyLegacycLcLTClass);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTClass);
      instance.SetDelete(&delete_CppyyLegacycLcLTClass);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTClass);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTClass);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TClass*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TClass*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TClass*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTBuffer(void *p);
   static void deleteArray_CppyyLegacycLcLTBuffer(void *p);
   static void destruct_CppyyLegacycLcLTBuffer(void *p);
   static void streamer_CppyyLegacycLcLTBuffer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TBuffer*)
   {
      ::CppyyLegacy::TBuffer *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TBuffer >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TBuffer", ::CppyyLegacy::TBuffer::Class_Version(), "TBuffer.h", 42,
                  typeid(::CppyyLegacy::TBuffer), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TBuffer::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TBuffer) );
      instance.SetDelete(&delete_CppyyLegacycLcLTBuffer);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTBuffer);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTBuffer);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTBuffer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TBuffer*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TBuffer*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TBuffer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTDatime(void *p = 0);
   static void *newArray_CppyyLegacycLcLTDatime(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTDatime(void *p);
   static void deleteArray_CppyyLegacycLcLTDatime(void *p);
   static void destruct_CppyyLegacycLcLTDatime(void *p);
   static void streamer_CppyyLegacycLcLTDatime(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TDatime*)
   {
      ::CppyyLegacy::TDatime *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TDatime >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TDatime", ::CppyyLegacy::TDatime::Class_Version(), "TDatime.h", 38,
                  typeid(::CppyyLegacy::TDatime), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TDatime::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TDatime) );
      instance.SetNew(&new_CppyyLegacycLcLTDatime);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTDatime);
      instance.SetDelete(&delete_CppyyLegacycLcLTDatime);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTDatime);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTDatime);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTDatime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TDatime*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TDatime*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TDatime*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTList(void *p = 0);
   static void *newArray_CppyyLegacycLcLTList(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTList(void *p);
   static void deleteArray_CppyyLegacycLcLTList(void *p);
   static void destruct_CppyyLegacycLcLTList(void *p);
   static void streamer_CppyyLegacycLcLTList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TList*)
   {
      ::CppyyLegacy::TList *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TList >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TList", ::CppyyLegacy::TList::Class_Version(), "TList.h", 46,
                  typeid(::CppyyLegacy::TList), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TList::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TList) );
      instance.SetNew(&new_CppyyLegacycLcLTList);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTList);
      instance.SetDelete(&delete_CppyyLegacycLcLTList);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTList);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTList);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TList*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TList*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTListIter(void *p);
   static void deleteArray_CppyyLegacycLcLTListIter(void *p);
   static void destruct_CppyyLegacycLcLTListIter(void *p);
   static void streamer_CppyyLegacycLcLTListIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TListIter*)
   {
      ::CppyyLegacy::TListIter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TListIter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TListIter", ::CppyyLegacy::TListIter::Class_Version(), "TList.h", 199,
                  typeid(::CppyyLegacy::TListIter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TListIter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TListIter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTListIter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTListIter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTListIter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTListIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TListIter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TListIter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TListIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTUUID(void *p = 0);
   static void *newArray_CppyyLegacycLcLTUUID(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTUUID(void *p);
   static void deleteArray_CppyyLegacycLcLTUUID(void *p);
   static void destruct_CppyyLegacycLcLTUUID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TUUID*)
   {
      ::CppyyLegacy::TUUID *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TUUID >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TUUID", ::CppyyLegacy::TUUID::Class_Version(), "TUUID.h", 45,
                  typeid(::CppyyLegacy::TUUID), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TUUID::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TUUID) );
      instance.SetNew(&new_CppyyLegacycLcLTUUID);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTUUID);
      instance.SetDelete(&delete_CppyyLegacycLcLTUUID);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTUUID);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTUUID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TUUID*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TUUID*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TUUID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTDirectory(void *p = 0);
   static void *newArray_CppyyLegacycLcLTDirectory(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTDirectory(void *p);
   static void deleteArray_CppyyLegacycLcLTDirectory(void *p);
   static void destruct_CppyyLegacycLcLTDirectory(void *p);
   static void streamer_CppyyLegacycLcLTDirectory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TDirectory*)
   {
      ::CppyyLegacy::TDirectory *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TDirectory >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TDirectory", ::CppyyLegacy::TDirectory::Class_Version(), "TDirectory.h", 35,
                  typeid(::CppyyLegacy::TDirectory), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TDirectory::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TDirectory) );
      instance.SetNew(&new_CppyyLegacycLcLTDirectory);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTDirectory);
      instance.SetDelete(&delete_CppyyLegacycLcLTDirectory);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTDirectory);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTDirectory);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTDirectory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TDirectory*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TDirectory*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTEnvRec(void *p = 0);
   static void *newArray_CppyyLegacycLcLTEnvRec(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTEnvRec(void *p);
   static void deleteArray_CppyyLegacycLcLTEnvRec(void *p);
   static void destruct_CppyyLegacycLcLTEnvRec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TEnvRec*)
   {
      ::CppyyLegacy::TEnvRec *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TEnvRec >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TEnvRec", ::CppyyLegacy::TEnvRec::Class_Version(), "TEnv.h", 89,
                  typeid(::CppyyLegacy::TEnvRec), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TEnvRec::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TEnvRec) );
      instance.SetNew(&new_CppyyLegacycLcLTEnvRec);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTEnvRec);
      instance.SetDelete(&delete_CppyyLegacycLcLTEnvRec);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTEnvRec);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTEnvRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TEnvRec*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TEnvRec*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TEnvRec*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTEnv(void *p = 0);
   static void *newArray_CppyyLegacycLcLTEnv(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTEnv(void *p);
   static void deleteArray_CppyyLegacycLcLTEnv(void *p);
   static void destruct_CppyyLegacycLcLTEnv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TEnv*)
   {
      ::CppyyLegacy::TEnv *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TEnv >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TEnv", ::CppyyLegacy::TEnv::Class_Version(), "TEnv.h", 127,
                  typeid(::CppyyLegacy::TEnv), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TEnv::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TEnv) );
      instance.SetNew(&new_CppyyLegacycLcLTEnv);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTEnv);
      instance.SetDelete(&delete_CppyyLegacycLcLTEnv);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTEnv);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTEnv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TEnv*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TEnv*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TEnv*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTInetAddress(void *p = 0);
   static void *newArray_CppyyLegacycLcLTInetAddress(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTInetAddress(void *p);
   static void deleteArray_CppyyLegacycLcLTInetAddress(void *p);
   static void destruct_CppyyLegacycLcLTInetAddress(void *p);
   static void streamer_CppyyLegacycLcLTInetAddress(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TInetAddress*)
   {
      ::CppyyLegacy::TInetAddress *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TInetAddress >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TInetAddress", ::CppyyLegacy::TInetAddress::Class_Version(), "TInetAddress.h", 35,
                  typeid(::CppyyLegacy::TInetAddress), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TInetAddress::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TInetAddress) );
      instance.SetNew(&new_CppyyLegacycLcLTInetAddress);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTInetAddress);
      instance.SetDelete(&delete_CppyyLegacycLcLTInetAddress);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTInetAddress);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTInetAddress);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTInetAddress);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TInetAddress*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TInetAddress*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TInetAddress*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTMD5(void *p = 0);
   static void *newArray_CppyyLegacycLcLTMD5(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTMD5(void *p);
   static void deleteArray_CppyyLegacycLcLTMD5(void *p);
   static void destruct_CppyyLegacycLcLTMD5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMD5*)
   {
      ::CppyyLegacy::TMD5 *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TMD5 >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMD5", ::CppyyLegacy::TMD5::Class_Version(), "TMD5.h", 46,
                  typeid(::CppyyLegacy::TMD5), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TMD5::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TMD5) );
      instance.SetNew(&new_CppyyLegacycLcLTMD5);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTMD5);
      instance.SetDelete(&delete_CppyyLegacycLcLTMD5);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMD5);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMD5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMD5*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMD5*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMD5*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTMemberInspector(void *p = 0);
   static void *newArray_CppyyLegacycLcLTMemberInspector(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTMemberInspector(void *p);
   static void deleteArray_CppyyLegacycLcLTMemberInspector(void *p);
   static void destruct_CppyyLegacycLcLTMemberInspector(void *p);
   static void streamer_CppyyLegacycLcLTMemberInspector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMemberInspector*)
   {
      ::CppyyLegacy::TMemberInspector *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TMemberInspector >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMemberInspector", ::CppyyLegacy::TMemberInspector::Class_Version(), "TMemberInspector.h", 34,
                  typeid(::CppyyLegacy::TMemberInspector), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TMemberInspector::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TMemberInspector) );
      instance.SetNew(&new_CppyyLegacycLcLTMemberInspector);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTMemberInspector);
      instance.SetDelete(&delete_CppyyLegacycLcLTMemberInspector);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMemberInspector);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMemberInspector);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTMemberInspector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMemberInspector*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMemberInspector*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMemberInspector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTProcessID(void *p = 0);
   static void *newArray_CppyyLegacycLcLTProcessID(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTProcessID(void *p);
   static void deleteArray_CppyyLegacycLcLTProcessID(void *p);
   static void destruct_CppyyLegacycLcLTProcessID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TProcessID*)
   {
      ::CppyyLegacy::TProcessID *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TProcessID >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TProcessID", ::CppyyLegacy::TProcessID::Class_Version(), "TProcessID.h", 70,
                  typeid(::CppyyLegacy::TProcessID), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TProcessID::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TProcessID) );
      instance.SetNew(&new_CppyyLegacycLcLTProcessID);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTProcessID);
      instance.SetDelete(&delete_CppyyLegacycLcLTProcessID);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTProcessID);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTProcessID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TProcessID*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TProcessID*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTProcessUUID(void *p = 0);
   static void *newArray_CppyyLegacycLcLTProcessUUID(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTProcessUUID(void *p);
   static void deleteArray_CppyyLegacycLcLTProcessUUID(void *p);
   static void destruct_CppyyLegacycLcLTProcessUUID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TProcessUUID*)
   {
      ::CppyyLegacy::TProcessUUID *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TProcessUUID >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TProcessUUID", ::CppyyLegacy::TProcessUUID::Class_Version(), "TProcessUUID.h", 35,
                  typeid(::CppyyLegacy::TProcessUUID), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TProcessUUID::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TProcessUUID) );
      instance.SetNew(&new_CppyyLegacycLcLTProcessUUID);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTProcessUUID);
      instance.SetDelete(&delete_CppyyLegacycLcLTProcessUUID);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTProcessUUID);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTProcessUUID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TProcessUUID*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TProcessUUID*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessUUID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTRegexp(void *p);
   static void deleteArray_CppyyLegacycLcLTRegexp(void *p);
   static void destruct_CppyyLegacycLcLTRegexp(void *p);
   static void streamer_CppyyLegacycLcLTRegexp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TRegexp*)
   {
      ::CppyyLegacy::TRegexp *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TRegexp >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TRegexp", ::CppyyLegacy::TRegexp::Class_Version(), "TRegexp.h", 32,
                  typeid(::CppyyLegacy::TRegexp), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TRegexp::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TRegexp) );
      instance.SetDelete(&delete_CppyyLegacycLcLTRegexp);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTRegexp);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTRegexp);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTRegexp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TRegexp*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TRegexp*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TRegexp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTROOT(void *p);
   static void deleteArray_CppyyLegacycLcLTROOT(void *p);
   static void destruct_CppyyLegacycLcLTROOT(void *p);
   static void streamer_CppyyLegacycLcLTROOT(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TROOT*)
   {
      ::CppyyLegacy::TROOT *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TROOT >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TROOT", ::CppyyLegacy::TROOT::Class_Version(), "TROOT.h", 72,
                  typeid(::CppyyLegacy::TROOT), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TROOT::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TROOT) );
      instance.SetDelete(&delete_CppyyLegacycLcLTROOT);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTROOT);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTROOT);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTROOT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TROOT*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TROOT*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TROOT*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTSignalHandler(void *p);
   static void deleteArray_CppyyLegacycLcLTSignalHandler(void *p);
   static void destruct_CppyyLegacycLcLTSignalHandler(void *p);
   static void streamer_CppyyLegacycLcLTSignalHandler(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TSignalHandler*)
   {
      ::CppyyLegacy::TSignalHandler *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TSignalHandler >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TSignalHandler", ::CppyyLegacy::TSignalHandler::Class_Version(), "TSysEvtHandler.h", 59,
                  typeid(::CppyyLegacy::TSignalHandler), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TSignalHandler::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TSignalHandler) );
      instance.SetDelete(&delete_CppyyLegacycLcLTSignalHandler);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTSignalHandler);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTSignalHandler);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTSignalHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TSignalHandler*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TSignalHandler*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TSignalHandler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTStdExceptionHandler(void *p);
   static void deleteArray_CppyyLegacycLcLTStdExceptionHandler(void *p);
   static void destruct_CppyyLegacycLcLTStdExceptionHandler(void *p);
   static void streamer_CppyyLegacycLcLTStdExceptionHandler(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStdExceptionHandler*)
   {
      ::CppyyLegacy::TStdExceptionHandler *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStdExceptionHandler >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStdExceptionHandler", ::CppyyLegacy::TStdExceptionHandler::Class_Version(), "TSysEvtHandler.h", 106,
                  typeid(::CppyyLegacy::TStdExceptionHandler), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStdExceptionHandler::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TStdExceptionHandler) );
      instance.SetDelete(&delete_CppyyLegacycLcLTStdExceptionHandler);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStdExceptionHandler);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStdExceptionHandler);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStdExceptionHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStdExceptionHandler*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStdExceptionHandler*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStdExceptionHandler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTTime(void *p = 0);
   static void *newArray_CppyyLegacycLcLTTime(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTTime(void *p);
   static void deleteArray_CppyyLegacycLcLTTime(void *p);
   static void destruct_CppyyLegacycLcLTTime(void *p);
   static void streamer_CppyyLegacycLcLTTime(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TTime*)
   {
      ::CppyyLegacy::TTime *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TTime >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TTime", ::CppyyLegacy::TTime::Class_Version(), "TTime.h", 29,
                  typeid(::CppyyLegacy::TTime), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TTime::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TTime) );
      instance.SetNew(&new_CppyyLegacycLcLTTime);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTTime);
      instance.SetDelete(&delete_CppyyLegacycLcLTTime);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTTime);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTTime);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TTime*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TTime*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TTime*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLFileStat_t_Dictionary();
   static void CppyyLegacycLcLFileStat_t_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLFileStat_t(void *p = 0);
   static void *newArray_CppyyLegacycLcLFileStat_t(Long_t size, void *p);
   static void delete_CppyyLegacycLcLFileStat_t(void *p);
   static void deleteArray_CppyyLegacycLcLFileStat_t(void *p);
   static void destruct_CppyyLegacycLcLFileStat_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::FileStat_t*)
   {
      ::CppyyLegacy::FileStat_t *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::FileStat_t));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::FileStat_t", "TSystem.h", 129,
                  typeid(::CppyyLegacy::FileStat_t), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLFileStat_t_Dictionary, isa_proxy, 0,
                  sizeof(::CppyyLegacy::FileStat_t) );
      instance.SetNew(&new_CppyyLegacycLcLFileStat_t);
      instance.SetNewArray(&newArray_CppyyLegacycLcLFileStat_t);
      instance.SetDelete(&delete_CppyyLegacycLcLFileStat_t);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLFileStat_t);
      instance.SetDestructor(&destruct_CppyyLegacycLcLFileStat_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::FileStat_t*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::FileStat_t*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::FileStat_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLFileStat_t_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::FileStat_t*)0x0)->GetClass();
      CppyyLegacycLcLFileStat_t_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLFileStat_t_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLUserGroup_t_Dictionary();
   static void CppyyLegacycLcLUserGroup_t_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLUserGroup_t(void *p = 0);
   static void *newArray_CppyyLegacycLcLUserGroup_t(Long_t size, void *p);
   static void delete_CppyyLegacycLcLUserGroup_t(void *p);
   static void deleteArray_CppyyLegacycLcLUserGroup_t(void *p);
   static void destruct_CppyyLegacycLcLUserGroup_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::UserGroup_t*)
   {
      ::CppyyLegacy::UserGroup_t *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::UserGroup_t));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::UserGroup_t", "TSystem.h", 143,
                  typeid(::CppyyLegacy::UserGroup_t), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLUserGroup_t_Dictionary, isa_proxy, 0,
                  sizeof(::CppyyLegacy::UserGroup_t) );
      instance.SetNew(&new_CppyyLegacycLcLUserGroup_t);
      instance.SetNewArray(&newArray_CppyyLegacycLcLUserGroup_t);
      instance.SetDelete(&delete_CppyyLegacycLcLUserGroup_t);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLUserGroup_t);
      instance.SetDestructor(&destruct_CppyyLegacycLcLUserGroup_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::UserGroup_t*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::UserGroup_t*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::UserGroup_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLUserGroup_t_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::UserGroup_t*)0x0)->GetClass();
      CppyyLegacycLcLUserGroup_t_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLUserGroup_t_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLRedirectHandle_t_Dictionary();
   static void CppyyLegacycLcLRedirectHandle_t_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLRedirectHandle_t(void *p = 0);
   static void *newArray_CppyyLegacycLcLRedirectHandle_t(Long_t size, void *p);
   static void delete_CppyyLegacycLcLRedirectHandle_t(void *p);
   static void deleteArray_CppyyLegacycLcLRedirectHandle_t(void *p);
   static void destruct_CppyyLegacycLcLRedirectHandle_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::RedirectHandle_t*)
   {
      ::CppyyLegacy::RedirectHandle_t *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::RedirectHandle_t));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::RedirectHandle_t", "TSystem.h", 155,
                  typeid(::CppyyLegacy::RedirectHandle_t), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLRedirectHandle_t_Dictionary, isa_proxy, 0,
                  sizeof(::CppyyLegacy::RedirectHandle_t) );
      instance.SetNew(&new_CppyyLegacycLcLRedirectHandle_t);
      instance.SetNewArray(&newArray_CppyyLegacycLcLRedirectHandle_t);
      instance.SetDelete(&delete_CppyyLegacycLcLRedirectHandle_t);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLRedirectHandle_t);
      instance.SetDestructor(&destruct_CppyyLegacycLcLRedirectHandle_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::RedirectHandle_t*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::RedirectHandle_t*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::RedirectHandle_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLRedirectHandle_t_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::RedirectHandle_t*)0x0)->GetClass();
      CppyyLegacycLcLRedirectHandle_t_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLRedirectHandle_t_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTSystem(void *p = 0);
   static void *newArray_CppyyLegacycLcLTSystem(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTSystem(void *p);
   static void deleteArray_CppyyLegacycLcLTSystem(void *p);
   static void destruct_CppyyLegacycLcLTSystem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TSystem*)
   {
      ::CppyyLegacy::TSystem *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TSystem >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TSystem", ::CppyyLegacy::TSystem::Class_Version(), "TSystem.h", 186,
                  typeid(::CppyyLegacy::TSystem), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TSystem::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TSystem) );
      instance.SetNew(&new_CppyyLegacycLcLTSystem);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTSystem);
      instance.SetDelete(&delete_CppyyLegacycLcLTSystem);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTSystem);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTSystem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TSystem*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TSystem*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TSystem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTTimeStamp(void *p = 0);
   static void *newArray_CppyyLegacycLcLTTimeStamp(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTTimeStamp(void *p);
   static void deleteArray_CppyyLegacycLcLTTimeStamp(void *p);
   static void destruct_CppyyLegacycLcLTTimeStamp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TTimeStamp*)
   {
      ::CppyyLegacy::TTimeStamp *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TTimeStamp >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TTimeStamp", ::CppyyLegacy::TTimeStamp::Class_Version(), "TTimeStamp.h", 80,
                  typeid(::CppyyLegacy::TTimeStamp), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TTimeStamp::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TTimeStamp) );
      instance.SetNew(&new_CppyyLegacycLcLTTimeStamp);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTTimeStamp);
      instance.SetDelete(&delete_CppyyLegacycLcLTTimeStamp);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTTimeStamp);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTTimeStamp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TTimeStamp*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TTimeStamp*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TTimeStamp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTHashTable(void *p = 0);
   static void *newArray_CppyyLegacycLcLTHashTable(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTHashTable(void *p);
   static void deleteArray_CppyyLegacycLcLTHashTable(void *p);
   static void destruct_CppyyLegacycLcLTHashTable(void *p);
   static void streamer_CppyyLegacycLcLTHashTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::THashTable*)
   {
      ::CppyyLegacy::THashTable *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::THashTable >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::THashTable", ::CppyyLegacy::THashTable::Class_Version(), "THashTable.h", 36,
                  typeid(::CppyyLegacy::THashTable), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::THashTable::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::THashTable) );
      instance.SetNew(&new_CppyyLegacycLcLTHashTable);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTHashTable);
      instance.SetDelete(&delete_CppyyLegacycLcLTHashTable);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTHashTable);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTHashTable);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTHashTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::THashTable*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::THashTable*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::THashTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTHashTableIter(void *p);
   static void deleteArray_CppyyLegacycLcLTHashTableIter(void *p);
   static void destruct_CppyyLegacycLcLTHashTableIter(void *p);
   static void streamer_CppyyLegacycLcLTHashTableIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::THashTableIter*)
   {
      ::CppyyLegacy::THashTableIter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::THashTableIter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::THashTableIter", ::CppyyLegacy::THashTableIter::Class_Version(), "THashTable.h", 112,
                  typeid(::CppyyLegacy::THashTableIter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::THashTableIter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::THashTableIter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTHashTableIter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTHashTableIter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTHashTableIter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTHashTableIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::THashTableIter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::THashTableIter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::THashTableIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTMap(void *p = 0);
   static void *newArray_CppyyLegacycLcLTMap(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTMap(void *p);
   static void deleteArray_CppyyLegacycLcLTMap(void *p);
   static void destruct_CppyyLegacycLcLTMap(void *p);
   static void streamer_CppyyLegacycLcLTMap(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMap*)
   {
      ::CppyyLegacy::TMap *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TMap >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMap", ::CppyyLegacy::TMap::Class_Version(), "TMap.h", 39,
                  typeid(::CppyyLegacy::TMap), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TMap::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TMap) );
      instance.SetNew(&new_CppyyLegacycLcLTMap);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTMap);
      instance.SetDelete(&delete_CppyyLegacycLcLTMap);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMap);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMap);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMap*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMap*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTPair(void *p);
   static void deleteArray_CppyyLegacycLcLTPair(void *p);
   static void destruct_CppyyLegacycLcLTPair(void *p);
   static void streamer_CppyyLegacycLcLTPair(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TPair*)
   {
      ::CppyyLegacy::TPair *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TPair >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TPair", ::CppyyLegacy::TPair::Class_Version(), "TMap.h", 99,
                  typeid(::CppyyLegacy::TPair), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TPair::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TPair) );
      instance.SetDelete(&delete_CppyyLegacycLcLTPair);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTPair);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTPair);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTPair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TPair*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TPair*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TPair*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTMapIter(void *p);
   static void deleteArray_CppyyLegacycLcLTMapIter(void *p);
   static void destruct_CppyyLegacycLcLTMapIter(void *p);
   static void streamer_CppyyLegacycLcLTMapIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMapIter*)
   {
      ::CppyyLegacy::TMapIter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TMapIter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMapIter", ::CppyyLegacy::TMapIter::Class_Version(), "TMap.h", 140,
                  typeid(::CppyyLegacy::TMapIter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TMapIter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TMapIter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTMapIter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMapIter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMapIter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTMapIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMapIter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMapIter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMapIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTUrl(void *p = 0);
   static void *newArray_CppyyLegacycLcLTUrl(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTUrl(void *p);
   static void deleteArray_CppyyLegacycLcLTUrl(void *p);
   static void destruct_CppyyLegacycLcLTUrl(void *p);
   static void streamer_CppyyLegacycLcLTUrl(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TUrl*)
   {
      ::CppyyLegacy::TUrl *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TUrl >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TUrl", ::CppyyLegacy::TUrl::Class_Version(), "TUrl.h", 37,
                  typeid(::CppyyLegacy::TUrl), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TUrl::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TUrl) );
      instance.SetNew(&new_CppyyLegacycLcLTUrl);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTUrl);
      instance.SetDelete(&delete_CppyyLegacycLcLTUrl);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTUrl);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTUrl);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTUrl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TUrl*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TUrl*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TUrl*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTArray(void *p);
   static void deleteArray_CppyyLegacycLcLTArray(void *p);
   static void destruct_CppyyLegacycLcLTArray(void *p);
   static void streamer_CppyyLegacycLcLTArray(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TArray*)
   {
      ::CppyyLegacy::TArray *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TArray >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TArray", ::CppyyLegacy::TArray::Class_Version(), "TArray.h", 32,
                  typeid(::CppyyLegacy::TArray), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TArray::Dictionary, isa_proxy, 18,
                  sizeof(::CppyyLegacy::TArray) );
      instance.SetDelete(&delete_CppyyLegacycLcLTArray);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTArray);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTArray);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TArray*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TArray*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTArrayC(void *p = 0);
   static void *newArray_CppyyLegacycLcLTArrayC(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTArrayC(void *p);
   static void deleteArray_CppyyLegacycLcLTArrayC(void *p);
   static void destruct_CppyyLegacycLcLTArrayC(void *p);
   static void streamer_CppyyLegacycLcLTArrayC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TArrayC*)
   {
      ::CppyyLegacy::TArrayC *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TArrayC >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TArrayC", ::CppyyLegacy::TArrayC::Class_Version(), "TArrayC.h", 29,
                  typeid(::CppyyLegacy::TArrayC), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TArrayC::Dictionary, isa_proxy, 19,
                  sizeof(::CppyyLegacy::TArrayC) );
      instance.SetNew(&new_CppyyLegacycLcLTArrayC);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTArrayC);
      instance.SetDelete(&delete_CppyyLegacycLcLTArrayC);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTArrayC);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTArrayC);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTArrayC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TArrayC*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TArrayC*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TArrayC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTBits(void *p = 0);
   static void *newArray_CppyyLegacycLcLTBits(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTBits(void *p);
   static void deleteArray_CppyyLegacycLcLTBits(void *p);
   static void destruct_CppyyLegacycLcLTBits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TBits*)
   {
      ::CppyyLegacy::TBits *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TBits >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TBits", ::CppyyLegacy::TBits::Class_Version(), "TBits.h", 30,
                  typeid(::CppyyLegacy::TBits), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TBits::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TBits) );
      instance.SetNew(&new_CppyyLegacycLcLTBits);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTBits);
      instance.SetDelete(&delete_CppyyLegacycLcLTBits);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTBits);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTBits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TBits*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TBits*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TBits*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTBitscLcLTReference_Dictionary();
   static void CppyyLegacycLcLTBitscLcLTReference_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTBitscLcLTReference(void *p);
   static void deleteArray_CppyyLegacycLcLTBitscLcLTReference(void *p);
   static void destruct_CppyyLegacycLcLTBitscLcLTReference(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TBits::TReference*)
   {
      ::CppyyLegacy::TBits::TReference *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TBits::TReference));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TBits::TReference", "TBits.h", 53,
                  typeid(::CppyyLegacy::TBits::TReference), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTBitscLcLTReference_Dictionary, isa_proxy, 1,
                  sizeof(::CppyyLegacy::TBits::TReference) );
      instance.SetDelete(&delete_CppyyLegacycLcLTBitscLcLTReference);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTBitscLcLTReference);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTBitscLcLTReference);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TBits::TReference*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TBits::TReference*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TBits::TReference*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTBitscLcLTReference_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBits::TReference*)0x0)->GetClass();
      CppyyLegacycLcLTBitscLcLTReference_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTBitscLcLTReference_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTClassTable(void *p);
   static void deleteArray_CppyyLegacycLcLTClassTable(void *p);
   static void destruct_CppyyLegacycLcLTClassTable(void *p);
   static void streamer_CppyyLegacycLcLTClassTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TClassTable*)
   {
      ::CppyyLegacy::TClassTable *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TClassTable >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TClassTable", ::CppyyLegacy::TClassTable::Class_Version(), "TClassTable.h", 36,
                  typeid(::CppyyLegacy::TClassTable), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TClassTable::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TClassTable) );
      instance.SetDelete(&delete_CppyyLegacycLcLTClassTable);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTClassTable);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTClassTable);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTClassTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TClassTable*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TClassTable*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TClassTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTExMap(void *p = 0);
   static void *newArray_CppyyLegacycLcLTExMap(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTExMap(void *p);
   static void deleteArray_CppyyLegacycLcLTExMap(void *p);
   static void destruct_CppyyLegacycLcLTExMap(void *p);
   static void streamer_CppyyLegacycLcLTExMap(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TExMap*)
   {
      ::CppyyLegacy::TExMap *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TExMap >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TExMap", ::CppyyLegacy::TExMap::Class_Version(), "TExMap.h", 33,
                  typeid(::CppyyLegacy::TExMap), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TExMap::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TExMap) );
      instance.SetNew(&new_CppyyLegacycLcLTExMap);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTExMap);
      instance.SetDelete(&delete_CppyyLegacycLcLTExMap);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTExMap);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTExMap);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTExMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TExMap*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TExMap*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TExMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTExMapIter(void *p);
   static void deleteArray_CppyyLegacycLcLTExMapIter(void *p);
   static void destruct_CppyyLegacycLcLTExMapIter(void *p);
   static void streamer_CppyyLegacycLcLTExMapIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TExMapIter*)
   {
      ::CppyyLegacy::TExMapIter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TExMapIter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TExMapIter", ::CppyyLegacy::TExMapIter::Class_Version(), "TExMap.h", 85,
                  typeid(::CppyyLegacy::TExMapIter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TExMapIter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TExMapIter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTExMapIter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTExMapIter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTExMapIter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTExMapIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TExMapIter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TExMapIter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TExMapIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTHashList(void *p = 0);
   static void *newArray_CppyyLegacycLcLTHashList(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTHashList(void *p);
   static void deleteArray_CppyyLegacycLcLTHashList(void *p);
   static void destruct_CppyyLegacycLcLTHashList(void *p);
   static void streamer_CppyyLegacycLcLTHashList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::THashList*)
   {
      ::CppyyLegacy::THashList *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::THashList >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::THashList", ::CppyyLegacy::THashList::Class_Version(), "THashList.h", 36,
                  typeid(::CppyyLegacy::THashList), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::THashList::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::THashList) );
      instance.SetNew(&new_CppyyLegacycLcLTHashList);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTHashList);
      instance.SetDelete(&delete_CppyyLegacycLcLTHashList);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTHashList);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTHashList);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTHashList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::THashList*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::THashList*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::THashList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTObjectTable(void *p = 0);
   static void *newArray_CppyyLegacycLcLTObjectTable(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTObjectTable(void *p);
   static void deleteArray_CppyyLegacycLcLTObjectTable(void *p);
   static void destruct_CppyyLegacycLcLTObjectTable(void *p);
   static void streamer_CppyyLegacycLcLTObjectTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TObjectTable*)
   {
      ::CppyyLegacy::TObjectTable *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TObjectTable >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TObjectTable", ::CppyyLegacy::TObjectTable::Class_Version(), "TObjectTable.h", 33,
                  typeid(::CppyyLegacy::TObjectTable), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TObjectTable::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TObjectTable) );
      instance.SetNew(&new_CppyyLegacycLcLTObjectTable);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTObjectTable);
      instance.SetDelete(&delete_CppyyLegacycLcLTObjectTable);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTObjectTable);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTObjectTable);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTObjectTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TObjectTable*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TObjectTable*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TObjectTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTOrdCollection(void *p = 0);
   static void *newArray_CppyyLegacycLcLTOrdCollection(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTOrdCollection(void *p);
   static void deleteArray_CppyyLegacycLcLTOrdCollection(void *p);
   static void destruct_CppyyLegacycLcLTOrdCollection(void *p);
   static void streamer_CppyyLegacycLcLTOrdCollection(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TOrdCollection*)
   {
      ::CppyyLegacy::TOrdCollection *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TOrdCollection >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TOrdCollection", ::CppyyLegacy::TOrdCollection::Class_Version(), "TOrdCollection.h", 31,
                  typeid(::CppyyLegacy::TOrdCollection), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TOrdCollection::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TOrdCollection) );
      instance.SetNew(&new_CppyyLegacycLcLTOrdCollection);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTOrdCollection);
      instance.SetDelete(&delete_CppyyLegacycLcLTOrdCollection);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTOrdCollection);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTOrdCollection);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTOrdCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TOrdCollection*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TOrdCollection*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTOrdCollectionIter(void *p);
   static void deleteArray_CppyyLegacycLcLTOrdCollectionIter(void *p);
   static void destruct_CppyyLegacycLcLTOrdCollectionIter(void *p);
   static void streamer_CppyyLegacycLcLTOrdCollectionIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TOrdCollectionIter*)
   {
      ::CppyyLegacy::TOrdCollectionIter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TOrdCollectionIter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TOrdCollectionIter", ::CppyyLegacy::TOrdCollectionIter::Class_Version(), "TOrdCollection.h", 94,
                  typeid(::CppyyLegacy::TOrdCollectionIter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TOrdCollectionIter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TOrdCollectionIter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTOrdCollectionIter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTOrdCollectionIter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTOrdCollectionIter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTOrdCollectionIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TOrdCollectionIter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TOrdCollectionIter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollectionIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTClassRef_Dictionary();
   static void CppyyLegacycLcLTClassRef_TClassManip(TClass*);
   static void *new_CppyyLegacycLcLTClassRef(void *p = 0);
   static void *newArray_CppyyLegacycLcLTClassRef(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTClassRef(void *p);
   static void deleteArray_CppyyLegacycLcLTClassRef(void *p);
   static void destruct_CppyyLegacycLcLTClassRef(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TClassRef*)
   {
      ::CppyyLegacy::TClassRef *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TClassRef));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TClassRef", "TClassRef.h", 30,
                  typeid(::CppyyLegacy::TClassRef), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTClassRef_Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TClassRef) );
      instance.SetNew(&new_CppyyLegacycLcLTClassRef);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTClassRef);
      instance.SetDelete(&delete_CppyyLegacycLcLTClassRef);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTClassRef);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTClassRef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TClassRef*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TClassRef*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TClassRef*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTClassRef_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassRef*)0x0)->GetClass();
      CppyyLegacycLcLTClassRef_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTClassRef_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTVirtualCollectionProxy_Dictionary();
   static void CppyyLegacycLcLTVirtualCollectionProxy_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTVirtualCollectionProxy(void *p);
   static void deleteArray_CppyyLegacycLcLTVirtualCollectionProxy(void *p);
   static void destruct_CppyyLegacycLcLTVirtualCollectionProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TVirtualCollectionProxy*)
   {
      ::CppyyLegacy::TVirtualCollectionProxy *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TVirtualCollectionProxy));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TVirtualCollectionProxy", "TVirtualCollectionProxy.h", 42,
                  typeid(::CppyyLegacy::TVirtualCollectionProxy), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTVirtualCollectionProxy_Dictionary, isa_proxy, 1,
                  sizeof(::CppyyLegacy::TVirtualCollectionProxy) );
      instance.SetDelete(&delete_CppyyLegacycLcLTVirtualCollectionProxy);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTVirtualCollectionProxy);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTVirtualCollectionProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TVirtualCollectionProxy*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TVirtualCollectionProxy*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualCollectionProxy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTVirtualCollectionProxy_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualCollectionProxy*)0x0)->GetClass();
      CppyyLegacycLcLTVirtualCollectionProxy_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTVirtualCollectionProxy_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTUnixSystem(void *p = 0);
   static void *newArray_CppyyLegacycLcLTUnixSystem(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTUnixSystem(void *p);
   static void deleteArray_CppyyLegacycLcLTUnixSystem(void *p);
   static void destruct_CppyyLegacycLcLTUnixSystem(void *p);
   static void streamer_CppyyLegacycLcLTUnixSystem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TUnixSystem*)
   {
      ::CppyyLegacy::TUnixSystem *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TUnixSystem >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TUnixSystem", ::CppyyLegacy::TUnixSystem::Class_Version(), "TUnixSystem.h", 30,
                  typeid(::CppyyLegacy::TUnixSystem), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TUnixSystem::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TUnixSystem) );
      instance.SetNew(&new_CppyyLegacycLcLTUnixSystem);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTUnixSystem);
      instance.SetDelete(&delete_CppyyLegacycLcLTUnixSystem);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTUnixSystem);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTUnixSystem);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTUnixSystem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TUnixSystem*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TUnixSystem*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TUnixSystem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTBaseClass(void *p = 0);
   static void *newArray_CppyyLegacycLcLTBaseClass(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTBaseClass(void *p);
   static void deleteArray_CppyyLegacycLcLTBaseClass(void *p);
   static void destruct_CppyyLegacycLcLTBaseClass(void *p);
   static void streamer_CppyyLegacycLcLTBaseClass(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TBaseClass*)
   {
      ::CppyyLegacy::TBaseClass *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TBaseClass >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TBaseClass", ::CppyyLegacy::TBaseClass::Class_Version(), "TBaseClass.h", 34,
                  typeid(::CppyyLegacy::TBaseClass), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TBaseClass::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TBaseClass) );
      instance.SetNew(&new_CppyyLegacycLcLTBaseClass);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTBaseClass);
      instance.SetDelete(&delete_CppyyLegacycLcLTBaseClass);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTBaseClass);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTBaseClass);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTBaseClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TBaseClass*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TBaseClass*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TBaseClass*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TClassGenerator*)
   {
      ::CppyyLegacy::TClassGenerator *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TClassGenerator >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TClassGenerator", ::CppyyLegacy::TClassGenerator::Class_Version(), "TClassGenerator.h", 31,
                  typeid(::CppyyLegacy::TClassGenerator), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TClassGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TClassGenerator) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TClassGenerator*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TClassGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TClassGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTClassStreamer_Dictionary();
   static void CppyyLegacycLcLTClassStreamer_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTClassStreamer(void *p);
   static void deleteArray_CppyyLegacycLcLTClassStreamer(void *p);
   static void destruct_CppyyLegacycLcLTClassStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TClassStreamer*)
   {
      ::CppyyLegacy::TClassStreamer *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TClassStreamer));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TClassStreamer", "TClassStreamer.h", 30,
                  typeid(::CppyyLegacy::TClassStreamer), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTClassStreamer_Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TClassStreamer) );
      instance.SetDelete(&delete_CppyyLegacycLcLTClassStreamer);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTClassStreamer);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTClassStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TClassStreamer*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TClassStreamer*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TClassStreamer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTClassStreamer_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassStreamer*)0x0)->GetClass();
      CppyyLegacycLcLTClassStreamer_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTClassStreamer_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTDataMember(void *p = 0);
   static void *newArray_CppyyLegacycLcLTDataMember(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTDataMember(void *p);
   static void deleteArray_CppyyLegacycLcLTDataMember(void *p);
   static void destruct_CppyyLegacycLcLTDataMember(void *p);
   static void streamer_CppyyLegacycLcLTDataMember(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TDataMember*)
   {
      ::CppyyLegacy::TDataMember *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TDataMember >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TDataMember", ::CppyyLegacy::TDataMember::Class_Version(), "TDataMember.h", 32,
                  typeid(::CppyyLegacy::TDataMember), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TDataMember::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TDataMember) );
      instance.SetNew(&new_CppyyLegacycLcLTDataMember);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTDataMember);
      instance.SetDelete(&delete_CppyyLegacycLcLTDataMember);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTDataMember);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTDataMember);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTDataMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TDataMember*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TDataMember*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TDataMember*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTOptionListItem(void *p = 0);
   static void *newArray_CppyyLegacycLcLTOptionListItem(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTOptionListItem(void *p);
   static void deleteArray_CppyyLegacycLcLTOptionListItem(void *p);
   static void destruct_CppyyLegacycLcLTOptionListItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TOptionListItem*)
   {
      ::CppyyLegacy::TOptionListItem *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TOptionListItem >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TOptionListItem", ::CppyyLegacy::TOptionListItem::Class_Version(), "TDataMember.h", 97,
                  typeid(::CppyyLegacy::TOptionListItem), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TOptionListItem::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TOptionListItem) );
      instance.SetNew(&new_CppyyLegacycLcLTOptionListItem);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTOptionListItem);
      instance.SetDelete(&delete_CppyyLegacycLcLTOptionListItem);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTOptionListItem);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTOptionListItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TOptionListItem*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TOptionListItem*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TOptionListItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTDictAttributeMap(void *p = 0);
   static void *newArray_CppyyLegacycLcLTDictAttributeMap(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTDictAttributeMap(void *p);
   static void deleteArray_CppyyLegacycLcLTDictAttributeMap(void *p);
   static void destruct_CppyyLegacycLcLTDictAttributeMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TDictAttributeMap*)
   {
      ::CppyyLegacy::TDictAttributeMap *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TDictAttributeMap >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TDictAttributeMap", ::CppyyLegacy::TDictAttributeMap::Class_Version(), "TDictAttributeMap.h", 29,
                  typeid(::CppyyLegacy::TDictAttributeMap), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TDictAttributeMap::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TDictAttributeMap) );
      instance.SetNew(&new_CppyyLegacycLcLTDictAttributeMap);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTDictAttributeMap);
      instance.SetDelete(&delete_CppyyLegacycLcLTDictAttributeMap);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTDictAttributeMap);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTDictAttributeMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TDictAttributeMap*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TDictAttributeMap*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TDictAttributeMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTGlobal(void *p = 0);
   static void *newArray_CppyyLegacycLcLTGlobal(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTGlobal(void *p);
   static void deleteArray_CppyyLegacycLcLTGlobal(void *p);
   static void destruct_CppyyLegacycLcLTGlobal(void *p);
   static void streamer_CppyyLegacycLcLTGlobal(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TGlobal*)
   {
      ::CppyyLegacy::TGlobal *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TGlobal >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TGlobal", ::CppyyLegacy::TGlobal::Class_Version(), "TGlobal.h", 29,
                  typeid(::CppyyLegacy::TGlobal), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TGlobal::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TGlobal) );
      instance.SetNew(&new_CppyyLegacycLcLTGlobal);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTGlobal);
      instance.SetDelete(&delete_CppyyLegacycLcLTGlobal);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTGlobal);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTGlobal);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTGlobal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TGlobal*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TGlobal*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TGlobal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTEnum(void *p = 0);
   static void *newArray_CppyyLegacycLcLTEnum(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTEnum(void *p);
   static void deleteArray_CppyyLegacycLcLTEnum(void *p);
   static void destruct_CppyyLegacycLcLTEnum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TEnum*)
   {
      ::CppyyLegacy::TEnum *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TEnum >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TEnum", ::CppyyLegacy::TEnum::Class_Version(), "TEnum.h", 36,
                  typeid(::CppyyLegacy::TEnum), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TEnum::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TEnum) );
      instance.SetNew(&new_CppyyLegacycLcLTEnum);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTEnum);
      instance.SetDelete(&delete_CppyyLegacycLcLTEnum);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTEnum);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTEnum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TEnum*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TEnum*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TEnum*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTEnumConstant(void *p = 0);
   static void *newArray_CppyyLegacycLcLTEnumConstant(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTEnumConstant(void *p);
   static void deleteArray_CppyyLegacycLcLTEnumConstant(void *p);
   static void destruct_CppyyLegacycLcLTEnumConstant(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TEnumConstant*)
   {
      ::CppyyLegacy::TEnumConstant *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TEnumConstant >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TEnumConstant", ::CppyyLegacy::TEnumConstant::Class_Version(), "TEnumConstant.h", 31,
                  typeid(::CppyyLegacy::TEnumConstant), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TEnumConstant::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TEnumConstant) );
      instance.SetNew(&new_CppyyLegacycLcLTEnumConstant);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTEnumConstant);
      instance.SetDelete(&delete_CppyyLegacycLcLTEnumConstant);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTEnumConstant);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTEnumConstant);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TEnumConstant*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TEnumConstant*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TEnumConstant*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTFunction(void *p = 0);
   static void *newArray_CppyyLegacycLcLTFunction(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTFunction(void *p);
   static void deleteArray_CppyyLegacycLcLTFunction(void *p);
   static void destruct_CppyyLegacycLcLTFunction(void *p);
   static void streamer_CppyyLegacycLcLTFunction(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TFunction*)
   {
      ::CppyyLegacy::TFunction *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TFunction >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TFunction", ::CppyyLegacy::TFunction::Class_Version(), "TFunction.h", 28,
                  typeid(::CppyyLegacy::TFunction), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TFunction::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TFunction) );
      instance.SetNew(&new_CppyyLegacycLcLTFunction);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTFunction);
      instance.SetDelete(&delete_CppyyLegacycLcLTFunction);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTFunction);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTFunction);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TFunction*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TFunction*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTFunctionTemplate(void *p);
   static void deleteArray_CppyyLegacycLcLTFunctionTemplate(void *p);
   static void destruct_CppyyLegacycLcLTFunctionTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TFunctionTemplate*)
   {
      ::CppyyLegacy::TFunctionTemplate *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TFunctionTemplate >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TFunctionTemplate", ::CppyyLegacy::TFunctionTemplate::Class_Version(), "TFunctionTemplate.h", 28,
                  typeid(::CppyyLegacy::TFunctionTemplate), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TFunctionTemplate::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TFunctionTemplate) );
      instance.SetDelete(&delete_CppyyLegacycLcLTFunctionTemplate);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTFunctionTemplate);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTFunctionTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TFunctionTemplate*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TFunctionTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TFunctionTemplate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTInterpreter(void *p);
   static void deleteArray_CppyyLegacycLcLTInterpreter(void *p);
   static void destruct_CppyyLegacycLcLTInterpreter(void *p);
   static void streamer_CppyyLegacycLcLTInterpreter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TInterpreter*)
   {
      ::CppyyLegacy::TInterpreter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TInterpreter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TInterpreter", ::CppyyLegacy::TInterpreter::Class_Version(), "TInterpreter.h", 61,
                  typeid(::CppyyLegacy::TInterpreter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TInterpreter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TInterpreter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTInterpreter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTInterpreter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTInterpreter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTInterpreter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TInterpreter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TInterpreter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TInterpreter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTListOfDataMembers(void *p = 0);
   static void *newArray_CppyyLegacycLcLTListOfDataMembers(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTListOfDataMembers(void *p);
   static void deleteArray_CppyyLegacycLcLTListOfDataMembers(void *p);
   static void destruct_CppyyLegacycLcLTListOfDataMembers(void *p);
   static void streamer_CppyyLegacycLcLTListOfDataMembers(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TListOfDataMembers*)
   {
      ::CppyyLegacy::TListOfDataMembers *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TListOfDataMembers >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TListOfDataMembers", ::CppyyLegacy::TListOfDataMembers::Class_Version(), "TListOfDataMembers.h", 34,
                  typeid(::CppyyLegacy::TListOfDataMembers), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TListOfDataMembers::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TListOfDataMembers) );
      instance.SetNew(&new_CppyyLegacycLcLTListOfDataMembers);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTListOfDataMembers);
      instance.SetDelete(&delete_CppyyLegacycLcLTListOfDataMembers);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTListOfDataMembers);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTListOfDataMembers);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTListOfDataMembers);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TListOfDataMembers*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TListOfDataMembers*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfDataMembers*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTListOfEnums(void *p = 0);
   static void *newArray_CppyyLegacycLcLTListOfEnums(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTListOfEnums(void *p);
   static void deleteArray_CppyyLegacycLcLTListOfEnums(void *p);
   static void destruct_CppyyLegacycLcLTListOfEnums(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TListOfEnums*)
   {
      ::CppyyLegacy::TListOfEnums *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TListOfEnums >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TListOfEnums", ::CppyyLegacy::TListOfEnums::Class_Version(), "TListOfEnums.h", 34,
                  typeid(::CppyyLegacy::TListOfEnums), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TListOfEnums::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TListOfEnums) );
      instance.SetNew(&new_CppyyLegacycLcLTListOfEnums);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTListOfEnums);
      instance.SetDelete(&delete_CppyyLegacycLcLTListOfEnums);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTListOfEnums);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTListOfEnums);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TListOfEnums*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TListOfEnums*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnums*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTListOfEnumsWithLock(void *p = 0);
   static void *newArray_CppyyLegacycLcLTListOfEnumsWithLock(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTListOfEnumsWithLock(void *p);
   static void deleteArray_CppyyLegacycLcLTListOfEnumsWithLock(void *p);
   static void destruct_CppyyLegacycLcLTListOfEnumsWithLock(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TListOfEnumsWithLock*)
   {
      ::CppyyLegacy::TListOfEnumsWithLock *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TListOfEnumsWithLock >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TListOfEnumsWithLock", ::CppyyLegacy::TListOfEnumsWithLock::Class_Version(), "TListOfEnumsWithLock.h", 33,
                  typeid(::CppyyLegacy::TListOfEnumsWithLock), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TListOfEnumsWithLock::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TListOfEnumsWithLock) );
      instance.SetNew(&new_CppyyLegacycLcLTListOfEnumsWithLock);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTListOfEnumsWithLock);
      instance.SetDelete(&delete_CppyyLegacycLcLTListOfEnumsWithLock);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTListOfEnumsWithLock);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTListOfEnumsWithLock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TListOfEnumsWithLock*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TListOfEnumsWithLock*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLock*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTListOfEnumsWithLockIter(void *p);
   static void deleteArray_CppyyLegacycLcLTListOfEnumsWithLockIter(void *p);
   static void destruct_CppyyLegacycLcLTListOfEnumsWithLockIter(void *p);
   static void streamer_CppyyLegacycLcLTListOfEnumsWithLockIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TListOfEnumsWithLockIter*)
   {
      ::CppyyLegacy::TListOfEnumsWithLockIter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TListOfEnumsWithLockIter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TListOfEnumsWithLockIter", ::CppyyLegacy::TListOfEnumsWithLockIter::Class_Version(), "TListOfEnumsWithLock.h", 94,
                  typeid(::CppyyLegacy::TListOfEnumsWithLockIter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TListOfEnumsWithLockIter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TListOfEnumsWithLockIter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTListOfEnumsWithLockIter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTListOfEnumsWithLockIter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTListOfEnumsWithLockIter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTListOfEnumsWithLockIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TListOfEnumsWithLockIter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TListOfEnumsWithLockIter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLockIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTListOfFunctions(void *p);
   static void deleteArray_CppyyLegacycLcLTListOfFunctions(void *p);
   static void destruct_CppyyLegacycLcLTListOfFunctions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TListOfFunctions*)
   {
      ::CppyyLegacy::TListOfFunctions *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TListOfFunctions >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TListOfFunctions", ::CppyyLegacy::TListOfFunctions::Class_Version(), "TListOfFunctions.h", 35,
                  typeid(::CppyyLegacy::TListOfFunctions), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TListOfFunctions::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TListOfFunctions) );
      instance.SetDelete(&delete_CppyyLegacycLcLTListOfFunctions);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTListOfFunctions);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTListOfFunctions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TListOfFunctions*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TListOfFunctions*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTListOfFunctionsIter(void *p);
   static void deleteArray_CppyyLegacycLcLTListOfFunctionsIter(void *p);
   static void destruct_CppyyLegacycLcLTListOfFunctionsIter(void *p);
   static void streamer_CppyyLegacycLcLTListOfFunctionsIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TListOfFunctionsIter*)
   {
      ::CppyyLegacy::TListOfFunctionsIter *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TListOfFunctionsIter >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TListOfFunctionsIter", ::CppyyLegacy::TListOfFunctionsIter::Class_Version(), "TListOfFunctions.h", 114,
                  typeid(::CppyyLegacy::TListOfFunctionsIter), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TListOfFunctionsIter::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TListOfFunctionsIter) );
      instance.SetDelete(&delete_CppyyLegacycLcLTListOfFunctionsIter);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTListOfFunctionsIter);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTListOfFunctionsIter);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTListOfFunctionsIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TListOfFunctionsIter*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TListOfFunctionsIter*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionsIter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTListOfFunctionTemplates(void *p);
   static void deleteArray_CppyyLegacycLcLTListOfFunctionTemplates(void *p);
   static void destruct_CppyyLegacycLcLTListOfFunctionTemplates(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TListOfFunctionTemplates*)
   {
      ::CppyyLegacy::TListOfFunctionTemplates *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TListOfFunctionTemplates >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TListOfFunctionTemplates", ::CppyyLegacy::TListOfFunctionTemplates::Class_Version(), "TListOfFunctionTemplates.h", 35,
                  typeid(::CppyyLegacy::TListOfFunctionTemplates), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TListOfFunctionTemplates::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TListOfFunctionTemplates) );
      instance.SetDelete(&delete_CppyyLegacycLcLTListOfFunctionTemplates);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTListOfFunctionTemplates);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTListOfFunctionTemplates);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TListOfFunctionTemplates*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TListOfFunctionTemplates*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionTemplates*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static TClass *CppyyLegacycLcLTMemberStreamer_Dictionary();
   static void CppyyLegacycLcLTMemberStreamer_TClassManip(TClass*);
   static void delete_CppyyLegacycLcLTMemberStreamer(void *p);
   static void deleteArray_CppyyLegacycLcLTMemberStreamer(void *p);
   static void destruct_CppyyLegacycLcLTMemberStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMemberStreamer*)
   {
      ::CppyyLegacy::TMemberStreamer *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(::CppyyLegacy::TMemberStreamer));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMemberStreamer", "TMemberStreamer.h", 30,
                  typeid(::CppyyLegacy::TMemberStreamer), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &CppyyLegacycLcLTMemberStreamer_Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TMemberStreamer) );
      instance.SetDelete(&delete_CppyyLegacycLcLTMemberStreamer);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMemberStreamer);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMemberStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMemberStreamer*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMemberStreamer*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMemberStreamer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *CppyyLegacycLcLTMemberStreamer_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMemberStreamer*)0x0)->GetClass();
      CppyyLegacycLcLTMemberStreamer_TClassManip(theClass);
   return theClass;
   }

   static void CppyyLegacycLcLTMemberStreamer_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTMethodArg(void *p = 0);
   static void *newArray_CppyyLegacycLcLTMethodArg(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTMethodArg(void *p);
   static void deleteArray_CppyyLegacycLcLTMethodArg(void *p);
   static void destruct_CppyyLegacycLcLTMethodArg(void *p);
   static void streamer_CppyyLegacycLcLTMethodArg(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMethodArg*)
   {
      ::CppyyLegacy::TMethodArg *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TMethodArg >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMethodArg", ::CppyyLegacy::TMethodArg::Class_Version(), "TMethodArg.h", 32,
                  typeid(::CppyyLegacy::TMethodArg), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TMethodArg::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TMethodArg) );
      instance.SetNew(&new_CppyyLegacycLcLTMethodArg);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTMethodArg);
      instance.SetDelete(&delete_CppyyLegacycLcLTMethodArg);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMethodArg);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMethodArg);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTMethodArg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMethodArg*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMethodArg*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMethodArg*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTMethod(void *p = 0);
   static void *newArray_CppyyLegacycLcLTMethod(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTMethod(void *p);
   static void deleteArray_CppyyLegacycLcLTMethod(void *p);
   static void destruct_CppyyLegacycLcLTMethod(void *p);
   static void streamer_CppyyLegacycLcLTMethod(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TMethod*)
   {
      ::CppyyLegacy::TMethod *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TMethod >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TMethod", ::CppyyLegacy::TMethod::Class_Version(), "TMethod.h", 32,
                  typeid(::CppyyLegacy::TMethod), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TMethod::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TMethod) );
      instance.SetNew(&new_CppyyLegacycLcLTMethod);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTMethod);
      instance.SetDelete(&delete_CppyyLegacycLcLTMethod);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTMethod);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTMethod);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTMethod);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TMethod*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TMethod*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TMethod*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTProtoClass(void *p = 0);
   static void *newArray_CppyyLegacycLcLTProtoClass(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTProtoClass(void *p);
   static void deleteArray_CppyyLegacycLcLTProtoClass(void *p);
   static void destruct_CppyyLegacycLcLTProtoClass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TProtoClass*)
   {
      ::CppyyLegacy::TProtoClass *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TProtoClass >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TProtoClass", ::CppyyLegacy::TProtoClass::Class_Version(), "TProtoClass.h", 39,
                  typeid(::CppyyLegacy::TProtoClass), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TProtoClass::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TProtoClass) );
      instance.SetNew(&new_CppyyLegacycLcLTProtoClass);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTProtoClass);
      instance.SetDelete(&delete_CppyyLegacycLcLTProtoClass);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTProtoClass);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTProtoClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TProtoClass*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TProtoClass*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(void *p = 0);
   static void *newArray_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(void *p);
   static void deleteArray_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(void *p);
   static void destruct_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TProtoClass::TProtoRealData*)
   {
      ::CppyyLegacy::TProtoClass::TProtoRealData *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TProtoClass::TProtoRealData >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TProtoClass::TProtoRealData", ::CppyyLegacy::TProtoClass::TProtoRealData::Class_Version(), "TProtoClass.h", 41,
                  typeid(::CppyyLegacy::TProtoClass::TProtoRealData), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TProtoClass::TProtoRealData::Dictionary, isa_proxy, 4,
                  sizeof(::CppyyLegacy::TProtoClass::TProtoRealData) );
      instance.SetNew(&new_CppyyLegacycLcLTProtoClasscLcLTProtoRealData);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTProtoClasscLcLTProtoRealData);
      instance.SetDelete(&delete_CppyyLegacycLcLTProtoClasscLcLTProtoRealData);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTProtoClasscLcLTProtoRealData);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTProtoClasscLcLTProtoRealData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TProtoClass::TProtoRealData*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TProtoClass::TProtoRealData*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass::TProtoRealData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTRealData(void *p = 0);
   static void *newArray_CppyyLegacycLcLTRealData(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTRealData(void *p);
   static void deleteArray_CppyyLegacycLcLTRealData(void *p);
   static void destruct_CppyyLegacycLcLTRealData(void *p);
   static void streamer_CppyyLegacycLcLTRealData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TRealData*)
   {
      ::CppyyLegacy::TRealData *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TRealData >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TRealData", ::CppyyLegacy::TRealData::Class_Version(), "TRealData.h", 31,
                  typeid(::CppyyLegacy::TRealData), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TRealData::Dictionary, isa_proxy, 16,
                  sizeof(::CppyyLegacy::TRealData) );
      instance.SetNew(&new_CppyyLegacycLcLTRealData);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTRealData);
      instance.SetDelete(&delete_CppyyLegacycLcLTRealData);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTRealData);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTRealData);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTRealData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TRealData*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TRealData*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TRealData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerElement(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerElement(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerElement(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerElement(void *p);
   static void destruct_CppyyLegacycLcLTStreamerElement(void *p);
   static void streamer_CppyyLegacycLcLTStreamerElement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerElement*)
   {
      ::CppyyLegacy::TStreamerElement *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerElement >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerElement", ::CppyyLegacy::TStreamerElement::Class_Version(), "TStreamerElement.h", 33,
                  typeid(::CppyyLegacy::TStreamerElement), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerElement::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerElement) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerElement);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerElement);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerElement);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerElement);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerElement);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerElement*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerElement*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerBase(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerBase(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerBase(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerBase(void *p);
   static void destruct_CppyyLegacycLcLTStreamerBase(void *p);
   static void streamer_CppyyLegacycLcLTStreamerBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerBase*)
   {
      ::CppyyLegacy::TStreamerBase *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerBase >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerBase", ::CppyyLegacy::TStreamerBase::Class_Version(), "TStreamerElement.h", 149,
                  typeid(::CppyyLegacy::TStreamerBase), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerBase::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerBase) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerBase);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerBase);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerBase);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerBase);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerBase);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerBase*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerBase*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerBasicPointer(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerBasicPointer(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerBasicPointer(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerBasicPointer(void *p);
   static void destruct_CppyyLegacycLcLTStreamerBasicPointer(void *p);
   static void streamer_CppyyLegacycLcLTStreamerBasicPointer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerBasicPointer*)
   {
      ::CppyyLegacy::TStreamerBasicPointer *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerBasicPointer >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerBasicPointer", ::CppyyLegacy::TStreamerBasicPointer::Class_Version(), "TStreamerElement.h", 195,
                  typeid(::CppyyLegacy::TStreamerBasicPointer), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerBasicPointer::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerBasicPointer) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerBasicPointer);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerBasicPointer);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerBasicPointer);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerBasicPointer);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerBasicPointer);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerBasicPointer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerBasicPointer*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerBasicPointer*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicPointer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerLoop(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerLoop(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerLoop(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerLoop(void *p);
   static void destruct_CppyyLegacycLcLTStreamerLoop(void *p);
   static void streamer_CppyyLegacycLcLTStreamerLoop(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerLoop*)
   {
      ::CppyyLegacy::TStreamerLoop *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerLoop >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerLoop", ::CppyyLegacy::TStreamerLoop::Class_Version(), "TStreamerElement.h", 232,
                  typeid(::CppyyLegacy::TStreamerLoop), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerLoop::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerLoop) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerLoop);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerLoop);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerLoop);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerLoop);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerLoop);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerLoop);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerLoop*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerLoop*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerLoop*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerBasicType(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerBasicType(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerBasicType(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerBasicType(void *p);
   static void destruct_CppyyLegacycLcLTStreamerBasicType(void *p);
   static void streamer_CppyyLegacycLcLTStreamerBasicType(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerBasicType*)
   {
      ::CppyyLegacy::TStreamerBasicType *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerBasicType >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerBasicType", ::CppyyLegacy::TStreamerBasicType::Class_Version(), "TStreamerElement.h", 266,
                  typeid(::CppyyLegacy::TStreamerBasicType), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerBasicType::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerBasicType) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerBasicType);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerBasicType);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerBasicType);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerBasicType);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerBasicType);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerBasicType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerBasicType*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerBasicType*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicType*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerObject(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerObject(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerObject(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerObject(void *p);
   static void destruct_CppyyLegacycLcLTStreamerObject(void *p);
   static void streamer_CppyyLegacycLcLTStreamerObject(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerObject*)
   {
      ::CppyyLegacy::TStreamerObject *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerObject >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerObject", ::CppyyLegacy::TStreamerObject::Class_Version(), "TStreamerElement.h", 290,
                  typeid(::CppyyLegacy::TStreamerObject), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerObject::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerObject) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerObject);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerObject);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerObject);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerObject);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerObject);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerObject*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerObject*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerObjectAny(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerObjectAny(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerObjectAny(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerObjectAny(void *p);
   static void destruct_CppyyLegacycLcLTStreamerObjectAny(void *p);
   static void streamer_CppyyLegacycLcLTStreamerObjectAny(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerObjectAny*)
   {
      ::CppyyLegacy::TStreamerObjectAny *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerObjectAny >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerObjectAny", ::CppyyLegacy::TStreamerObjectAny::Class_Version(), "TStreamerElement.h", 309,
                  typeid(::CppyyLegacy::TStreamerObjectAny), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerObjectAny::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerObjectAny) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerObjectAny);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerObjectAny);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerObjectAny);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerObjectAny);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerObjectAny);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerObjectAny);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerObjectAny*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerObjectAny*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAny*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerObjectPointer(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerObjectPointer(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerObjectPointer(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerObjectPointer(void *p);
   static void destruct_CppyyLegacycLcLTStreamerObjectPointer(void *p);
   static void streamer_CppyyLegacycLcLTStreamerObjectPointer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerObjectPointer*)
   {
      ::CppyyLegacy::TStreamerObjectPointer *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerObjectPointer >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerObjectPointer", ::CppyyLegacy::TStreamerObjectPointer::Class_Version(), "TStreamerElement.h", 328,
                  typeid(::CppyyLegacy::TStreamerObjectPointer), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerObjectPointer::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerObjectPointer) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerObjectPointer);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerObjectPointer);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerObjectPointer);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerObjectPointer);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerObjectPointer);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerObjectPointer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerObjectPointer*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerObjectPointer*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectPointer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerObjectAnyPointer(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerObjectAnyPointer(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerObjectAnyPointer(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerObjectAnyPointer(void *p);
   static void destruct_CppyyLegacycLcLTStreamerObjectAnyPointer(void *p);
   static void streamer_CppyyLegacycLcLTStreamerObjectAnyPointer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerObjectAnyPointer*)
   {
      ::CppyyLegacy::TStreamerObjectAnyPointer *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerObjectAnyPointer >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerObjectAnyPointer", ::CppyyLegacy::TStreamerObjectAnyPointer::Class_Version(), "TStreamerElement.h", 349,
                  typeid(::CppyyLegacy::TStreamerObjectAnyPointer), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerObjectAnyPointer::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerObjectAnyPointer) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerObjectAnyPointer);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerObjectAnyPointer);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerObjectAnyPointer);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerObjectAnyPointer);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerObjectAnyPointer);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerObjectAnyPointer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerObjectAnyPointer*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerObjectAnyPointer*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAnyPointer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerString(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerString(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerString(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerString(void *p);
   static void destruct_CppyyLegacycLcLTStreamerString(void *p);
   static void streamer_CppyyLegacycLcLTStreamerString(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerString*)
   {
      ::CppyyLegacy::TStreamerString *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerString >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerString", ::CppyyLegacy::TStreamerString::Class_Version(), "TStreamerElement.h", 370,
                  typeid(::CppyyLegacy::TStreamerString), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerString::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerString) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerString);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerString);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerString);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerString);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerString);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerString*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerString*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerString*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerSTL(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerSTL(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerSTL(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerSTL(void *p);
   static void destruct_CppyyLegacycLcLTStreamerSTL(void *p);
   static void streamer_CppyyLegacycLcLTStreamerSTL(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerSTL*)
   {
      ::CppyyLegacy::TStreamerSTL *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerSTL >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerSTL", ::CppyyLegacy::TStreamerSTL::Class_Version(), "TStreamerElement.h", 388,
                  typeid(::CppyyLegacy::TStreamerSTL), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerSTL::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerSTL) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerSTL);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerSTL);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerSTL);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerSTL);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerSTL);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerSTL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerSTL*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerSTL*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void *new_CppyyLegacycLcLTStreamerSTLstring(void *p = 0);
   static void *newArray_CppyyLegacycLcLTStreamerSTLstring(Long_t size, void *p);
   static void delete_CppyyLegacycLcLTStreamerSTLstring(void *p);
   static void deleteArray_CppyyLegacycLcLTStreamerSTLstring(void *p);
   static void destruct_CppyyLegacycLcLTStreamerSTLstring(void *p);
   static void streamer_CppyyLegacycLcLTStreamerSTLstring(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TStreamerSTLstring*)
   {
      ::CppyyLegacy::TStreamerSTLstring *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TStreamerSTLstring >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TStreamerSTLstring", ::CppyyLegacy::TStreamerSTLstring::Class_Version(), "TStreamerElement.h", 421,
                  typeid(::CppyyLegacy::TStreamerSTLstring), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TStreamerSTLstring::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TStreamerSTLstring) );
      instance.SetNew(&new_CppyyLegacycLcLTStreamerSTLstring);
      instance.SetNewArray(&newArray_CppyyLegacycLcLTStreamerSTLstring);
      instance.SetDelete(&delete_CppyyLegacycLcLTStreamerSTLstring);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTStreamerSTLstring);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTStreamerSTLstring);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTStreamerSTLstring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TStreamerSTLstring*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TStreamerSTLstring*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTLstring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   static void delete_CppyyLegacycLcLTVirtualStreamerInfo(void *p);
   static void deleteArray_CppyyLegacycLcLTVirtualStreamerInfo(void *p);
   static void destruct_CppyyLegacycLcLTVirtualStreamerInfo(void *p);
   static void streamer_CppyyLegacycLcLTVirtualStreamerInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CppyyLegacy::TVirtualStreamerInfo*)
   {
      ::CppyyLegacy::TVirtualStreamerInfo *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TInstrumentedIsAProxy< ::CppyyLegacy::TVirtualStreamerInfo >(0);
      static ::CppyyLegacy::TGenericClassInfo 
         instance("CppyyLegacy::TVirtualStreamerInfo", ::CppyyLegacy::TVirtualStreamerInfo::Class_Version(), "TVirtualStreamerInfo.h", 39,
                  typeid(::CppyyLegacy::TVirtualStreamerInfo), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &::CppyyLegacy::TVirtualStreamerInfo::Dictionary, isa_proxy, 17,
                  sizeof(::CppyyLegacy::TVirtualStreamerInfo) );
      instance.SetDelete(&delete_CppyyLegacycLcLTVirtualStreamerInfo);
      instance.SetDeleteArray(&deleteArray_CppyyLegacycLcLTVirtualStreamerInfo);
      instance.SetDestructor(&destruct_CppyyLegacycLcLTVirtualStreamerInfo);
      instance.SetStreamerFunc(&streamer_CppyyLegacycLcLTVirtualStreamerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CppyyLegacy::TVirtualStreamerInfo*)
   {
      return GenerateInitInstanceLocal((::CppyyLegacy::TVirtualStreamerInfo*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualStreamerInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace CppyyLegacy

namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStorage::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStorage::Class_Name()
{
   return "CppyyLegacy::TStorage";
}

//______________________________________________________________________________
const char *TStorage::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStorage*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStorage::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStorage*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStorage::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStorage*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStorage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStorage*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TObject::Class_Name()
{
   return "CppyyLegacy::TObject";
}

//______________________________________________________________________________
const char *TObject::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TObject::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TObject::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObject*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TApplication::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TApplication::Class_Name()
{
   return "CppyyLegacy::TApplication";
}

//______________________________________________________________________________
const char *TApplication::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TApplication*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TApplication::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TApplication*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TApplication::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TApplication*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TApplication::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TApplication*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TString::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TString::Class_Name()
{
   return "CppyyLegacy::TString";
}

//______________________________________________________________________________
const char *TString::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TString*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TString::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TString*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TString::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TString*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TString::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TString*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TNamed::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNamed::Class_Name()
{
   return "CppyyLegacy::TNamed";
}

//______________________________________________________________________________
const char *TNamed::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TNamed*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNamed::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TNamed*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNamed::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TNamed*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNamed::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TNamed*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TDictionary::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDictionary::Class_Name()
{
   return "CppyyLegacy::TDictionary";
}

//______________________________________________________________________________
const char *TDictionary::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDictionary*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDictionary::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDictionary*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDictionary::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDictionary*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDictionary::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDictionary*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TDataType::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDataType::Class_Name()
{
   return "CppyyLegacy::TDataType";
}

//______________________________________________________________________________
const char *TDataType::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDataType*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDataType::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDataType*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDataType::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDataType*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDataType::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDataType*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TIterator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TIterator::Class_Name()
{
   return "CppyyLegacy::TIterator";
}

//______________________________________________________________________________
const char *TIterator::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TIterator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TIterator::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TIterator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TIterator::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TIterator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TIterator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TIterator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TVirtualMutex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualMutex::Class_Name()
{
   return "CppyyLegacy::TVirtualMutex";
}

//______________________________________________________________________________
const char *TVirtualMutex::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualMutex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualMutex::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualMutex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualMutex::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualMutex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualMutex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualMutex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TLockGuard::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLockGuard::Class_Name()
{
   return "CppyyLegacy::TLockGuard";
}

//______________________________________________________________________________
const char *TLockGuard::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TLockGuard*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLockGuard::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TLockGuard*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLockGuard::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TLockGuard*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLockGuard::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TLockGuard*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TVirtualRWMutex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualRWMutex::Class_Name()
{
   return "CppyyLegacy::TVirtualRWMutex";
}

//______________________________________________________________________________
const char *TVirtualRWMutex::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualRWMutex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualRWMutex::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualRWMutex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualRWMutex::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualRWMutex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualRWMutex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualRWMutex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TReadLockGuard::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TReadLockGuard::Class_Name()
{
   return "CppyyLegacy::TReadLockGuard";
}

//______________________________________________________________________________
const char *TReadLockGuard::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TReadLockGuard*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TReadLockGuard::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TReadLockGuard*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TReadLockGuard::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TReadLockGuard*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TReadLockGuard::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TReadLockGuard*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TWriteLockGuard::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TWriteLockGuard::Class_Name()
{
   return "CppyyLegacy::TWriteLockGuard";
}

//______________________________________________________________________________
const char *TWriteLockGuard::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TWriteLockGuard*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TWriteLockGuard::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TWriteLockGuard*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWriteLockGuard::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TWriteLockGuard*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWriteLockGuard::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TWriteLockGuard*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TCollection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCollection::Class_Name()
{
   return "CppyyLegacy::TCollection";
}

//______________________________________________________________________________
const char *TCollection::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCollection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCollection::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCollection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCollection::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCollection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TCollection*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TIter::Class_Name()
{
   return "CppyyLegacy::TIter";
}

//______________________________________________________________________________
const char *TIter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TIter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TIter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TIter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TSeqCollection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSeqCollection::Class_Name()
{
   return "CppyyLegacy::TSeqCollection";
}

//______________________________________________________________________________
const char *TSeqCollection::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSeqCollection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSeqCollection::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSeqCollection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSeqCollection::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSeqCollection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSeqCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSeqCollection*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TObjArray::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TObjArray::Class_Name()
{
   return "CppyyLegacy::TObjArray";
}

//______________________________________________________________________________
const char *TObjArray::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArray*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TObjArray::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArray*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TObjArray::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArray*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TObjArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArray*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TObjArrayIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TObjArrayIter::Class_Name()
{
   return "CppyyLegacy::TObjArrayIter";
}

//______________________________________________________________________________
const char *TObjArrayIter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArrayIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TObjArrayIter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArrayIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TObjArrayIter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArrayIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TObjArrayIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjArrayIter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TObjString::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TObjString::Class_Name()
{
   return "CppyyLegacy::TObjString";
}

//______________________________________________________________________________
const char *TObjString::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjString*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TObjString::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjString*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TObjString::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjString*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TObjString::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjString*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TClass::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TClass::Class_Name()
{
   return "CppyyLegacy::TClass";
}

//______________________________________________________________________________
const char *TClass::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClass*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TClass::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClass*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TClass::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClass*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TClass::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClass*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TBuffer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBuffer::Class_Name()
{
   return "CppyyLegacy::TBuffer";
}

//______________________________________________________________________________
const char *TBuffer::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBuffer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBuffer::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBuffer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBuffer::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBuffer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBuffer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBuffer*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TDatime::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDatime::Class_Name()
{
   return "CppyyLegacy::TDatime";
}

//______________________________________________________________________________
const char *TDatime::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDatime*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDatime::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDatime*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDatime::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDatime*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDatime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDatime*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TList::Class_Name()
{
   return "CppyyLegacy::TList";
}

//______________________________________________________________________________
const char *TList::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TList::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TList::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TList*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TListIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TListIter::Class_Name()
{
   return "CppyyLegacy::TListIter";
}

//______________________________________________________________________________
const char *TListIter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TListIter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TListIter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TListIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListIter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TUUID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUUID::Class_Name()
{
   return "CppyyLegacy::TUUID";
}

//______________________________________________________________________________
const char *TUUID::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUUID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUUID::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUUID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUUID::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUUID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUUID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUUID*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TDirectory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDirectory::Class_Name()
{
   return "CppyyLegacy::TDirectory";
}

//______________________________________________________________________________
const char *TDirectory::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDirectory::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDirectory::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDirectory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDirectory*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TEnvRec::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEnvRec::Class_Name()
{
   return "CppyyLegacy::TEnvRec";
}

//______________________________________________________________________________
const char *TEnvRec::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnvRec*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEnvRec::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnvRec*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEnvRec::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnvRec*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEnvRec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnvRec*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TEnv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEnv::Class_Name()
{
   return "CppyyLegacy::TEnv";
}

//______________________________________________________________________________
const char *TEnv::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEnv::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEnv::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEnv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnv*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TInetAddress::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TInetAddress::Class_Name()
{
   return "CppyyLegacy::TInetAddress";
}

//______________________________________________________________________________
const char *TInetAddress::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TInetAddress*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TInetAddress::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TInetAddress*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TInetAddress::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TInetAddress*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TInetAddress::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TInetAddress*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TMD5::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMD5::Class_Name()
{
   return "CppyyLegacy::TMD5";
}

//______________________________________________________________________________
const char *TMD5::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMD5*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMD5::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMD5*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMD5::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMD5*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMD5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMD5*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TMemberInspector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMemberInspector::Class_Name()
{
   return "CppyyLegacy::TMemberInspector";
}

//______________________________________________________________________________
const char *TMemberInspector::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMemberInspector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMemberInspector::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMemberInspector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMemberInspector::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMemberInspector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMemberInspector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMemberInspector*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TProcessID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProcessID::Class_Name()
{
   return "CppyyLegacy::TProcessID";
}

//______________________________________________________________________________
const char *TProcessID::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProcessID::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProcessID::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProcessID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessID*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TProcessUUID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProcessUUID::Class_Name()
{
   return "CppyyLegacy::TProcessUUID";
}

//______________________________________________________________________________
const char *TProcessUUID::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessUUID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProcessUUID::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessUUID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProcessUUID::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessUUID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProcessUUID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProcessUUID*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TRegexp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRegexp::Class_Name()
{
   return "CppyyLegacy::TRegexp";
}

//______________________________________________________________________________
const char *TRegexp::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TRegexp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRegexp::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TRegexp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRegexp::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TRegexp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRegexp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TRegexp*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TROOT::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TROOT::Class_Name()
{
   return "CppyyLegacy::TROOT";
}

//______________________________________________________________________________
const char *TROOT::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TROOT*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TROOT::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TROOT*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TROOT::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TROOT*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TROOT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TROOT*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TSignalHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSignalHandler::Class_Name()
{
   return "CppyyLegacy::TSignalHandler";
}

//______________________________________________________________________________
const char *TSignalHandler::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSignalHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSignalHandler::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSignalHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSignalHandler::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSignalHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSignalHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSignalHandler*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStdExceptionHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStdExceptionHandler::Class_Name()
{
   return "CppyyLegacy::TStdExceptionHandler";
}

//______________________________________________________________________________
const char *TStdExceptionHandler::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStdExceptionHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStdExceptionHandler::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStdExceptionHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStdExceptionHandler::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStdExceptionHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStdExceptionHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStdExceptionHandler*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TTime::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTime::Class_Name()
{
   return "CppyyLegacy::TTime";
}

//______________________________________________________________________________
const char *TTime::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TTime*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTime::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TTime*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTime::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TTime*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TTime*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TSystem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSystem::Class_Name()
{
   return "CppyyLegacy::TSystem";
}

//______________________________________________________________________________
const char *TSystem::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSystem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSystem::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSystem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSystem::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSystem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSystem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TSystem*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TTimeStamp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTimeStamp::Class_Name()
{
   return "CppyyLegacy::TTimeStamp";
}

//______________________________________________________________________________
const char *TTimeStamp::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TTimeStamp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTimeStamp::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TTimeStamp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTimeStamp::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TTimeStamp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTimeStamp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TTimeStamp*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr THashTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THashTable::Class_Name()
{
   return "CppyyLegacy::THashTable";
}

//______________________________________________________________________________
const char *THashTable::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THashTable::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THashTable::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THashTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashTable*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr THashTableIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THashTableIter::Class_Name()
{
   return "CppyyLegacy::THashTableIter";
}

//______________________________________________________________________________
const char *THashTableIter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashTableIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THashTableIter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashTableIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THashTableIter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashTableIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THashTableIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashTableIter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMap::Class_Name()
{
   return "CppyyLegacy::TMap";
}

//______________________________________________________________________________
const char *TMap::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMap::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMap::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMap*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TPair::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPair::Class_Name()
{
   return "CppyyLegacy::TPair";
}

//______________________________________________________________________________
const char *TPair::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPair*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPair::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPair*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPair::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPair*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPair::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TPair*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TMapIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMapIter::Class_Name()
{
   return "CppyyLegacy::TMapIter";
}

//______________________________________________________________________________
const char *TMapIter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMapIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMapIter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMapIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMapIter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMapIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMapIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMapIter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TUrl::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUrl::Class_Name()
{
   return "CppyyLegacy::TUrl";
}

//______________________________________________________________________________
const char *TUrl::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUrl*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUrl::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUrl*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUrl::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUrl*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUrl::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUrl*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TArray::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArray::Class_Name()
{
   return "CppyyLegacy::TArray";
}

//______________________________________________________________________________
const char *TArray::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TArray*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArray::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TArray*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArray::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TArray*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TArray*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TArrayC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArrayC::Class_Name()
{
   return "CppyyLegacy::TArrayC";
}

//______________________________________________________________________________
const char *TArrayC::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TArrayC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArrayC::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TArrayC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArrayC::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TArrayC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArrayC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TArrayC*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TBits::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBits::Class_Name()
{
   return "CppyyLegacy::TBits";
}

//______________________________________________________________________________
const char *TBits::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBits*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBits::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBits*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBits::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBits*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBits*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TClassTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TClassTable::Class_Name()
{
   return "CppyyLegacy::TClassTable";
}

//______________________________________________________________________________
const char *TClassTable::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TClassTable::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TClassTable::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TClassTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassTable*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TExMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TExMap::Class_Name()
{
   return "CppyyLegacy::TExMap";
}

//______________________________________________________________________________
const char *TExMap::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TExMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TExMap::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TExMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TExMap::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TExMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TExMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TExMap*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TExMapIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TExMapIter::Class_Name()
{
   return "CppyyLegacy::TExMapIter";
}

//______________________________________________________________________________
const char *TExMapIter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TExMapIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TExMapIter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TExMapIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TExMapIter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TExMapIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TExMapIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TExMapIter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr THashList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THashList::Class_Name()
{
   return "CppyyLegacy::THashList";
}

//______________________________________________________________________________
const char *THashList::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THashList::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THashList::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THashList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::THashList*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TObjectTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TObjectTable::Class_Name()
{
   return "CppyyLegacy::TObjectTable";
}

//______________________________________________________________________________
const char *TObjectTable::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjectTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TObjectTable::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjectTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TObjectTable::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjectTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TObjectTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TObjectTable*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TOrdCollection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TOrdCollection::Class_Name()
{
   return "CppyyLegacy::TOrdCollection";
}

//______________________________________________________________________________
const char *TOrdCollection::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TOrdCollection::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOrdCollection::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOrdCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollection*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TOrdCollectionIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TOrdCollectionIter::Class_Name()
{
   return "CppyyLegacy::TOrdCollectionIter";
}

//______________________________________________________________________________
const char *TOrdCollectionIter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollectionIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TOrdCollectionIter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollectionIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOrdCollectionIter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollectionIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOrdCollectionIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOrdCollectionIter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TUnixSystem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TUnixSystem::Class_Name()
{
   return "CppyyLegacy::TUnixSystem";
}

//______________________________________________________________________________
const char *TUnixSystem::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUnixSystem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TUnixSystem::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUnixSystem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TUnixSystem::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUnixSystem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TUnixSystem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TUnixSystem*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TBaseClass::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TBaseClass::Class_Name()
{
   return "CppyyLegacy::TBaseClass";
}

//______________________________________________________________________________
const char *TBaseClass::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBaseClass*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TBaseClass::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBaseClass*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBaseClass::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBaseClass*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBaseClass::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TBaseClass*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TClassGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TClassGenerator::Class_Name()
{
   return "CppyyLegacy::TClassGenerator";
}

//______________________________________________________________________________
const char *TClassGenerator::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TClassGenerator::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TClassGenerator::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TClassGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TClassGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TDataMember::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDataMember::Class_Name()
{
   return "CppyyLegacy::TDataMember";
}

//______________________________________________________________________________
const char *TDataMember::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDataMember*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDataMember::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDataMember*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDataMember::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDataMember*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDataMember::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDataMember*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TOptionListItem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TOptionListItem::Class_Name()
{
   return "CppyyLegacy::TOptionListItem";
}

//______________________________________________________________________________
const char *TOptionListItem::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOptionListItem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TOptionListItem::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOptionListItem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOptionListItem::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOptionListItem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOptionListItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TOptionListItem*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TDictAttributeMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDictAttributeMap::Class_Name()
{
   return "CppyyLegacy::TDictAttributeMap";
}

//______________________________________________________________________________
const char *TDictAttributeMap::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDictAttributeMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDictAttributeMap::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDictAttributeMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDictAttributeMap::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDictAttributeMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDictAttributeMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TDictAttributeMap*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TGlobal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGlobal::Class_Name()
{
   return "CppyyLegacy::TGlobal";
}

//______________________________________________________________________________
const char *TGlobal::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TGlobal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGlobal::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TGlobal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGlobal::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TGlobal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGlobal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TGlobal*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TEnum::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEnum::Class_Name()
{
   return "CppyyLegacy::TEnum";
}

//______________________________________________________________________________
const char *TEnum::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnum*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEnum::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnum*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEnum::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnum*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEnum::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnum*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TEnumConstant::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEnumConstant::Class_Name()
{
   return "CppyyLegacy::TEnumConstant";
}

//______________________________________________________________________________
const char *TEnumConstant::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnumConstant*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEnumConstant::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnumConstant*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEnumConstant::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnumConstant*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEnumConstant::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TEnumConstant*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TFunction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFunction::Class_Name()
{
   return "CppyyLegacy::TFunction";
}

//______________________________________________________________________________
const char *TFunction::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFunction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFunction::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFunction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFunction::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFunction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFunction*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TFunctionTemplate::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFunctionTemplate::Class_Name()
{
   return "CppyyLegacy::TFunctionTemplate";
}

//______________________________________________________________________________
const char *TFunctionTemplate::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFunctionTemplate*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFunctionTemplate::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFunctionTemplate*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFunctionTemplate::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFunctionTemplate*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFunctionTemplate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TFunctionTemplate*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TInterpreter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TInterpreter::Class_Name()
{
   return "CppyyLegacy::TInterpreter";
}

//______________________________________________________________________________
const char *TInterpreter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TInterpreter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TInterpreter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TInterpreter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TInterpreter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TInterpreter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TInterpreter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TInterpreter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TListOfDataMembers::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TListOfDataMembers::Class_Name()
{
   return "CppyyLegacy::TListOfDataMembers";
}

//______________________________________________________________________________
const char *TListOfDataMembers::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfDataMembers*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TListOfDataMembers::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfDataMembers*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TListOfDataMembers::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfDataMembers*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TListOfDataMembers::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfDataMembers*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TListOfEnums::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TListOfEnums::Class_Name()
{
   return "CppyyLegacy::TListOfEnums";
}

//______________________________________________________________________________
const char *TListOfEnums::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnums*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TListOfEnums::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnums*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TListOfEnums::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnums*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TListOfEnums::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnums*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TListOfEnumsWithLock::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TListOfEnumsWithLock::Class_Name()
{
   return "CppyyLegacy::TListOfEnumsWithLock";
}

//______________________________________________________________________________
const char *TListOfEnumsWithLock::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLock*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TListOfEnumsWithLock::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLock*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TListOfEnumsWithLock::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLock*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TListOfEnumsWithLock::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLock*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TListOfEnumsWithLockIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TListOfEnumsWithLockIter::Class_Name()
{
   return "CppyyLegacy::TListOfEnumsWithLockIter";
}

//______________________________________________________________________________
const char *TListOfEnumsWithLockIter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLockIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TListOfEnumsWithLockIter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLockIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TListOfEnumsWithLockIter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLockIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TListOfEnumsWithLockIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfEnumsWithLockIter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TListOfFunctions::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TListOfFunctions::Class_Name()
{
   return "CppyyLegacy::TListOfFunctions";
}

//______________________________________________________________________________
const char *TListOfFunctions::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctions*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TListOfFunctions::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctions*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TListOfFunctions::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctions*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TListOfFunctions::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctions*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TListOfFunctionsIter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TListOfFunctionsIter::Class_Name()
{
   return "CppyyLegacy::TListOfFunctionsIter";
}

//______________________________________________________________________________
const char *TListOfFunctionsIter::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionsIter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TListOfFunctionsIter::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionsIter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TListOfFunctionsIter::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionsIter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TListOfFunctionsIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionsIter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TListOfFunctionTemplates::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TListOfFunctionTemplates::Class_Name()
{
   return "CppyyLegacy::TListOfFunctionTemplates";
}

//______________________________________________________________________________
const char *TListOfFunctionTemplates::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionTemplates*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TListOfFunctionTemplates::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionTemplates*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TListOfFunctionTemplates::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionTemplates*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TListOfFunctionTemplates::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TListOfFunctionTemplates*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TMethodArg::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMethodArg::Class_Name()
{
   return "CppyyLegacy::TMethodArg";
}

//______________________________________________________________________________
const char *TMethodArg::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMethodArg*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMethodArg::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMethodArg*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMethodArg::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMethodArg*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMethodArg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMethodArg*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TMethod::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TMethod::Class_Name()
{
   return "CppyyLegacy::TMethod";
}

//______________________________________________________________________________
const char *TMethod::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMethod*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TMethod::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMethod*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMethod::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMethod*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMethod::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TMethod*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TProtoClass::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProtoClass::Class_Name()
{
   return "CppyyLegacy::TProtoClass";
}

//______________________________________________________________________________
const char *TProtoClass::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProtoClass::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProtoClass::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProtoClass::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TProtoClass::TProtoRealData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TProtoClass::TProtoRealData::Class_Name()
{
   return "CppyyLegacy::TProtoClass::TProtoRealData";
}

//______________________________________________________________________________
const char *TProtoClass::TProtoRealData::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass::TProtoRealData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TProtoClass::TProtoRealData::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass::TProtoRealData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProtoClass::TProtoRealData::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass::TProtoRealData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProtoClass::TProtoRealData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TProtoClass::TProtoRealData*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TRealData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRealData::Class_Name()
{
   return "CppyyLegacy::TRealData";
}

//______________________________________________________________________________
const char *TRealData::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TRealData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRealData::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TRealData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRealData::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TRealData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRealData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TRealData*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerElement::Class_Name()
{
   return "CppyyLegacy::TStreamerElement";
}

//______________________________________________________________________________
const char *TStreamerElement::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerElement::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerElement::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerElement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerBase::Class_Name()
{
   return "CppyyLegacy::TStreamerBase";
}

//______________________________________________________________________________
const char *TStreamerBase::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerBase::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerBase::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerBasicPointer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerBasicPointer::Class_Name()
{
   return "CppyyLegacy::TStreamerBasicPointer";
}

//______________________________________________________________________________
const char *TStreamerBasicPointer::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicPointer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerBasicPointer::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicPointer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerBasicPointer::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicPointer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerBasicPointer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicPointer*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerLoop::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerLoop::Class_Name()
{
   return "CppyyLegacy::TStreamerLoop";
}

//______________________________________________________________________________
const char *TStreamerLoop::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerLoop*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerLoop::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerLoop*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerLoop::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerLoop*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerLoop::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerLoop*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerBasicType::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerBasicType::Class_Name()
{
   return "CppyyLegacy::TStreamerBasicType";
}

//______________________________________________________________________________
const char *TStreamerBasicType::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicType*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerBasicType::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicType*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerBasicType::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicType*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerBasicType::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerBasicType*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerObject::Class_Name()
{
   return "CppyyLegacy::TStreamerObject";
}

//______________________________________________________________________________
const char *TStreamerObject::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerObject::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerObject::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObject*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerObjectAny::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerObjectAny::Class_Name()
{
   return "CppyyLegacy::TStreamerObjectAny";
}

//______________________________________________________________________________
const char *TStreamerObjectAny::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAny*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerObjectAny::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAny*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerObjectAny::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAny*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerObjectAny::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAny*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerObjectPointer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerObjectPointer::Class_Name()
{
   return "CppyyLegacy::TStreamerObjectPointer";
}

//______________________________________________________________________________
const char *TStreamerObjectPointer::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectPointer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerObjectPointer::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectPointer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerObjectPointer::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectPointer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerObjectPointer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectPointer*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerObjectAnyPointer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerObjectAnyPointer::Class_Name()
{
   return "CppyyLegacy::TStreamerObjectAnyPointer";
}

//______________________________________________________________________________
const char *TStreamerObjectAnyPointer::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAnyPointer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerObjectAnyPointer::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAnyPointer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerObjectAnyPointer::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAnyPointer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerObjectAnyPointer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerObjectAnyPointer*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerString::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerString::Class_Name()
{
   return "CppyyLegacy::TStreamerString";
}

//______________________________________________________________________________
const char *TStreamerString::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerString*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerString::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerString*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerString::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerString*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerString::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerString*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerSTL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerSTL::Class_Name()
{
   return "CppyyLegacy::TStreamerSTL";
}

//______________________________________________________________________________
const char *TStreamerSTL::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerSTL::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerSTL::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerSTL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTL*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TStreamerSTLstring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerSTLstring::Class_Name()
{
   return "CppyyLegacy::TStreamerSTLstring";
}

//______________________________________________________________________________
const char *TStreamerSTLstring::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTLstring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerSTLstring::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTLstring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerSTLstring::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTLstring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerSTLstring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TStreamerSTLstring*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
//______________________________________________________________________________
atomic_TClass_ptr TVirtualStreamerInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualStreamerInfo::Class_Name()
{
   return "CppyyLegacy::TVirtualStreamerInfo";
}

//______________________________________________________________________________
const char *TVirtualStreamerInfo::ImplFileName()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualStreamerInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualStreamerInfo::ImplFileLine()
{
   return ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualStreamerInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualStreamerInfo::Dictionary()
{
   fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualStreamerInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualStreamerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::CppyyLegacy::GenerateInitInstanceLocal((const ::CppyyLegacy::TVirtualStreamerInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   static TClass *stdcLcLstring_Dictionary();
   static void stdcLcLstring_TClassManip(TClass*);
   static void *new_stdcLcLstring(void *p = 0);
   static void *newArray_stdcLcLstring(Long_t size, void *p);
   static void delete_stdcLcLstring(void *p);
   static void deleteArray_stdcLcLstring(void *p);
   static void destruct_stdcLcLstring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::string*)
   {
      std::string *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::string));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::string", "string", 1608,
                  typeid(std::string), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLstring_Dictionary, isa_proxy, 0,
                  sizeof(std::string) );
      instance.SetNew(&new_stdcLcLstring);
      instance.SetNewArray(&newArray_stdcLcLstring);
      instance.SetDelete(&delete_stdcLcLstring);
      instance.SetDeleteArray(&deleteArray_stdcLcLstring);
      instance.SetDestructor(&destruct_stdcLcLstring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const std::string*)
   {
      return GenerateInitInstanceLocal((std::string*)0);
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::string*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLstring_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::string*)0x0)->GetClass();
      stdcLcLstring_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLstring_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_timespec(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::timespec : new ::timespec;
   }
   static void *newArray_timespec(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::timespec[nElements] : new ::timespec[nElements];
   }
   // Wrapper around operator delete
   static void delete_timespec(void *p) {
      delete ((::timespec*)p);
   }
   static void deleteArray_timespec(void *p) {
      delete [] ((::timespec*)p);
   }
   static void destruct_timespec(void *p) {
      typedef ::timespec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::timespec

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPintcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,int> : new std::pair<const int,int>;
   }
   static void *newArray_stdcLcLpairlEconstsPintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,int>[nElements] : new std::pair<const int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPintcOintgR(void *p) {
      delete ((std::pair<const int,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPintcOintgR(void *p) {
      delete [] ((std::pair<const int,int>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPintcOintgR(void *p) {
      typedef std::pair<const int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const int,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEstdcLcLstringcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,int> : new std::pair<std::string,int>;
   }
   static void *newArray_stdcLcLpairlEstdcLcLstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,int>[nElements] : new std::pair<std::string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEstdcLcLstringcOintgR(void *p) {
      delete ((std::pair<std::string,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOintgR(void *p) {
      delete [] ((std::pair<std::string,int>*)p);
   }
   static void destruct_stdcLcLpairlEstdcLcLstringcOintgR(void *p) {
      typedef std::pair<std::string,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<std::string,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPdoublecOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,char*> : new std::pair<const double,char*>;
   }
   static void *newArray_stdcLcLpairlEconstsPdoublecOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,char*>[nElements] : new std::pair<const double,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPdoublecOcharmUgR(void *p) {
      delete ((std::pair<const double,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPdoublecOcharmUgR(void *p) {
      delete [] ((std::pair<const double,char*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPdoublecOcharmUgR(void *p) {
      typedef std::pair<const double,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const double,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPdoublecOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,void*> : new std::pair<const double,void*>;
   }
   static void *newArray_stdcLcLpairlEconstsPdoublecOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,void*>[nElements] : new std::pair<const double,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPdoublecOvoidmUgR(void *p) {
      delete ((std::pair<const double,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPdoublecOvoidmUgR(void *p) {
      delete [] ((std::pair<const double,void*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPdoublecOvoidmUgR(void *p) {
      typedef std::pair<const double,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const double,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPdoublecOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,double> : new std::pair<const double,double>;
   }
   static void *newArray_stdcLcLpairlEconstsPdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,double>[nElements] : new std::pair<const double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPdoublecOdoublegR(void *p) {
      delete ((std::pair<const double,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPdoublecOdoublegR(void *p) {
      delete [] ((std::pair<const double,double>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPdoublecOdoublegR(void *p) {
      typedef std::pair<const double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const double,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPdoublecOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,float> : new std::pair<const double,float>;
   }
   static void *newArray_stdcLcLpairlEconstsPdoublecOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,float>[nElements] : new std::pair<const double,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPdoublecOfloatgR(void *p) {
      delete ((std::pair<const double,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPdoublecOfloatgR(void *p) {
      delete [] ((std::pair<const double,float>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPdoublecOfloatgR(void *p) {
      typedef std::pair<const double,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const double,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPdoublecOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,long> : new std::pair<const double,long>;
   }
   static void *newArray_stdcLcLpairlEconstsPdoublecOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,long>[nElements] : new std::pair<const double,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPdoublecOlonggR(void *p) {
      delete ((std::pair<const double,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPdoublecOlonggR(void *p) {
      delete [] ((std::pair<const double,long>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPdoublecOlonggR(void *p) {
      typedef std::pair<const double,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const double,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPdoublecOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,int> : new std::pair<const double,int>;
   }
   static void *newArray_stdcLcLpairlEconstsPdoublecOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const double,int>[nElements] : new std::pair<const double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPdoublecOintgR(void *p) {
      delete ((std::pair<const double,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPdoublecOintgR(void *p) {
      delete [] ((std::pair<const double,int>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPdoublecOintgR(void *p) {
      typedef std::pair<const double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const double,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPfloatcOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,char*> : new std::pair<const float,char*>;
   }
   static void *newArray_stdcLcLpairlEconstsPfloatcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,char*>[nElements] : new std::pair<const float,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPfloatcOcharmUgR(void *p) {
      delete ((std::pair<const float,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPfloatcOcharmUgR(void *p) {
      delete [] ((std::pair<const float,char*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPfloatcOcharmUgR(void *p) {
      typedef std::pair<const float,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const float,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPfloatcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,void*> : new std::pair<const float,void*>;
   }
   static void *newArray_stdcLcLpairlEconstsPfloatcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,void*>[nElements] : new std::pair<const float,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPfloatcOvoidmUgR(void *p) {
      delete ((std::pair<const float,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPfloatcOvoidmUgR(void *p) {
      delete [] ((std::pair<const float,void*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPfloatcOvoidmUgR(void *p) {
      typedef std::pair<const float,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const float,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPfloatcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,double> : new std::pair<const float,double>;
   }
   static void *newArray_stdcLcLpairlEconstsPfloatcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,double>[nElements] : new std::pair<const float,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPfloatcOdoublegR(void *p) {
      delete ((std::pair<const float,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPfloatcOdoublegR(void *p) {
      delete [] ((std::pair<const float,double>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPfloatcOdoublegR(void *p) {
      typedef std::pair<const float,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const float,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPfloatcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,float> : new std::pair<const float,float>;
   }
   static void *newArray_stdcLcLpairlEconstsPfloatcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,float>[nElements] : new std::pair<const float,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPfloatcOfloatgR(void *p) {
      delete ((std::pair<const float,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPfloatcOfloatgR(void *p) {
      delete [] ((std::pair<const float,float>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPfloatcOfloatgR(void *p) {
      typedef std::pair<const float,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const float,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPfloatcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,long> : new std::pair<const float,long>;
   }
   static void *newArray_stdcLcLpairlEconstsPfloatcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,long>[nElements] : new std::pair<const float,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPfloatcOlonggR(void *p) {
      delete ((std::pair<const float,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPfloatcOlonggR(void *p) {
      delete [] ((std::pair<const float,long>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPfloatcOlonggR(void *p) {
      typedef std::pair<const float,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const float,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPfloatcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,int> : new std::pair<const float,int>;
   }
   static void *newArray_stdcLcLpairlEconstsPfloatcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const float,int>[nElements] : new std::pair<const float,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPfloatcOintgR(void *p) {
      delete ((std::pair<const float,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPfloatcOintgR(void *p) {
      delete [] ((std::pair<const float,int>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPfloatcOintgR(void *p) {
      typedef std::pair<const float,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const float,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPlongcOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,char*> : new std::pair<const long,char*>;
   }
   static void *newArray_stdcLcLpairlEconstsPlongcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,char*>[nElements] : new std::pair<const long,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPlongcOcharmUgR(void *p) {
      delete ((std::pair<const long,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPlongcOcharmUgR(void *p) {
      delete [] ((std::pair<const long,char*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPlongcOcharmUgR(void *p) {
      typedef std::pair<const long,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const long,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPlongcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,void*> : new std::pair<const long,void*>;
   }
   static void *newArray_stdcLcLpairlEconstsPlongcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,void*>[nElements] : new std::pair<const long,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPlongcOvoidmUgR(void *p) {
      delete ((std::pair<const long,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPlongcOvoidmUgR(void *p) {
      delete [] ((std::pair<const long,void*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPlongcOvoidmUgR(void *p) {
      typedef std::pair<const long,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const long,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPlongcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,double> : new std::pair<const long,double>;
   }
   static void *newArray_stdcLcLpairlEconstsPlongcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,double>[nElements] : new std::pair<const long,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPlongcOdoublegR(void *p) {
      delete ((std::pair<const long,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPlongcOdoublegR(void *p) {
      delete [] ((std::pair<const long,double>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPlongcOdoublegR(void *p) {
      typedef std::pair<const long,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const long,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPlongcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,float> : new std::pair<const long,float>;
   }
   static void *newArray_stdcLcLpairlEconstsPlongcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,float>[nElements] : new std::pair<const long,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPlongcOfloatgR(void *p) {
      delete ((std::pair<const long,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPlongcOfloatgR(void *p) {
      delete [] ((std::pair<const long,float>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPlongcOfloatgR(void *p) {
      typedef std::pair<const long,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const long,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPlongcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,long> : new std::pair<const long,long>;
   }
   static void *newArray_stdcLcLpairlEconstsPlongcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,long>[nElements] : new std::pair<const long,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPlongcOlonggR(void *p) {
      delete ((std::pair<const long,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPlongcOlonggR(void *p) {
      delete [] ((std::pair<const long,long>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPlongcOlonggR(void *p) {
      typedef std::pair<const long,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const long,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPlongcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,int> : new std::pair<const long,int>;
   }
   static void *newArray_stdcLcLpairlEconstsPlongcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const long,int>[nElements] : new std::pair<const long,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPlongcOintgR(void *p) {
      delete ((std::pair<const long,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPlongcOintgR(void *p) {
      delete [] ((std::pair<const long,int>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPlongcOintgR(void *p) {
      typedef std::pair<const long,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const long,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPintcOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,char*> : new std::pair<const int,char*>;
   }
   static void *newArray_stdcLcLpairlEconstsPintcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,char*>[nElements] : new std::pair<const int,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPintcOcharmUgR(void *p) {
      delete ((std::pair<const int,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPintcOcharmUgR(void *p) {
      delete [] ((std::pair<const int,char*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPintcOcharmUgR(void *p) {
      typedef std::pair<const int,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const int,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPintcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,void*> : new std::pair<const int,void*>;
   }
   static void *newArray_stdcLcLpairlEconstsPintcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,void*>[nElements] : new std::pair<const int,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPintcOvoidmUgR(void *p) {
      delete ((std::pair<const int,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPintcOvoidmUgR(void *p) {
      delete [] ((std::pair<const int,void*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPintcOvoidmUgR(void *p) {
      typedef std::pair<const int,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const int,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPintcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,double> : new std::pair<const int,double>;
   }
   static void *newArray_stdcLcLpairlEconstsPintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,double>[nElements] : new std::pair<const int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPintcOdoublegR(void *p) {
      delete ((std::pair<const int,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPintcOdoublegR(void *p) {
      delete [] ((std::pair<const int,double>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPintcOdoublegR(void *p) {
      typedef std::pair<const int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const int,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPintcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,float> : new std::pair<const int,float>;
   }
   static void *newArray_stdcLcLpairlEconstsPintcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,float>[nElements] : new std::pair<const int,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPintcOfloatgR(void *p) {
      delete ((std::pair<const int,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPintcOfloatgR(void *p) {
      delete [] ((std::pair<const int,float>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPintcOfloatgR(void *p) {
      typedef std::pair<const int,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const int,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPintcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,long> : new std::pair<const int,long>;
   }
   static void *newArray_stdcLcLpairlEconstsPintcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const int,long>[nElements] : new std::pair<const int,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPintcOlonggR(void *p) {
      delete ((std::pair<const int,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPintcOlonggR(void *p) {
      delete [] ((std::pair<const int,long>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPintcOlonggR(void *p) {
      typedef std::pair<const int,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const int,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,void*> : new std::pair<const std::string,void*>;
   }
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,void*>[nElements] : new std::pair<const std::string,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(void *p) {
      delete ((std::pair<const std::string,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(void *p) {
      delete [] ((std::pair<const std::string,void*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOvoidmUgR(void *p) {
      typedef std::pair<const std::string,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const std::string,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,double> : new std::pair<const std::string,double>;
   }
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,double>[nElements] : new std::pair<const std::string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(void *p) {
      delete ((std::pair<const std::string,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(void *p) {
      delete [] ((std::pair<const std::string,double>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOdoublegR(void *p) {
      typedef std::pair<const std::string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const std::string,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,float> : new std::pair<const std::string,float>;
   }
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,float>[nElements] : new std::pair<const std::string,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(void *p) {
      delete ((std::pair<const std::string,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(void *p) {
      delete [] ((std::pair<const std::string,float>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOfloatgR(void *p) {
      typedef std::pair<const std::string,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const std::string,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,long> : new std::pair<const std::string,long>;
   }
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,long>[nElements] : new std::pair<const std::string,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(void *p) {
      delete ((std::pair<const std::string,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(void *p) {
      delete [] ((std::pair<const std::string,long>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOlonggR(void *p) {
      typedef std::pair<const std::string,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const std::string,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPstdcLcLstringcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,int> : new std::pair<const std::string,int>;
   }
   static void *newArray_stdcLcLpairlEconstsPstdcLcLstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const std::string,int>[nElements] : new std::pair<const std::string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPstdcLcLstringcOintgR(void *p) {
      delete ((std::pair<const std::string,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPstdcLcLstringcOintgR(void *p) {
      delete [] ((std::pair<const std::string,int>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPstdcLcLstringcOintgR(void *p) {
      typedef std::pair<const std::string,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const std::string,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPcharmUcOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,char*> : new std::pair<const char*,char*>;
   }
   static void *newArray_stdcLcLpairlEconstsPcharmUcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,char*>[nElements] : new std::pair<const char*,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPcharmUcOcharmUgR(void *p) {
      delete ((std::pair<const char*,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOcharmUgR(void *p) {
      delete [] ((std::pair<const char*,char*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPcharmUcOcharmUgR(void *p) {
      typedef std::pair<const char*,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const char*,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPcharmUcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,void*> : new std::pair<const char*,void*>;
   }
   static void *newArray_stdcLcLpairlEconstsPcharmUcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,void*>[nElements] : new std::pair<const char*,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPcharmUcOvoidmUgR(void *p) {
      delete ((std::pair<const char*,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOvoidmUgR(void *p) {
      delete [] ((std::pair<const char*,void*>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPcharmUcOvoidmUgR(void *p) {
      typedef std::pair<const char*,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const char*,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPcharmUcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,double> : new std::pair<const char*,double>;
   }
   static void *newArray_stdcLcLpairlEconstsPcharmUcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,double>[nElements] : new std::pair<const char*,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPcharmUcOdoublegR(void *p) {
      delete ((std::pair<const char*,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOdoublegR(void *p) {
      delete [] ((std::pair<const char*,double>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPcharmUcOdoublegR(void *p) {
      typedef std::pair<const char*,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const char*,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPcharmUcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,float> : new std::pair<const char*,float>;
   }
   static void *newArray_stdcLcLpairlEconstsPcharmUcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,float>[nElements] : new std::pair<const char*,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPcharmUcOfloatgR(void *p) {
      delete ((std::pair<const char*,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOfloatgR(void *p) {
      delete [] ((std::pair<const char*,float>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPcharmUcOfloatgR(void *p) {
      typedef std::pair<const char*,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const char*,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPcharmUcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,long> : new std::pair<const char*,long>;
   }
   static void *newArray_stdcLcLpairlEconstsPcharmUcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,long>[nElements] : new std::pair<const char*,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPcharmUcOlonggR(void *p) {
      delete ((std::pair<const char*,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOlonggR(void *p) {
      delete [] ((std::pair<const char*,long>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPcharmUcOlonggR(void *p) {
      typedef std::pair<const char*,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const char*,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEconstsPcharmUcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,int> : new std::pair<const char*,int>;
   }
   static void *newArray_stdcLcLpairlEconstsPcharmUcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<const char*,int>[nElements] : new std::pair<const char*,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEconstsPcharmUcOintgR(void *p) {
      delete ((std::pair<const char*,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEconstsPcharmUcOintgR(void *p) {
      delete [] ((std::pair<const char*,int>*)p);
   }
   static void destruct_stdcLcLpairlEconstsPcharmUcOintgR(void *p) {
      typedef std::pair<const char*,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<const char*,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEdoublecOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,char*> : new std::pair<double,char*>;
   }
   static void *newArray_stdcLcLpairlEdoublecOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,char*>[nElements] : new std::pair<double,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEdoublecOcharmUgR(void *p) {
      delete ((std::pair<double,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlEdoublecOcharmUgR(void *p) {
      delete [] ((std::pair<double,char*>*)p);
   }
   static void destruct_stdcLcLpairlEdoublecOcharmUgR(void *p) {
      typedef std::pair<double,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<double,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEdoublecOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,void*> : new std::pair<double,void*>;
   }
   static void *newArray_stdcLcLpairlEdoublecOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,void*>[nElements] : new std::pair<double,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEdoublecOvoidmUgR(void *p) {
      delete ((std::pair<double,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEdoublecOvoidmUgR(void *p) {
      delete [] ((std::pair<double,void*>*)p);
   }
   static void destruct_stdcLcLpairlEdoublecOvoidmUgR(void *p) {
      typedef std::pair<double,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<double,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEdoublecOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,double> : new std::pair<double,double>;
   }
   static void *newArray_stdcLcLpairlEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,double>[nElements] : new std::pair<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEdoublecOdoublegR(void *p) {
      delete ((std::pair<double,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEdoublecOdoublegR(void *p) {
      delete [] ((std::pair<double,double>*)p);
   }
   static void destruct_stdcLcLpairlEdoublecOdoublegR(void *p) {
      typedef std::pair<double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<double,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEdoublecOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,float> : new std::pair<double,float>;
   }
   static void *newArray_stdcLcLpairlEdoublecOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,float>[nElements] : new std::pair<double,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEdoublecOfloatgR(void *p) {
      delete ((std::pair<double,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEdoublecOfloatgR(void *p) {
      delete [] ((std::pair<double,float>*)p);
   }
   static void destruct_stdcLcLpairlEdoublecOfloatgR(void *p) {
      typedef std::pair<double,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<double,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEdoublecOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,long> : new std::pair<double,long>;
   }
   static void *newArray_stdcLcLpairlEdoublecOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,long>[nElements] : new std::pair<double,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEdoublecOlonggR(void *p) {
      delete ((std::pair<double,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEdoublecOlonggR(void *p) {
      delete [] ((std::pair<double,long>*)p);
   }
   static void destruct_stdcLcLpairlEdoublecOlonggR(void *p) {
      typedef std::pair<double,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<double,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEdoublecOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,int> : new std::pair<double,int>;
   }
   static void *newArray_stdcLcLpairlEdoublecOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<double,int>[nElements] : new std::pair<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEdoublecOintgR(void *p) {
      delete ((std::pair<double,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEdoublecOintgR(void *p) {
      delete [] ((std::pair<double,int>*)p);
   }
   static void destruct_stdcLcLpairlEdoublecOintgR(void *p) {
      typedef std::pair<double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<double,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEfloatcOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,char*> : new std::pair<float,char*>;
   }
   static void *newArray_stdcLcLpairlEfloatcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,char*>[nElements] : new std::pair<float,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEfloatcOcharmUgR(void *p) {
      delete ((std::pair<float,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlEfloatcOcharmUgR(void *p) {
      delete [] ((std::pair<float,char*>*)p);
   }
   static void destruct_stdcLcLpairlEfloatcOcharmUgR(void *p) {
      typedef std::pair<float,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<float,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEfloatcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,void*> : new std::pair<float,void*>;
   }
   static void *newArray_stdcLcLpairlEfloatcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,void*>[nElements] : new std::pair<float,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEfloatcOvoidmUgR(void *p) {
      delete ((std::pair<float,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEfloatcOvoidmUgR(void *p) {
      delete [] ((std::pair<float,void*>*)p);
   }
   static void destruct_stdcLcLpairlEfloatcOvoidmUgR(void *p) {
      typedef std::pair<float,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<float,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEfloatcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,double> : new std::pair<float,double>;
   }
   static void *newArray_stdcLcLpairlEfloatcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,double>[nElements] : new std::pair<float,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEfloatcOdoublegR(void *p) {
      delete ((std::pair<float,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEfloatcOdoublegR(void *p) {
      delete [] ((std::pair<float,double>*)p);
   }
   static void destruct_stdcLcLpairlEfloatcOdoublegR(void *p) {
      typedef std::pair<float,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<float,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEfloatcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,float> : new std::pair<float,float>;
   }
   static void *newArray_stdcLcLpairlEfloatcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,float>[nElements] : new std::pair<float,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEfloatcOfloatgR(void *p) {
      delete ((std::pair<float,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEfloatcOfloatgR(void *p) {
      delete [] ((std::pair<float,float>*)p);
   }
   static void destruct_stdcLcLpairlEfloatcOfloatgR(void *p) {
      typedef std::pair<float,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<float,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEfloatcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,long> : new std::pair<float,long>;
   }
   static void *newArray_stdcLcLpairlEfloatcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,long>[nElements] : new std::pair<float,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEfloatcOlonggR(void *p) {
      delete ((std::pair<float,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEfloatcOlonggR(void *p) {
      delete [] ((std::pair<float,long>*)p);
   }
   static void destruct_stdcLcLpairlEfloatcOlonggR(void *p) {
      typedef std::pair<float,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<float,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEfloatcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,int> : new std::pair<float,int>;
   }
   static void *newArray_stdcLcLpairlEfloatcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<float,int>[nElements] : new std::pair<float,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEfloatcOintgR(void *p) {
      delete ((std::pair<float,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEfloatcOintgR(void *p) {
      delete [] ((std::pair<float,int>*)p);
   }
   static void destruct_stdcLcLpairlEfloatcOintgR(void *p) {
      typedef std::pair<float,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<float,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlElongcOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,char*> : new std::pair<long,char*>;
   }
   static void *newArray_stdcLcLpairlElongcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,char*>[nElements] : new std::pair<long,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlElongcOcharmUgR(void *p) {
      delete ((std::pair<long,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlElongcOcharmUgR(void *p) {
      delete [] ((std::pair<long,char*>*)p);
   }
   static void destruct_stdcLcLpairlElongcOcharmUgR(void *p) {
      typedef std::pair<long,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<long,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlElongcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,void*> : new std::pair<long,void*>;
   }
   static void *newArray_stdcLcLpairlElongcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,void*>[nElements] : new std::pair<long,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlElongcOvoidmUgR(void *p) {
      delete ((std::pair<long,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlElongcOvoidmUgR(void *p) {
      delete [] ((std::pair<long,void*>*)p);
   }
   static void destruct_stdcLcLpairlElongcOvoidmUgR(void *p) {
      typedef std::pair<long,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<long,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlElongcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,double> : new std::pair<long,double>;
   }
   static void *newArray_stdcLcLpairlElongcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,double>[nElements] : new std::pair<long,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlElongcOdoublegR(void *p) {
      delete ((std::pair<long,double>*)p);
   }
   static void deleteArray_stdcLcLpairlElongcOdoublegR(void *p) {
      delete [] ((std::pair<long,double>*)p);
   }
   static void destruct_stdcLcLpairlElongcOdoublegR(void *p) {
      typedef std::pair<long,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<long,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlElongcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,float> : new std::pair<long,float>;
   }
   static void *newArray_stdcLcLpairlElongcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,float>[nElements] : new std::pair<long,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlElongcOfloatgR(void *p) {
      delete ((std::pair<long,float>*)p);
   }
   static void deleteArray_stdcLcLpairlElongcOfloatgR(void *p) {
      delete [] ((std::pair<long,float>*)p);
   }
   static void destruct_stdcLcLpairlElongcOfloatgR(void *p) {
      typedef std::pair<long,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<long,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlElongcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,long> : new std::pair<long,long>;
   }
   static void *newArray_stdcLcLpairlElongcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,long>[nElements] : new std::pair<long,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlElongcOlonggR(void *p) {
      delete ((std::pair<long,long>*)p);
   }
   static void deleteArray_stdcLcLpairlElongcOlonggR(void *p) {
      delete [] ((std::pair<long,long>*)p);
   }
   static void destruct_stdcLcLpairlElongcOlonggR(void *p) {
      typedef std::pair<long,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<long,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlElongcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,int> : new std::pair<long,int>;
   }
   static void *newArray_stdcLcLpairlElongcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<long,int>[nElements] : new std::pair<long,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlElongcOintgR(void *p) {
      delete ((std::pair<long,int>*)p);
   }
   static void deleteArray_stdcLcLpairlElongcOintgR(void *p) {
      delete [] ((std::pair<long,int>*)p);
   }
   static void destruct_stdcLcLpairlElongcOintgR(void *p) {
      typedef std::pair<long,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<long,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEintcOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,char*> : new std::pair<int,char*>;
   }
   static void *newArray_stdcLcLpairlEintcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,char*>[nElements] : new std::pair<int,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEintcOcharmUgR(void *p) {
      delete ((std::pair<int,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlEintcOcharmUgR(void *p) {
      delete [] ((std::pair<int,char*>*)p);
   }
   static void destruct_stdcLcLpairlEintcOcharmUgR(void *p) {
      typedef std::pair<int,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<int,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEintcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,void*> : new std::pair<int,void*>;
   }
   static void *newArray_stdcLcLpairlEintcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,void*>[nElements] : new std::pair<int,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEintcOvoidmUgR(void *p) {
      delete ((std::pair<int,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEintcOvoidmUgR(void *p) {
      delete [] ((std::pair<int,void*>*)p);
   }
   static void destruct_stdcLcLpairlEintcOvoidmUgR(void *p) {
      typedef std::pair<int,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<int,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEintcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,double> : new std::pair<int,double>;
   }
   static void *newArray_stdcLcLpairlEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,double>[nElements] : new std::pair<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEintcOdoublegR(void *p) {
      delete ((std::pair<int,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEintcOdoublegR(void *p) {
      delete [] ((std::pair<int,double>*)p);
   }
   static void destruct_stdcLcLpairlEintcOdoublegR(void *p) {
      typedef std::pair<int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<int,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEintcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,float> : new std::pair<int,float>;
   }
   static void *newArray_stdcLcLpairlEintcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,float>[nElements] : new std::pair<int,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEintcOfloatgR(void *p) {
      delete ((std::pair<int,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEintcOfloatgR(void *p) {
      delete [] ((std::pair<int,float>*)p);
   }
   static void destruct_stdcLcLpairlEintcOfloatgR(void *p) {
      typedef std::pair<int,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<int,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEintcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,long> : new std::pair<int,long>;
   }
   static void *newArray_stdcLcLpairlEintcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,long>[nElements] : new std::pair<int,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEintcOlonggR(void *p) {
      delete ((std::pair<int,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEintcOlonggR(void *p) {
      delete [] ((std::pair<int,long>*)p);
   }
   static void destruct_stdcLcLpairlEintcOlonggR(void *p) {
      typedef std::pair<int,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<int,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEintcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,int> : new std::pair<int,int>;
   }
   static void *newArray_stdcLcLpairlEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<int,int>[nElements] : new std::pair<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEintcOintgR(void *p) {
      delete ((std::pair<int,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEintcOintgR(void *p) {
      delete [] ((std::pair<int,int>*)p);
   }
   static void destruct_stdcLcLpairlEintcOintgR(void *p) {
      typedef std::pair<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<int,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEstdcLcLstringcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,void*> : new std::pair<std::string,void*>;
   }
   static void *newArray_stdcLcLpairlEstdcLcLstringcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,void*>[nElements] : new std::pair<std::string,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEstdcLcLstringcOvoidmUgR(void *p) {
      delete ((std::pair<std::string,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOvoidmUgR(void *p) {
      delete [] ((std::pair<std::string,void*>*)p);
   }
   static void destruct_stdcLcLpairlEstdcLcLstringcOvoidmUgR(void *p) {
      typedef std::pair<std::string,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<std::string,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEstdcLcLstringcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,double> : new std::pair<std::string,double>;
   }
   static void *newArray_stdcLcLpairlEstdcLcLstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,double>[nElements] : new std::pair<std::string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEstdcLcLstringcOdoublegR(void *p) {
      delete ((std::pair<std::string,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOdoublegR(void *p) {
      delete [] ((std::pair<std::string,double>*)p);
   }
   static void destruct_stdcLcLpairlEstdcLcLstringcOdoublegR(void *p) {
      typedef std::pair<std::string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<std::string,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEstdcLcLstringcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,float> : new std::pair<std::string,float>;
   }
   static void *newArray_stdcLcLpairlEstdcLcLstringcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,float>[nElements] : new std::pair<std::string,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEstdcLcLstringcOfloatgR(void *p) {
      delete ((std::pair<std::string,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOfloatgR(void *p) {
      delete [] ((std::pair<std::string,float>*)p);
   }
   static void destruct_stdcLcLpairlEstdcLcLstringcOfloatgR(void *p) {
      typedef std::pair<std::string,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<std::string,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEstdcLcLstringcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,long> : new std::pair<std::string,long>;
   }
   static void *newArray_stdcLcLpairlEstdcLcLstringcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<std::string,long>[nElements] : new std::pair<std::string,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEstdcLcLstringcOlonggR(void *p) {
      delete ((std::pair<std::string,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEstdcLcLstringcOlonggR(void *p) {
      delete [] ((std::pair<std::string,long>*)p);
   }
   static void destruct_stdcLcLpairlEstdcLcLstringcOlonggR(void *p) {
      typedef std::pair<std::string,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<std::string,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEcharmUcOcharmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,char*> : new std::pair<char*,char*>;
   }
   static void *newArray_stdcLcLpairlEcharmUcOcharmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,char*>[nElements] : new std::pair<char*,char*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEcharmUcOcharmUgR(void *p) {
      delete ((std::pair<char*,char*>*)p);
   }
   static void deleteArray_stdcLcLpairlEcharmUcOcharmUgR(void *p) {
      delete [] ((std::pair<char*,char*>*)p);
   }
   static void destruct_stdcLcLpairlEcharmUcOcharmUgR(void *p) {
      typedef std::pair<char*,char*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<char*,char*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEcharmUcOvoidmUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,void*> : new std::pair<char*,void*>;
   }
   static void *newArray_stdcLcLpairlEcharmUcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,void*>[nElements] : new std::pair<char*,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEcharmUcOvoidmUgR(void *p) {
      delete ((std::pair<char*,void*>*)p);
   }
   static void deleteArray_stdcLcLpairlEcharmUcOvoidmUgR(void *p) {
      delete [] ((std::pair<char*,void*>*)p);
   }
   static void destruct_stdcLcLpairlEcharmUcOvoidmUgR(void *p) {
      typedef std::pair<char*,void*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<char*,void*>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEcharmUcOdoublegR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,double> : new std::pair<char*,double>;
   }
   static void *newArray_stdcLcLpairlEcharmUcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,double>[nElements] : new std::pair<char*,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEcharmUcOdoublegR(void *p) {
      delete ((std::pair<char*,double>*)p);
   }
   static void deleteArray_stdcLcLpairlEcharmUcOdoublegR(void *p) {
      delete [] ((std::pair<char*,double>*)p);
   }
   static void destruct_stdcLcLpairlEcharmUcOdoublegR(void *p) {
      typedef std::pair<char*,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<char*,double>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEcharmUcOfloatgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,float> : new std::pair<char*,float>;
   }
   static void *newArray_stdcLcLpairlEcharmUcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,float>[nElements] : new std::pair<char*,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEcharmUcOfloatgR(void *p) {
      delete ((std::pair<char*,float>*)p);
   }
   static void deleteArray_stdcLcLpairlEcharmUcOfloatgR(void *p) {
      delete [] ((std::pair<char*,float>*)p);
   }
   static void destruct_stdcLcLpairlEcharmUcOfloatgR(void *p) {
      typedef std::pair<char*,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<char*,float>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEcharmUcOlonggR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,long> : new std::pair<char*,long>;
   }
   static void *newArray_stdcLcLpairlEcharmUcOlonggR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,long>[nElements] : new std::pair<char*,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEcharmUcOlonggR(void *p) {
      delete ((std::pair<char*,long>*)p);
   }
   static void deleteArray_stdcLcLpairlEcharmUcOlonggR(void *p) {
      delete [] ((std::pair<char*,long>*)p);
   }
   static void destruct_stdcLcLpairlEcharmUcOlonggR(void *p) {
      typedef std::pair<char*,long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<char*,long>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLpairlEcharmUcOintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,int> : new std::pair<char*,int>;
   }
   static void *newArray_stdcLcLpairlEcharmUcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::pair<char*,int>[nElements] : new std::pair<char*,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLpairlEcharmUcOintgR(void *p) {
      delete ((std::pair<char*,int>*)p);
   }
   static void deleteArray_stdcLcLpairlEcharmUcOintgR(void *p) {
      delete [] ((std::pair<char*,int>*)p);
   }
   static void destruct_stdcLcLpairlEcharmUcOintgR(void *p) {
      typedef std::pair<char*,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::pair<char*,int>

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLstring(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::string : new std::string;
   }
   static void *newArray_stdcLcLstring(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::string[nElements] : new std::string[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLstring(void *p) {
      delete ((std::string*)p);
   }
   static void deleteArray_stdcLcLstring(void *p) {
      delete [] ((std::string*)p);
   }
   static void destruct_stdcLcLstring(void *p) {
      typedef std::string current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::string

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTVirtualIsAProxy(void *p) {
      delete ((::CppyyLegacy::TVirtualIsAProxy*)p);
   }
   static void deleteArray_CppyyLegacycLcLTVirtualIsAProxy(void *p) {
      delete [] ((::CppyyLegacy::TVirtualIsAProxy*)p);
   }
   static void destruct_CppyyLegacycLcLTVirtualIsAProxy(void *p) {
      typedef ::CppyyLegacy::TVirtualIsAProxy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TVirtualIsAProxy

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTIsAProxy(void *p) {
      delete ((::CppyyLegacy::TIsAProxy*)p);
   }
   static void deleteArray_CppyyLegacycLcLTIsAProxy(void *p) {
      delete [] ((::CppyyLegacy::TIsAProxy*)p);
   }
   static void destruct_CppyyLegacycLcLTIsAProxy(void *p) {
      typedef ::CppyyLegacy::TIsAProxy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TIsAProxy

namespace CppyyLegacy {
//______________________________________________________________________________
void TStorage::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TStorage.

   ::CppyyLegacy::Error("CppyyLegacy::TStorage::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStorage(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TStorage : new ::CppyyLegacy::TStorage;
   }
   static void *newArray_CppyyLegacycLcLTStorage(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TStorage[nElements] : new ::CppyyLegacy::TStorage[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStorage(void *p) {
      delete ((::CppyyLegacy::TStorage*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStorage(void *p) {
      delete [] ((::CppyyLegacy::TStorage*)p);
   }
   static void destruct_CppyyLegacycLcLTStorage(void *p) {
      typedef ::CppyyLegacy::TStorage current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStorage(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStorage*)obj)->::CppyyLegacy::TStorage::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStorage

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTObject(void *p) {
      return  p ? new(p) ::CppyyLegacy::TObject : new ::CppyyLegacy::TObject;
   }
   static void *newArray_CppyyLegacycLcLTObject(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TObject[nElements] : new ::CppyyLegacy::TObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTObject(void *p) {
      delete ((::CppyyLegacy::TObject*)p);
   }
   static void deleteArray_CppyyLegacycLcLTObject(void *p) {
      delete [] ((::CppyyLegacy::TObject*)p);
   }
   static void destruct_CppyyLegacycLcLTObject(void *p) {
      typedef ::CppyyLegacy::TObject current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTObject(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TObject*)obj)->::CppyyLegacy::TObject::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TObject

namespace CppyyLegacy {
//______________________________________________________________________________
void TApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TApplication.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTApplication(void *p) {
      delete ((::CppyyLegacy::TApplication*)p);
   }
   static void deleteArray_CppyyLegacycLcLTApplication(void *p) {
      delete [] ((::CppyyLegacy::TApplication*)p);
   }
   static void destruct_CppyyLegacycLcLTApplication(void *p) {
      typedef ::CppyyLegacy::TApplication current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTApplication(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TApplication*)obj)->::CppyyLegacy::TApplication::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TApplication

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTSubString(void *p) {
      delete ((::CppyyLegacy::TSubString*)p);
   }
   static void deleteArray_CppyyLegacycLcLTSubString(void *p) {
      delete [] ((::CppyyLegacy::TSubString*)p);
   }
   static void destruct_CppyyLegacycLcLTSubString(void *p) {
      typedef ::CppyyLegacy::TSubString current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TSubString

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTString(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TString : new ::CppyyLegacy::TString;
   }
   static void *newArray_CppyyLegacycLcLTString(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TString[nElements] : new ::CppyyLegacy::TString[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTString(void *p) {
      delete ((::CppyyLegacy::TString*)p);
   }
   static void deleteArray_CppyyLegacycLcLTString(void *p) {
      delete [] ((::CppyyLegacy::TString*)p);
   }
   static void destruct_CppyyLegacycLcLTString(void *p) {
      typedef ::CppyyLegacy::TString current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTString(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TString*)obj)->::CppyyLegacy::TString::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TString

namespace CppyyLegacy {
//______________________________________________________________________________
void TNamed::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TNamed.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TNamed::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TNamed::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTNamed(void *p) {
      return  p ? new(p) ::CppyyLegacy::TNamed : new ::CppyyLegacy::TNamed;
   }
   static void *newArray_CppyyLegacycLcLTNamed(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TNamed[nElements] : new ::CppyyLegacy::TNamed[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTNamed(void *p) {
      delete ((::CppyyLegacy::TNamed*)p);
   }
   static void deleteArray_CppyyLegacycLcLTNamed(void *p) {
      delete [] ((::CppyyLegacy::TNamed*)p);
   }
   static void destruct_CppyyLegacycLcLTNamed(void *p) {
      typedef ::CppyyLegacy::TNamed current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TNamed

namespace CppyyLegacy {
//______________________________________________________________________________
void TDictionary::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TDictionary.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TDictionary::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TDictionary::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTDictionary(void *p) {
      delete ((::CppyyLegacy::TDictionary*)p);
   }
   static void deleteArray_CppyyLegacycLcLTDictionary(void *p) {
      delete [] ((::CppyyLegacy::TDictionary*)p);
   }
   static void destruct_CppyyLegacycLcLTDictionary(void *p) {
      typedef ::CppyyLegacy::TDictionary current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TDictionary

namespace CppyyLegacy {
//______________________________________________________________________________
void TDataType::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TDataType.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TDataType thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef ::CppyyLegacy::TDictionary baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> fSize;
      void *ptr_fType = (void*)&fType;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fType);
      R__b >> fProperty;
      fTrueName.Streamer(R__b);
      R__b >> fTypeNameIdx;
      R__b >> fTypeNameLen;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef ::CppyyLegacy::TDictionary baseClass0;
      baseClass0::Streamer(R__b);
      R__b << fSize;
      R__b << (Int_t)fType;
      R__b << fProperty;
      fTrueName.Streamer(R__b);
      R__b << fTypeNameIdx;
      R__b << fTypeNameLen;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTDataType(void *p) {
      return  p ? new(p) ::CppyyLegacy::TDataType : new ::CppyyLegacy::TDataType;
   }
   static void *newArray_CppyyLegacycLcLTDataType(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TDataType[nElements] : new ::CppyyLegacy::TDataType[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTDataType(void *p) {
      delete ((::CppyyLegacy::TDataType*)p);
   }
   static void deleteArray_CppyyLegacycLcLTDataType(void *p) {
      delete [] ((::CppyyLegacy::TDataType*)p);
   }
   static void destruct_CppyyLegacycLcLTDataType(void *p) {
      typedef ::CppyyLegacy::TDataType current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTDataType(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TDataType*)obj)->::CppyyLegacy::TDataType::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TDataType

namespace CppyyLegacy {
//______________________________________________________________________________
void TIterator::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TIterator.

   ::CppyyLegacy::Error("CppyyLegacy::TIterator::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTIterator(void *p) {
      delete ((::CppyyLegacy::TIterator*)p);
   }
   static void deleteArray_CppyyLegacycLcLTIterator(void *p) {
      delete [] ((::CppyyLegacy::TIterator*)p);
   }
   static void destruct_CppyyLegacycLcLTIterator(void *p) {
      typedef ::CppyyLegacy::TIterator current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTIterator(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TIterator*)obj)->::CppyyLegacy::TIterator::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TIterator

namespace CppyyLegacy {
//______________________________________________________________________________
void TVirtualMutex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TVirtualMutex.

   ::CppyyLegacy::Error("CppyyLegacy::TVirtualMutex::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTVirtualMutex(void *p) {
      delete ((::CppyyLegacy::TVirtualMutex*)p);
   }
   static void deleteArray_CppyyLegacycLcLTVirtualMutex(void *p) {
      delete [] ((::CppyyLegacy::TVirtualMutex*)p);
   }
   static void destruct_CppyyLegacycLcLTVirtualMutex(void *p) {
      typedef ::CppyyLegacy::TVirtualMutex current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTVirtualMutex(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TVirtualMutex*)obj)->::CppyyLegacy::TVirtualMutex::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TVirtualMutex

namespace CppyyLegacy {
//______________________________________________________________________________
void TLockGuard::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TLockGuard.

   ::CppyyLegacy::Error("CppyyLegacy::TLockGuard::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTLockGuard(void *p) {
      delete ((::CppyyLegacy::TLockGuard*)p);
   }
   static void deleteArray_CppyyLegacycLcLTLockGuard(void *p) {
      delete [] ((::CppyyLegacy::TLockGuard*)p);
   }
   static void destruct_CppyyLegacycLcLTLockGuard(void *p) {
      typedef ::CppyyLegacy::TLockGuard current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTLockGuard(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TLockGuard*)obj)->::CppyyLegacy::TLockGuard::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TLockGuard

namespace CppyyLegacy {
//______________________________________________________________________________
void TVirtualRWMutex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TVirtualRWMutex.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TVirtualMutex baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTVirtualRWMutex(void *p) {
      delete ((::CppyyLegacy::TVirtualRWMutex*)p);
   }
   static void deleteArray_CppyyLegacycLcLTVirtualRWMutex(void *p) {
      delete [] ((::CppyyLegacy::TVirtualRWMutex*)p);
   }
   static void destruct_CppyyLegacycLcLTVirtualRWMutex(void *p) {
      typedef ::CppyyLegacy::TVirtualRWMutex current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTVirtualRWMutex(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TVirtualRWMutex*)obj)->::CppyyLegacy::TVirtualRWMutex::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TVirtualRWMutex

namespace CppyyLegacy {
//______________________________________________________________________________
void TReadLockGuard::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TReadLockGuard.

   ::CppyyLegacy::Error("CppyyLegacy::TReadLockGuard::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTReadLockGuard(void *p) {
      delete ((::CppyyLegacy::TReadLockGuard*)p);
   }
   static void deleteArray_CppyyLegacycLcLTReadLockGuard(void *p) {
      delete [] ((::CppyyLegacy::TReadLockGuard*)p);
   }
   static void destruct_CppyyLegacycLcLTReadLockGuard(void *p) {
      typedef ::CppyyLegacy::TReadLockGuard current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTReadLockGuard(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TReadLockGuard*)obj)->::CppyyLegacy::TReadLockGuard::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TReadLockGuard

namespace CppyyLegacy {
//______________________________________________________________________________
void TWriteLockGuard::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TWriteLockGuard.

   ::CppyyLegacy::Error("CppyyLegacy::TWriteLockGuard::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTWriteLockGuard(void *p) {
      delete ((::CppyyLegacy::TWriteLockGuard*)p);
   }
   static void deleteArray_CppyyLegacycLcLTWriteLockGuard(void *p) {
      delete [] ((::CppyyLegacy::TWriteLockGuard*)p);
   }
   static void destruct_CppyyLegacycLcLTWriteLockGuard(void *p) {
      typedef ::CppyyLegacy::TWriteLockGuard current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTWriteLockGuard(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TWriteLockGuard*)obj)->::CppyyLegacy::TWriteLockGuard::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TWriteLockGuard

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTCollection(void *p) {
      delete ((::CppyyLegacy::TCollection*)p);
   }
   static void deleteArray_CppyyLegacycLcLTCollection(void *p) {
      delete [] ((::CppyyLegacy::TCollection*)p);
   }
   static void destruct_CppyyLegacycLcLTCollection(void *p) {
      typedef ::CppyyLegacy::TCollection current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTCollection(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TCollection*)obj)->::CppyyLegacy::TCollection::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TCollection

namespace CppyyLegacy {
//______________________________________________________________________________
void TIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TIter.

   ::CppyyLegacy::Error("CppyyLegacy::TIter::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTIter(void *p) {
      delete ((::CppyyLegacy::TIter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTIter(void *p) {
      delete [] ((::CppyyLegacy::TIter*)p);
   }
   static void destruct_CppyyLegacycLcLTIter(void *p) {
      typedef ::CppyyLegacy::TIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTIter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TIter*)obj)->::CppyyLegacy::TIter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TIter

namespace CppyyLegacy {
//______________________________________________________________________________
void TSeqCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TSeqCollection.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TCollection baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTSeqCollection(void *p) {
      delete ((::CppyyLegacy::TSeqCollection*)p);
   }
   static void deleteArray_CppyyLegacycLcLTSeqCollection(void *p) {
      delete [] ((::CppyyLegacy::TSeqCollection*)p);
   }
   static void destruct_CppyyLegacycLcLTSeqCollection(void *p) {
      typedef ::CppyyLegacy::TSeqCollection current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTSeqCollection(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TSeqCollection*)obj)->::CppyyLegacy::TSeqCollection::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TSeqCollection

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTObjArray(void *p) {
      return  p ? new(p) ::CppyyLegacy::TObjArray : new ::CppyyLegacy::TObjArray;
   }
   static void *newArray_CppyyLegacycLcLTObjArray(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TObjArray[nElements] : new ::CppyyLegacy::TObjArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTObjArray(void *p) {
      delete ((::CppyyLegacy::TObjArray*)p);
   }
   static void deleteArray_CppyyLegacycLcLTObjArray(void *p) {
      delete [] ((::CppyyLegacy::TObjArray*)p);
   }
   static void destruct_CppyyLegacycLcLTObjArray(void *p) {
      typedef ::CppyyLegacy::TObjArray current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTObjArray(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TObjArray*)obj)->::CppyyLegacy::TObjArray::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TObjArray

namespace CppyyLegacy {
//______________________________________________________________________________
void TObjArrayIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TObjArrayIter.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TIterator baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTObjArrayIter(void *p) {
      delete ((::CppyyLegacy::TObjArrayIter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTObjArrayIter(void *p) {
      delete [] ((::CppyyLegacy::TObjArrayIter*)p);
   }
   static void destruct_CppyyLegacycLcLTObjArrayIter(void *p) {
      typedef ::CppyyLegacy::TObjArrayIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTObjArrayIter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TObjArrayIter*)obj)->::CppyyLegacy::TObjArrayIter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TObjArrayIter

namespace CppyyLegacy {
//______________________________________________________________________________
void TObjString::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TObjString.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TObjString::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TObjString::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTObjString(void *p) {
      return  p ? new(p) ::CppyyLegacy::TObjString : new ::CppyyLegacy::TObjString;
   }
   static void *newArray_CppyyLegacycLcLTObjString(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TObjString[nElements] : new ::CppyyLegacy::TObjString[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTObjString(void *p) {
      delete ((::CppyyLegacy::TObjString*)p);
   }
   static void deleteArray_CppyyLegacycLcLTObjString(void *p) {
      delete [] ((::CppyyLegacy::TObjString*)p);
   }
   static void destruct_CppyyLegacycLcLTObjString(void *p) {
      typedef ::CppyyLegacy::TObjString current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TObjString

namespace CppyyLegacy {
//______________________________________________________________________________
void TClass::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TClass.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TDictionary baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTClass(void *p) {
      return  p ? new(p) ::CppyyLegacy::TClass : new ::CppyyLegacy::TClass;
   }
   static void *newArray_CppyyLegacycLcLTClass(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TClass[nElements] : new ::CppyyLegacy::TClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTClass(void *p) {
      delete ((::CppyyLegacy::TClass*)p);
   }
   static void deleteArray_CppyyLegacycLcLTClass(void *p) {
      delete [] ((::CppyyLegacy::TClass*)p);
   }
   static void destruct_CppyyLegacycLcLTClass(void *p) {
      typedef ::CppyyLegacy::TClass current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTClass(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TClass*)obj)->::CppyyLegacy::TClass::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TClass

namespace CppyyLegacy {
//______________________________________________________________________________
void TBuffer::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TBuffer.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTBuffer(void *p) {
      delete ((::CppyyLegacy::TBuffer*)p);
   }
   static void deleteArray_CppyyLegacycLcLTBuffer(void *p) {
      delete [] ((::CppyyLegacy::TBuffer*)p);
   }
   static void destruct_CppyyLegacycLcLTBuffer(void *p) {
      typedef ::CppyyLegacy::TBuffer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTBuffer(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TBuffer*)obj)->::CppyyLegacy::TBuffer::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TBuffer

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTDatime(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TDatime : new ::CppyyLegacy::TDatime;
   }
   static void *newArray_CppyyLegacycLcLTDatime(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TDatime[nElements] : new ::CppyyLegacy::TDatime[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTDatime(void *p) {
      delete ((::CppyyLegacy::TDatime*)p);
   }
   static void deleteArray_CppyyLegacycLcLTDatime(void *p) {
      delete [] ((::CppyyLegacy::TDatime*)p);
   }
   static void destruct_CppyyLegacycLcLTDatime(void *p) {
      typedef ::CppyyLegacy::TDatime current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTDatime(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TDatime*)obj)->::CppyyLegacy::TDatime::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TDatime

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTList(void *p) {
      return  p ? new(p) ::CppyyLegacy::TList : new ::CppyyLegacy::TList;
   }
   static void *newArray_CppyyLegacycLcLTList(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TList[nElements] : new ::CppyyLegacy::TList[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTList(void *p) {
      delete ((::CppyyLegacy::TList*)p);
   }
   static void deleteArray_CppyyLegacycLcLTList(void *p) {
      delete [] ((::CppyyLegacy::TList*)p);
   }
   static void destruct_CppyyLegacycLcLTList(void *p) {
      typedef ::CppyyLegacy::TList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTList(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TList*)obj)->::CppyyLegacy::TList::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TList

namespace CppyyLegacy {
//______________________________________________________________________________
void TListIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TListIter.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TIterator baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTListIter(void *p) {
      delete ((::CppyyLegacy::TListIter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTListIter(void *p) {
      delete [] ((::CppyyLegacy::TListIter*)p);
   }
   static void destruct_CppyyLegacycLcLTListIter(void *p) {
      typedef ::CppyyLegacy::TListIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTListIter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TListIter*)obj)->::CppyyLegacy::TListIter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TListIter

namespace CppyyLegacy {
//______________________________________________________________________________
void TUUID::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TUUID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TUUID::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TUUID::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTUUID(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TUUID : new ::CppyyLegacy::TUUID;
   }
   static void *newArray_CppyyLegacycLcLTUUID(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TUUID[nElements] : new ::CppyyLegacy::TUUID[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTUUID(void *p) {
      delete ((::CppyyLegacy::TUUID*)p);
   }
   static void deleteArray_CppyyLegacycLcLTUUID(void *p) {
      delete [] ((::CppyyLegacy::TUUID*)p);
   }
   static void destruct_CppyyLegacycLcLTUUID(void *p) {
      typedef ::CppyyLegacy::TUUID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TUUID

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTDirectory(void *p) {
      return  p ? new(p) ::CppyyLegacy::TDirectory : new ::CppyyLegacy::TDirectory;
   }
   static void *newArray_CppyyLegacycLcLTDirectory(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TDirectory[nElements] : new ::CppyyLegacy::TDirectory[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTDirectory(void *p) {
      delete ((::CppyyLegacy::TDirectory*)p);
   }
   static void deleteArray_CppyyLegacycLcLTDirectory(void *p) {
      delete [] ((::CppyyLegacy::TDirectory*)p);
   }
   static void destruct_CppyyLegacycLcLTDirectory(void *p) {
      typedef ::CppyyLegacy::TDirectory current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTDirectory(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TDirectory*)obj)->::CppyyLegacy::TDirectory::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TDirectory

namespace CppyyLegacy {
//______________________________________________________________________________
void TEnvRec::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TEnvRec.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TEnvRec::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TEnvRec::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTEnvRec(void *p) {
      return  p ? new(p) ::CppyyLegacy::TEnvRec : new ::CppyyLegacy::TEnvRec;
   }
   static void *newArray_CppyyLegacycLcLTEnvRec(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TEnvRec[nElements] : new ::CppyyLegacy::TEnvRec[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTEnvRec(void *p) {
      delete ((::CppyyLegacy::TEnvRec*)p);
   }
   static void deleteArray_CppyyLegacycLcLTEnvRec(void *p) {
      delete [] ((::CppyyLegacy::TEnvRec*)p);
   }
   static void destruct_CppyyLegacycLcLTEnvRec(void *p) {
      typedef ::CppyyLegacy::TEnvRec current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TEnvRec

namespace CppyyLegacy {
//______________________________________________________________________________
void TEnv::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TEnv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TEnv::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TEnv::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTEnv(void *p) {
      return  p ? new(p) ::CppyyLegacy::TEnv : new ::CppyyLegacy::TEnv;
   }
   static void *newArray_CppyyLegacycLcLTEnv(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TEnv[nElements] : new ::CppyyLegacy::TEnv[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTEnv(void *p) {
      delete ((::CppyyLegacy::TEnv*)p);
   }
   static void deleteArray_CppyyLegacycLcLTEnv(void *p) {
      delete [] ((::CppyyLegacy::TEnv*)p);
   }
   static void destruct_CppyyLegacycLcLTEnv(void *p) {
      typedef ::CppyyLegacy::TEnv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TEnv

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTInetAddress(void *p) {
      return  p ? new(p) ::CppyyLegacy::TInetAddress : new ::CppyyLegacy::TInetAddress;
   }
   static void *newArray_CppyyLegacycLcLTInetAddress(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TInetAddress[nElements] : new ::CppyyLegacy::TInetAddress[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTInetAddress(void *p) {
      delete ((::CppyyLegacy::TInetAddress*)p);
   }
   static void deleteArray_CppyyLegacycLcLTInetAddress(void *p) {
      delete [] ((::CppyyLegacy::TInetAddress*)p);
   }
   static void destruct_CppyyLegacycLcLTInetAddress(void *p) {
      typedef ::CppyyLegacy::TInetAddress current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTInetAddress(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TInetAddress*)obj)->::CppyyLegacy::TInetAddress::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TInetAddress

namespace CppyyLegacy {
//______________________________________________________________________________
void TMD5::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TMD5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TMD5::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TMD5::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTMD5(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TMD5 : new ::CppyyLegacy::TMD5;
   }
   static void *newArray_CppyyLegacycLcLTMD5(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TMD5[nElements] : new ::CppyyLegacy::TMD5[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMD5(void *p) {
      delete ((::CppyyLegacy::TMD5*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMD5(void *p) {
      delete [] ((::CppyyLegacy::TMD5*)p);
   }
   static void destruct_CppyyLegacycLcLTMD5(void *p) {
      typedef ::CppyyLegacy::TMD5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMD5

namespace CppyyLegacy {
//______________________________________________________________________________
void TMemberInspector::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TMemberInspector.

   ::CppyyLegacy::Error("CppyyLegacy::TMemberInspector::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTMemberInspector(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TMemberInspector : new ::CppyyLegacy::TMemberInspector;
   }
   static void *newArray_CppyyLegacycLcLTMemberInspector(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TMemberInspector[nElements] : new ::CppyyLegacy::TMemberInspector[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMemberInspector(void *p) {
      delete ((::CppyyLegacy::TMemberInspector*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMemberInspector(void *p) {
      delete [] ((::CppyyLegacy::TMemberInspector*)p);
   }
   static void destruct_CppyyLegacycLcLTMemberInspector(void *p) {
      typedef ::CppyyLegacy::TMemberInspector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTMemberInspector(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TMemberInspector*)obj)->::CppyyLegacy::TMemberInspector::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMemberInspector

namespace CppyyLegacy {
//______________________________________________________________________________
void TProcessID::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TProcessID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TProcessID::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TProcessID::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTProcessID(void *p) {
      return  p ? new(p) ::CppyyLegacy::TProcessID : new ::CppyyLegacy::TProcessID;
   }
   static void *newArray_CppyyLegacycLcLTProcessID(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TProcessID[nElements] : new ::CppyyLegacy::TProcessID[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTProcessID(void *p) {
      delete ((::CppyyLegacy::TProcessID*)p);
   }
   static void deleteArray_CppyyLegacycLcLTProcessID(void *p) {
      delete [] ((::CppyyLegacy::TProcessID*)p);
   }
   static void destruct_CppyyLegacycLcLTProcessID(void *p) {
      typedef ::CppyyLegacy::TProcessID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TProcessID

namespace CppyyLegacy {
//______________________________________________________________________________
void TProcessUUID::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TProcessUUID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TProcessUUID::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TProcessUUID::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTProcessUUID(void *p) {
      return  p ? new(p) ::CppyyLegacy::TProcessUUID : new ::CppyyLegacy::TProcessUUID;
   }
   static void *newArray_CppyyLegacycLcLTProcessUUID(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TProcessUUID[nElements] : new ::CppyyLegacy::TProcessUUID[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTProcessUUID(void *p) {
      delete ((::CppyyLegacy::TProcessUUID*)p);
   }
   static void deleteArray_CppyyLegacycLcLTProcessUUID(void *p) {
      delete [] ((::CppyyLegacy::TProcessUUID*)p);
   }
   static void destruct_CppyyLegacycLcLTProcessUUID(void *p) {
      typedef ::CppyyLegacy::TProcessUUID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TProcessUUID

namespace CppyyLegacy {
//______________________________________________________________________________
void TRegexp::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TRegexp.

   ::CppyyLegacy::Error("CppyyLegacy::TRegexp::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTRegexp(void *p) {
      delete ((::CppyyLegacy::TRegexp*)p);
   }
   static void deleteArray_CppyyLegacycLcLTRegexp(void *p) {
      delete [] ((::CppyyLegacy::TRegexp*)p);
   }
   static void destruct_CppyyLegacycLcLTRegexp(void *p) {
      typedef ::CppyyLegacy::TRegexp current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTRegexp(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TRegexp*)obj)->::CppyyLegacy::TRegexp::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TRegexp

namespace CppyyLegacy {
//______________________________________________________________________________
void TROOT::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TROOT.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TDirectory baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTROOT(void *p) {
      delete ((::CppyyLegacy::TROOT*)p);
   }
   static void deleteArray_CppyyLegacycLcLTROOT(void *p) {
      delete [] ((::CppyyLegacy::TROOT*)p);
   }
   static void destruct_CppyyLegacycLcLTROOT(void *p) {
      typedef ::CppyyLegacy::TROOT current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTROOT(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TROOT*)obj)->::CppyyLegacy::TROOT::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TROOT

namespace CppyyLegacy {
//______________________________________________________________________________
void TSignalHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TSignalHandler.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTSignalHandler(void *p) {
      delete ((::CppyyLegacy::TSignalHandler*)p);
   }
   static void deleteArray_CppyyLegacycLcLTSignalHandler(void *p) {
      delete [] ((::CppyyLegacy::TSignalHandler*)p);
   }
   static void destruct_CppyyLegacycLcLTSignalHandler(void *p) {
      typedef ::CppyyLegacy::TSignalHandler current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTSignalHandler(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TSignalHandler*)obj)->::CppyyLegacy::TSignalHandler::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TSignalHandler

namespace CppyyLegacy {
//______________________________________________________________________________
void TStdExceptionHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TStdExceptionHandler.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStdExceptionHandler(void *p) {
      delete ((::CppyyLegacy::TStdExceptionHandler*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStdExceptionHandler(void *p) {
      delete [] ((::CppyyLegacy::TStdExceptionHandler*)p);
   }
   static void destruct_CppyyLegacycLcLTStdExceptionHandler(void *p) {
      typedef ::CppyyLegacy::TStdExceptionHandler current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStdExceptionHandler(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStdExceptionHandler*)obj)->::CppyyLegacy::TStdExceptionHandler::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStdExceptionHandler

namespace CppyyLegacy {
//______________________________________________________________________________
void TTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TTime.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TTime thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> fMilliSec;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << fMilliSec;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTTime(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TTime : new ::CppyyLegacy::TTime;
   }
   static void *newArray_CppyyLegacycLcLTTime(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TTime[nElements] : new ::CppyyLegacy::TTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTTime(void *p) {
      delete ((::CppyyLegacy::TTime*)p);
   }
   static void deleteArray_CppyyLegacycLcLTTime(void *p) {
      delete [] ((::CppyyLegacy::TTime*)p);
   }
   static void destruct_CppyyLegacycLcLTTime(void *p) {
      typedef ::CppyyLegacy::TTime current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTTime(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TTime*)obj)->::CppyyLegacy::TTime::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TTime

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLFileStat_t(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::FileStat_t : new ::CppyyLegacy::FileStat_t;
   }
   static void *newArray_CppyyLegacycLcLFileStat_t(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::FileStat_t[nElements] : new ::CppyyLegacy::FileStat_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLFileStat_t(void *p) {
      delete ((::CppyyLegacy::FileStat_t*)p);
   }
   static void deleteArray_CppyyLegacycLcLFileStat_t(void *p) {
      delete [] ((::CppyyLegacy::FileStat_t*)p);
   }
   static void destruct_CppyyLegacycLcLFileStat_t(void *p) {
      typedef ::CppyyLegacy::FileStat_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::FileStat_t

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLUserGroup_t(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::UserGroup_t : new ::CppyyLegacy::UserGroup_t;
   }
   static void *newArray_CppyyLegacycLcLUserGroup_t(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::UserGroup_t[nElements] : new ::CppyyLegacy::UserGroup_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLUserGroup_t(void *p) {
      delete ((::CppyyLegacy::UserGroup_t*)p);
   }
   static void deleteArray_CppyyLegacycLcLUserGroup_t(void *p) {
      delete [] ((::CppyyLegacy::UserGroup_t*)p);
   }
   static void destruct_CppyyLegacycLcLUserGroup_t(void *p) {
      typedef ::CppyyLegacy::UserGroup_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::UserGroup_t

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLRedirectHandle_t(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::RedirectHandle_t : new ::CppyyLegacy::RedirectHandle_t;
   }
   static void *newArray_CppyyLegacycLcLRedirectHandle_t(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::RedirectHandle_t[nElements] : new ::CppyyLegacy::RedirectHandle_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLRedirectHandle_t(void *p) {
      delete ((::CppyyLegacy::RedirectHandle_t*)p);
   }
   static void deleteArray_CppyyLegacycLcLRedirectHandle_t(void *p) {
      delete [] ((::CppyyLegacy::RedirectHandle_t*)p);
   }
   static void destruct_CppyyLegacycLcLRedirectHandle_t(void *p) {
      typedef ::CppyyLegacy::RedirectHandle_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::RedirectHandle_t

namespace CppyyLegacy {
//______________________________________________________________________________
void TSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TSystem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TSystem::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TSystem::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTSystem(void *p) {
      return  p ? new(p) ::CppyyLegacy::TSystem : new ::CppyyLegacy::TSystem;
   }
   static void *newArray_CppyyLegacycLcLTSystem(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TSystem[nElements] : new ::CppyyLegacy::TSystem[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTSystem(void *p) {
      delete ((::CppyyLegacy::TSystem*)p);
   }
   static void deleteArray_CppyyLegacycLcLTSystem(void *p) {
      delete [] ((::CppyyLegacy::TSystem*)p);
   }
   static void destruct_CppyyLegacycLcLTSystem(void *p) {
      typedef ::CppyyLegacy::TSystem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TSystem

namespace CppyyLegacy {
//______________________________________________________________________________
void TTimeStamp::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TTimeStamp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TTimeStamp::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TTimeStamp::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTTimeStamp(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TTimeStamp : new ::CppyyLegacy::TTimeStamp;
   }
   static void *newArray_CppyyLegacycLcLTTimeStamp(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TTimeStamp[nElements] : new ::CppyyLegacy::TTimeStamp[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTTimeStamp(void *p) {
      delete ((::CppyyLegacy::TTimeStamp*)p);
   }
   static void deleteArray_CppyyLegacycLcLTTimeStamp(void *p) {
      delete [] ((::CppyyLegacy::TTimeStamp*)p);
   }
   static void destruct_CppyyLegacycLcLTTimeStamp(void *p) {
      typedef ::CppyyLegacy::TTimeStamp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TTimeStamp

namespace CppyyLegacy {
//______________________________________________________________________________
void THashTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::THashTable.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TCollection baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTHashTable(void *p) {
      return  p ? new(p) ::CppyyLegacy::THashTable : new ::CppyyLegacy::THashTable;
   }
   static void *newArray_CppyyLegacycLcLTHashTable(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::THashTable[nElements] : new ::CppyyLegacy::THashTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTHashTable(void *p) {
      delete ((::CppyyLegacy::THashTable*)p);
   }
   static void deleteArray_CppyyLegacycLcLTHashTable(void *p) {
      delete [] ((::CppyyLegacy::THashTable*)p);
   }
   static void destruct_CppyyLegacycLcLTHashTable(void *p) {
      typedef ::CppyyLegacy::THashTable current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTHashTable(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::THashTable*)obj)->::CppyyLegacy::THashTable::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::THashTable

namespace CppyyLegacy {
//______________________________________________________________________________
void THashTableIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::THashTableIter.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TIterator baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTHashTableIter(void *p) {
      delete ((::CppyyLegacy::THashTableIter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTHashTableIter(void *p) {
      delete [] ((::CppyyLegacy::THashTableIter*)p);
   }
   static void destruct_CppyyLegacycLcLTHashTableIter(void *p) {
      typedef ::CppyyLegacy::THashTableIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTHashTableIter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::THashTableIter*)obj)->::CppyyLegacy::THashTableIter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::THashTableIter

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTMap(void *p) {
      return  p ? new(p) ::CppyyLegacy::TMap : new ::CppyyLegacy::TMap;
   }
   static void *newArray_CppyyLegacycLcLTMap(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TMap[nElements] : new ::CppyyLegacy::TMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMap(void *p) {
      delete ((::CppyyLegacy::TMap*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMap(void *p) {
      delete [] ((::CppyyLegacy::TMap*)p);
   }
   static void destruct_CppyyLegacycLcLTMap(void *p) {
      typedef ::CppyyLegacy::TMap current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTMap(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TMap*)obj)->::CppyyLegacy::TMap::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMap

namespace CppyyLegacy {
//______________________________________________________________________________
void TPair::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TPair.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTPair(void *p) {
      delete ((::CppyyLegacy::TPair*)p);
   }
   static void deleteArray_CppyyLegacycLcLTPair(void *p) {
      delete [] ((::CppyyLegacy::TPair*)p);
   }
   static void destruct_CppyyLegacycLcLTPair(void *p) {
      typedef ::CppyyLegacy::TPair current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTPair(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TPair*)obj)->::CppyyLegacy::TPair::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TPair

namespace CppyyLegacy {
//______________________________________________________________________________
void TMapIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TMapIter.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TIterator baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMapIter(void *p) {
      delete ((::CppyyLegacy::TMapIter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMapIter(void *p) {
      delete [] ((::CppyyLegacy::TMapIter*)p);
   }
   static void destruct_CppyyLegacycLcLTMapIter(void *p) {
      typedef ::CppyyLegacy::TMapIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTMapIter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TMapIter*)obj)->::CppyyLegacy::TMapIter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMapIter

namespace CppyyLegacy {
//______________________________________________________________________________
void TUrl::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TUrl.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TUrl thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef ::CppyyLegacy::TObject baseClass0;
      baseClass0::Streamer(R__b);
      fUrl.Streamer(R__b);
      fProtocol.Streamer(R__b);
      fUser.Streamer(R__b);
      fPasswd.Streamer(R__b);
      fHost.Streamer(R__b);
      fFile.Streamer(R__b);
      fAnchor.Streamer(R__b);
      fOptions.Streamer(R__b);
      R__b >> fPort;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef ::CppyyLegacy::TObject baseClass0;
      baseClass0::Streamer(R__b);
      fUrl.Streamer(R__b);
      fProtocol.Streamer(R__b);
      fUser.Streamer(R__b);
      fPasswd.Streamer(R__b);
      fHost.Streamer(R__b);
      fFile.Streamer(R__b);
      fAnchor.Streamer(R__b);
      fOptions.Streamer(R__b);
      R__b << fPort;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTUrl(void *p) {
      return  p ? new(p) ::CppyyLegacy::TUrl : new ::CppyyLegacy::TUrl;
   }
   static void *newArray_CppyyLegacycLcLTUrl(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TUrl[nElements] : new ::CppyyLegacy::TUrl[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTUrl(void *p) {
      delete ((::CppyyLegacy::TUrl*)p);
   }
   static void deleteArray_CppyyLegacycLcLTUrl(void *p) {
      delete [] ((::CppyyLegacy::TUrl*)p);
   }
   static void destruct_CppyyLegacycLcLTUrl(void *p) {
      typedef ::CppyyLegacy::TUrl current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTUrl(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TUrl*)obj)->::CppyyLegacy::TUrl::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TUrl

namespace CppyyLegacy {
//______________________________________________________________________________
void TArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TArray.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TArray thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> fN;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << fN;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTArray(void *p) {
      delete ((::CppyyLegacy::TArray*)p);
   }
   static void deleteArray_CppyyLegacycLcLTArray(void *p) {
      delete [] ((::CppyyLegacy::TArray*)p);
   }
   static void destruct_CppyyLegacycLcLTArray(void *p) {
      typedef ::CppyyLegacy::TArray current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTArray(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TArray*)obj)->::CppyyLegacy::TArray::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TArray

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTArrayC(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TArrayC : new ::CppyyLegacy::TArrayC;
   }
   static void *newArray_CppyyLegacycLcLTArrayC(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TArrayC[nElements] : new ::CppyyLegacy::TArrayC[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTArrayC(void *p) {
      delete ((::CppyyLegacy::TArrayC*)p);
   }
   static void deleteArray_CppyyLegacycLcLTArrayC(void *p) {
      delete [] ((::CppyyLegacy::TArrayC*)p);
   }
   static void destruct_CppyyLegacycLcLTArrayC(void *p) {
      typedef ::CppyyLegacy::TArrayC current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTArrayC(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TArrayC*)obj)->::CppyyLegacy::TArrayC::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TArrayC

namespace CppyyLegacy {
//______________________________________________________________________________
void TBits::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TBits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TBits::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TBits::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTBits(void *p) {
      return  p ? new(p) ::CppyyLegacy::TBits : new ::CppyyLegacy::TBits;
   }
   static void *newArray_CppyyLegacycLcLTBits(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TBits[nElements] : new ::CppyyLegacy::TBits[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTBits(void *p) {
      delete ((::CppyyLegacy::TBits*)p);
   }
   static void deleteArray_CppyyLegacycLcLTBits(void *p) {
      delete [] ((::CppyyLegacy::TBits*)p);
   }
   static void destruct_CppyyLegacycLcLTBits(void *p) {
      typedef ::CppyyLegacy::TBits current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TBits

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTBitscLcLTReference(void *p) {
      delete ((::CppyyLegacy::TBits::TReference*)p);
   }
   static void deleteArray_CppyyLegacycLcLTBitscLcLTReference(void *p) {
      delete [] ((::CppyyLegacy::TBits::TReference*)p);
   }
   static void destruct_CppyyLegacycLcLTBitscLcLTReference(void *p) {
      typedef ::CppyyLegacy::TBits::TReference current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TBits::TReference

namespace CppyyLegacy {
//______________________________________________________________________________
void TClassTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TClassTable.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTClassTable(void *p) {
      delete ((::CppyyLegacy::TClassTable*)p);
   }
   static void deleteArray_CppyyLegacycLcLTClassTable(void *p) {
      delete [] ((::CppyyLegacy::TClassTable*)p);
   }
   static void destruct_CppyyLegacycLcLTClassTable(void *p) {
      typedef ::CppyyLegacy::TClassTable current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTClassTable(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TClassTable*)obj)->::CppyyLegacy::TClassTable::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TClassTable

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTExMap(void *p) {
      return  p ? new(p) ::CppyyLegacy::TExMap : new ::CppyyLegacy::TExMap;
   }
   static void *newArray_CppyyLegacycLcLTExMap(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TExMap[nElements] : new ::CppyyLegacy::TExMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTExMap(void *p) {
      delete ((::CppyyLegacy::TExMap*)p);
   }
   static void deleteArray_CppyyLegacycLcLTExMap(void *p) {
      delete [] ((::CppyyLegacy::TExMap*)p);
   }
   static void destruct_CppyyLegacycLcLTExMap(void *p) {
      typedef ::CppyyLegacy::TExMap current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTExMap(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TExMap*)obj)->::CppyyLegacy::TExMap::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TExMap

namespace CppyyLegacy {
//______________________________________________________________________________
void TExMapIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TExMapIter.

   ::CppyyLegacy::Error("CppyyLegacy::TExMapIter::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTExMapIter(void *p) {
      delete ((::CppyyLegacy::TExMapIter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTExMapIter(void *p) {
      delete [] ((::CppyyLegacy::TExMapIter*)p);
   }
   static void destruct_CppyyLegacycLcLTExMapIter(void *p) {
      typedef ::CppyyLegacy::TExMapIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTExMapIter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TExMapIter*)obj)->::CppyyLegacy::TExMapIter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TExMapIter

namespace CppyyLegacy {
//______________________________________________________________________________
void THashList::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::THashList.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TList baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTHashList(void *p) {
      return  p ? new(p) ::CppyyLegacy::THashList : new ::CppyyLegacy::THashList;
   }
   static void *newArray_CppyyLegacycLcLTHashList(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::THashList[nElements] : new ::CppyyLegacy::THashList[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTHashList(void *p) {
      delete ((::CppyyLegacy::THashList*)p);
   }
   static void deleteArray_CppyyLegacycLcLTHashList(void *p) {
      delete [] ((::CppyyLegacy::THashList*)p);
   }
   static void destruct_CppyyLegacycLcLTHashList(void *p) {
      typedef ::CppyyLegacy::THashList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTHashList(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::THashList*)obj)->::CppyyLegacy::THashList::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::THashList

namespace CppyyLegacy {
//______________________________________________________________________________
void TObjectTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TObjectTable.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTObjectTable(void *p) {
      return  p ? new(p) ::CppyyLegacy::TObjectTable : new ::CppyyLegacy::TObjectTable;
   }
   static void *newArray_CppyyLegacycLcLTObjectTable(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TObjectTable[nElements] : new ::CppyyLegacy::TObjectTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTObjectTable(void *p) {
      delete ((::CppyyLegacy::TObjectTable*)p);
   }
   static void deleteArray_CppyyLegacycLcLTObjectTable(void *p) {
      delete [] ((::CppyyLegacy::TObjectTable*)p);
   }
   static void destruct_CppyyLegacycLcLTObjectTable(void *p) {
      typedef ::CppyyLegacy::TObjectTable current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTObjectTable(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TObjectTable*)obj)->::CppyyLegacy::TObjectTable::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TObjectTable

namespace CppyyLegacy {
//______________________________________________________________________________
void TOrdCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TOrdCollection.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TSeqCollection baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTOrdCollection(void *p) {
      return  p ? new(p) ::CppyyLegacy::TOrdCollection : new ::CppyyLegacy::TOrdCollection;
   }
   static void *newArray_CppyyLegacycLcLTOrdCollection(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TOrdCollection[nElements] : new ::CppyyLegacy::TOrdCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTOrdCollection(void *p) {
      delete ((::CppyyLegacy::TOrdCollection*)p);
   }
   static void deleteArray_CppyyLegacycLcLTOrdCollection(void *p) {
      delete [] ((::CppyyLegacy::TOrdCollection*)p);
   }
   static void destruct_CppyyLegacycLcLTOrdCollection(void *p) {
      typedef ::CppyyLegacy::TOrdCollection current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTOrdCollection(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TOrdCollection*)obj)->::CppyyLegacy::TOrdCollection::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TOrdCollection

namespace CppyyLegacy {
//______________________________________________________________________________
void TOrdCollectionIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TOrdCollectionIter.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TIterator baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTOrdCollectionIter(void *p) {
      delete ((::CppyyLegacy::TOrdCollectionIter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTOrdCollectionIter(void *p) {
      delete [] ((::CppyyLegacy::TOrdCollectionIter*)p);
   }
   static void destruct_CppyyLegacycLcLTOrdCollectionIter(void *p) {
      typedef ::CppyyLegacy::TOrdCollectionIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTOrdCollectionIter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TOrdCollectionIter*)obj)->::CppyyLegacy::TOrdCollectionIter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TOrdCollectionIter

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTClassRef(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TClassRef : new ::CppyyLegacy::TClassRef;
   }
   static void *newArray_CppyyLegacycLcLTClassRef(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) ::CppyyLegacy::TClassRef[nElements] : new ::CppyyLegacy::TClassRef[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTClassRef(void *p) {
      delete ((::CppyyLegacy::TClassRef*)p);
   }
   static void deleteArray_CppyyLegacycLcLTClassRef(void *p) {
      delete [] ((::CppyyLegacy::TClassRef*)p);
   }
   static void destruct_CppyyLegacycLcLTClassRef(void *p) {
      typedef ::CppyyLegacy::TClassRef current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TClassRef

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTVirtualCollectionProxy(void *p) {
      delete ((::CppyyLegacy::TVirtualCollectionProxy*)p);
   }
   static void deleteArray_CppyyLegacycLcLTVirtualCollectionProxy(void *p) {
      delete [] ((::CppyyLegacy::TVirtualCollectionProxy*)p);
   }
   static void destruct_CppyyLegacycLcLTVirtualCollectionProxy(void *p) {
      typedef ::CppyyLegacy::TVirtualCollectionProxy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TVirtualCollectionProxy

namespace CppyyLegacy {
//______________________________________________________________________________
void TUnixSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TUnixSystem.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TSystem baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTUnixSystem(void *p) {
      return  p ? new(p) ::CppyyLegacy::TUnixSystem : new ::CppyyLegacy::TUnixSystem;
   }
   static void *newArray_CppyyLegacycLcLTUnixSystem(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TUnixSystem[nElements] : new ::CppyyLegacy::TUnixSystem[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTUnixSystem(void *p) {
      delete ((::CppyyLegacy::TUnixSystem*)p);
   }
   static void deleteArray_CppyyLegacycLcLTUnixSystem(void *p) {
      delete [] ((::CppyyLegacy::TUnixSystem*)p);
   }
   static void destruct_CppyyLegacycLcLTUnixSystem(void *p) {
      typedef ::CppyyLegacy::TUnixSystem current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTUnixSystem(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TUnixSystem*)obj)->::CppyyLegacy::TUnixSystem::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TUnixSystem

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTBaseClass(void *p) {
      return  p ? new(p) ::CppyyLegacy::TBaseClass : new ::CppyyLegacy::TBaseClass;
   }
   static void *newArray_CppyyLegacycLcLTBaseClass(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TBaseClass[nElements] : new ::CppyyLegacy::TBaseClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTBaseClass(void *p) {
      delete ((::CppyyLegacy::TBaseClass*)p);
   }
   static void deleteArray_CppyyLegacycLcLTBaseClass(void *p) {
      delete [] ((::CppyyLegacy::TBaseClass*)p);
   }
   static void destruct_CppyyLegacycLcLTBaseClass(void *p) {
      typedef ::CppyyLegacy::TBaseClass current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTBaseClass(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TBaseClass*)obj)->::CppyyLegacy::TBaseClass::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TBaseClass

namespace CppyyLegacy {
//______________________________________________________________________________
void TClassGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TClassGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TClassGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TClassGenerator::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TClassGenerator

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTClassStreamer(void *p) {
      delete ((::CppyyLegacy::TClassStreamer*)p);
   }
   static void deleteArray_CppyyLegacycLcLTClassStreamer(void *p) {
      delete [] ((::CppyyLegacy::TClassStreamer*)p);
   }
   static void destruct_CppyyLegacycLcLTClassStreamer(void *p) {
      typedef ::CppyyLegacy::TClassStreamer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TClassStreamer

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTDataMember(void *p) {
      return  p ? new(p) ::CppyyLegacy::TDataMember : new ::CppyyLegacy::TDataMember;
   }
   static void *newArray_CppyyLegacycLcLTDataMember(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TDataMember[nElements] : new ::CppyyLegacy::TDataMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTDataMember(void *p) {
      delete ((::CppyyLegacy::TDataMember*)p);
   }
   static void deleteArray_CppyyLegacycLcLTDataMember(void *p) {
      delete [] ((::CppyyLegacy::TDataMember*)p);
   }
   static void destruct_CppyyLegacycLcLTDataMember(void *p) {
      typedef ::CppyyLegacy::TDataMember current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTDataMember(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TDataMember*)obj)->::CppyyLegacy::TDataMember::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TDataMember

namespace CppyyLegacy {
//______________________________________________________________________________
void TOptionListItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TOptionListItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TOptionListItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TOptionListItem::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTOptionListItem(void *p) {
      return  p ? new(p) ::CppyyLegacy::TOptionListItem : new ::CppyyLegacy::TOptionListItem;
   }
   static void *newArray_CppyyLegacycLcLTOptionListItem(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TOptionListItem[nElements] : new ::CppyyLegacy::TOptionListItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTOptionListItem(void *p) {
      delete ((::CppyyLegacy::TOptionListItem*)p);
   }
   static void deleteArray_CppyyLegacycLcLTOptionListItem(void *p) {
      delete [] ((::CppyyLegacy::TOptionListItem*)p);
   }
   static void destruct_CppyyLegacycLcLTOptionListItem(void *p) {
      typedef ::CppyyLegacy::TOptionListItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TOptionListItem

namespace CppyyLegacy {
//______________________________________________________________________________
void TDictAttributeMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TDictAttributeMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TDictAttributeMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TDictAttributeMap::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTDictAttributeMap(void *p) {
      return  p ? new(p) ::CppyyLegacy::TDictAttributeMap : new ::CppyyLegacy::TDictAttributeMap;
   }
   static void *newArray_CppyyLegacycLcLTDictAttributeMap(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TDictAttributeMap[nElements] : new ::CppyyLegacy::TDictAttributeMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTDictAttributeMap(void *p) {
      delete ((::CppyyLegacy::TDictAttributeMap*)p);
   }
   static void deleteArray_CppyyLegacycLcLTDictAttributeMap(void *p) {
      delete [] ((::CppyyLegacy::TDictAttributeMap*)p);
   }
   static void destruct_CppyyLegacycLcLTDictAttributeMap(void *p) {
      typedef ::CppyyLegacy::TDictAttributeMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TDictAttributeMap

namespace CppyyLegacy {
//______________________________________________________________________________
void TGlobal::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TGlobal.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TGlobal thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef ::CppyyLegacy::TDictionary baseClass0;
      baseClass0::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef ::CppyyLegacy::TDictionary baseClass0;
      baseClass0::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTGlobal(void *p) {
      return  p ? new(p) ::CppyyLegacy::TGlobal : new ::CppyyLegacy::TGlobal;
   }
   static void *newArray_CppyyLegacycLcLTGlobal(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TGlobal[nElements] : new ::CppyyLegacy::TGlobal[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTGlobal(void *p) {
      delete ((::CppyyLegacy::TGlobal*)p);
   }
   static void deleteArray_CppyyLegacycLcLTGlobal(void *p) {
      delete [] ((::CppyyLegacy::TGlobal*)p);
   }
   static void destruct_CppyyLegacycLcLTGlobal(void *p) {
      typedef ::CppyyLegacy::TGlobal current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTGlobal(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TGlobal*)obj)->::CppyyLegacy::TGlobal::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TGlobal

namespace CppyyLegacy {
//______________________________________________________________________________
void TEnum::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TEnum.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TEnum::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TEnum::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTEnum(void *p) {
      return  p ? new(p) ::CppyyLegacy::TEnum : new ::CppyyLegacy::TEnum;
   }
   static void *newArray_CppyyLegacycLcLTEnum(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TEnum[nElements] : new ::CppyyLegacy::TEnum[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTEnum(void *p) {
      delete ((::CppyyLegacy::TEnum*)p);
   }
   static void deleteArray_CppyyLegacycLcLTEnum(void *p) {
      delete [] ((::CppyyLegacy::TEnum*)p);
   }
   static void destruct_CppyyLegacycLcLTEnum(void *p) {
      typedef ::CppyyLegacy::TEnum current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TEnum

namespace CppyyLegacy {
//______________________________________________________________________________
void TEnumConstant::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TEnumConstant.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TEnumConstant::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TEnumConstant::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTEnumConstant(void *p) {
      return  p ? new(p) ::CppyyLegacy::TEnumConstant : new ::CppyyLegacy::TEnumConstant;
   }
   static void *newArray_CppyyLegacycLcLTEnumConstant(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TEnumConstant[nElements] : new ::CppyyLegacy::TEnumConstant[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTEnumConstant(void *p) {
      delete ((::CppyyLegacy::TEnumConstant*)p);
   }
   static void deleteArray_CppyyLegacycLcLTEnumConstant(void *p) {
      delete [] ((::CppyyLegacy::TEnumConstant*)p);
   }
   static void destruct_CppyyLegacycLcLTEnumConstant(void *p) {
      typedef ::CppyyLegacy::TEnumConstant current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TEnumConstant

namespace CppyyLegacy {
//______________________________________________________________________________
void TFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TFunction.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TDictionary baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTFunction(void *p) {
      return  p ? new(p) ::CppyyLegacy::TFunction : new ::CppyyLegacy::TFunction;
   }
   static void *newArray_CppyyLegacycLcLTFunction(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TFunction[nElements] : new ::CppyyLegacy::TFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTFunction(void *p) {
      delete ((::CppyyLegacy::TFunction*)p);
   }
   static void deleteArray_CppyyLegacycLcLTFunction(void *p) {
      delete [] ((::CppyyLegacy::TFunction*)p);
   }
   static void destruct_CppyyLegacycLcLTFunction(void *p) {
      typedef ::CppyyLegacy::TFunction current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTFunction(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TFunction*)obj)->::CppyyLegacy::TFunction::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TFunction

namespace CppyyLegacy {
//______________________________________________________________________________
void TFunctionTemplate::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TFunctionTemplate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TFunctionTemplate::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TFunctionTemplate::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTFunctionTemplate(void *p) {
      delete ((::CppyyLegacy::TFunctionTemplate*)p);
   }
   static void deleteArray_CppyyLegacycLcLTFunctionTemplate(void *p) {
      delete [] ((::CppyyLegacy::TFunctionTemplate*)p);
   }
   static void destruct_CppyyLegacycLcLTFunctionTemplate(void *p) {
      typedef ::CppyyLegacy::TFunctionTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TFunctionTemplate

namespace CppyyLegacy {
//______________________________________________________________________________
void TInterpreter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TInterpreter.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TNamed baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTInterpreter(void *p) {
      delete ((::CppyyLegacy::TInterpreter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTInterpreter(void *p) {
      delete [] ((::CppyyLegacy::TInterpreter*)p);
   }
   static void destruct_CppyyLegacycLcLTInterpreter(void *p) {
      typedef ::CppyyLegacy::TInterpreter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTInterpreter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TInterpreter*)obj)->::CppyyLegacy::TInterpreter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TInterpreter

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTListOfDataMembers(void *p) {
      return  p ? new(p) ::CppyyLegacy::TListOfDataMembers : new ::CppyyLegacy::TListOfDataMembers;
   }
   static void *newArray_CppyyLegacycLcLTListOfDataMembers(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TListOfDataMembers[nElements] : new ::CppyyLegacy::TListOfDataMembers[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTListOfDataMembers(void *p) {
      delete ((::CppyyLegacy::TListOfDataMembers*)p);
   }
   static void deleteArray_CppyyLegacycLcLTListOfDataMembers(void *p) {
      delete [] ((::CppyyLegacy::TListOfDataMembers*)p);
   }
   static void destruct_CppyyLegacycLcLTListOfDataMembers(void *p) {
      typedef ::CppyyLegacy::TListOfDataMembers current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTListOfDataMembers(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TListOfDataMembers*)obj)->::CppyyLegacy::TListOfDataMembers::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TListOfDataMembers

namespace CppyyLegacy {
//______________________________________________________________________________
void TListOfEnums::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TListOfEnums.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TListOfEnums::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TListOfEnums::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTListOfEnums(void *p) {
      return  p ? new(p) ::CppyyLegacy::TListOfEnums : new ::CppyyLegacy::TListOfEnums;
   }
   static void *newArray_CppyyLegacycLcLTListOfEnums(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TListOfEnums[nElements] : new ::CppyyLegacy::TListOfEnums[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTListOfEnums(void *p) {
      delete ((::CppyyLegacy::TListOfEnums*)p);
   }
   static void deleteArray_CppyyLegacycLcLTListOfEnums(void *p) {
      delete [] ((::CppyyLegacy::TListOfEnums*)p);
   }
   static void destruct_CppyyLegacycLcLTListOfEnums(void *p) {
      typedef ::CppyyLegacy::TListOfEnums current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TListOfEnums

namespace CppyyLegacy {
//______________________________________________________________________________
void TListOfEnumsWithLock::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TListOfEnumsWithLock.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TListOfEnumsWithLock::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TListOfEnumsWithLock::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTListOfEnumsWithLock(void *p) {
      return  p ? new(p) ::CppyyLegacy::TListOfEnumsWithLock : new ::CppyyLegacy::TListOfEnumsWithLock;
   }
   static void *newArray_CppyyLegacycLcLTListOfEnumsWithLock(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TListOfEnumsWithLock[nElements] : new ::CppyyLegacy::TListOfEnumsWithLock[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTListOfEnumsWithLock(void *p) {
      delete ((::CppyyLegacy::TListOfEnumsWithLock*)p);
   }
   static void deleteArray_CppyyLegacycLcLTListOfEnumsWithLock(void *p) {
      delete [] ((::CppyyLegacy::TListOfEnumsWithLock*)p);
   }
   static void destruct_CppyyLegacycLcLTListOfEnumsWithLock(void *p) {
      typedef ::CppyyLegacy::TListOfEnumsWithLock current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TListOfEnumsWithLock

namespace CppyyLegacy {
//______________________________________________________________________________
void TListOfEnumsWithLockIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TListOfEnumsWithLockIter.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TListIter baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTListOfEnumsWithLockIter(void *p) {
      delete ((::CppyyLegacy::TListOfEnumsWithLockIter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTListOfEnumsWithLockIter(void *p) {
      delete [] ((::CppyyLegacy::TListOfEnumsWithLockIter*)p);
   }
   static void destruct_CppyyLegacycLcLTListOfEnumsWithLockIter(void *p) {
      typedef ::CppyyLegacy::TListOfEnumsWithLockIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTListOfEnumsWithLockIter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TListOfEnumsWithLockIter*)obj)->::CppyyLegacy::TListOfEnumsWithLockIter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TListOfEnumsWithLockIter

namespace CppyyLegacy {
//______________________________________________________________________________
void TListOfFunctions::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TListOfFunctions.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TListOfFunctions::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TListOfFunctions::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTListOfFunctions(void *p) {
      delete ((::CppyyLegacy::TListOfFunctions*)p);
   }
   static void deleteArray_CppyyLegacycLcLTListOfFunctions(void *p) {
      delete [] ((::CppyyLegacy::TListOfFunctions*)p);
   }
   static void destruct_CppyyLegacycLcLTListOfFunctions(void *p) {
      typedef ::CppyyLegacy::TListOfFunctions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TListOfFunctions

namespace CppyyLegacy {
//______________________________________________________________________________
void TListOfFunctionsIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TListOfFunctionsIter.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TListIter baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTListOfFunctionsIter(void *p) {
      delete ((::CppyyLegacy::TListOfFunctionsIter*)p);
   }
   static void deleteArray_CppyyLegacycLcLTListOfFunctionsIter(void *p) {
      delete [] ((::CppyyLegacy::TListOfFunctionsIter*)p);
   }
   static void destruct_CppyyLegacycLcLTListOfFunctionsIter(void *p) {
      typedef ::CppyyLegacy::TListOfFunctionsIter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTListOfFunctionsIter(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TListOfFunctionsIter*)obj)->::CppyyLegacy::TListOfFunctionsIter::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TListOfFunctionsIter

namespace CppyyLegacy {
//______________________________________________________________________________
void TListOfFunctionTemplates::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TListOfFunctionTemplates.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TListOfFunctionTemplates::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TListOfFunctionTemplates::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTListOfFunctionTemplates(void *p) {
      delete ((::CppyyLegacy::TListOfFunctionTemplates*)p);
   }
   static void deleteArray_CppyyLegacycLcLTListOfFunctionTemplates(void *p) {
      delete [] ((::CppyyLegacy::TListOfFunctionTemplates*)p);
   }
   static void destruct_CppyyLegacycLcLTListOfFunctionTemplates(void *p) {
      typedef ::CppyyLegacy::TListOfFunctionTemplates current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TListOfFunctionTemplates

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMemberStreamer(void *p) {
      delete ((::CppyyLegacy::TMemberStreamer*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMemberStreamer(void *p) {
      delete [] ((::CppyyLegacy::TMemberStreamer*)p);
   }
   static void destruct_CppyyLegacycLcLTMemberStreamer(void *p) {
      typedef ::CppyyLegacy::TMemberStreamer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMemberStreamer

namespace CppyyLegacy {
//______________________________________________________________________________
void TMethodArg::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TMethodArg.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TDictionary baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTMethodArg(void *p) {
      return  p ? new(p) ::CppyyLegacy::TMethodArg : new ::CppyyLegacy::TMethodArg;
   }
   static void *newArray_CppyyLegacycLcLTMethodArg(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TMethodArg[nElements] : new ::CppyyLegacy::TMethodArg[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMethodArg(void *p) {
      delete ((::CppyyLegacy::TMethodArg*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMethodArg(void *p) {
      delete [] ((::CppyyLegacy::TMethodArg*)p);
   }
   static void destruct_CppyyLegacycLcLTMethodArg(void *p) {
      typedef ::CppyyLegacy::TMethodArg current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTMethodArg(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TMethodArg*)obj)->::CppyyLegacy::TMethodArg::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMethodArg

namespace CppyyLegacy {
//______________________________________________________________________________
void TMethod::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TMethod.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TFunction baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTMethod(void *p) {
      return  p ? new(p) ::CppyyLegacy::TMethod : new ::CppyyLegacy::TMethod;
   }
   static void *newArray_CppyyLegacycLcLTMethod(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TMethod[nElements] : new ::CppyyLegacy::TMethod[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTMethod(void *p) {
      delete ((::CppyyLegacy::TMethod*)p);
   }
   static void deleteArray_CppyyLegacycLcLTMethod(void *p) {
      delete [] ((::CppyyLegacy::TMethod*)p);
   }
   static void destruct_CppyyLegacycLcLTMethod(void *p) {
      typedef ::CppyyLegacy::TMethod current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTMethod(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TMethod*)obj)->::CppyyLegacy::TMethod::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TMethod

namespace CppyyLegacy {
//______________________________________________________________________________
void TProtoClass::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TProtoClass.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TProtoClass::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TProtoClass::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTProtoClass(void *p) {
      return  p ? new(p) ::CppyyLegacy::TProtoClass : new ::CppyyLegacy::TProtoClass;
   }
   static void *newArray_CppyyLegacycLcLTProtoClass(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TProtoClass[nElements] : new ::CppyyLegacy::TProtoClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTProtoClass(void *p) {
      delete ((::CppyyLegacy::TProtoClass*)p);
   }
   static void deleteArray_CppyyLegacycLcLTProtoClass(void *p) {
      delete [] ((::CppyyLegacy::TProtoClass*)p);
   }
   static void destruct_CppyyLegacycLcLTProtoClass(void *p) {
      typedef ::CppyyLegacy::TProtoClass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TProtoClass

namespace CppyyLegacy {
//______________________________________________________________________________
void TProtoClass::TProtoRealData::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TProtoClass::TProtoRealData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(::CppyyLegacy::TProtoClass::TProtoRealData::Class(),this);
   } else {
      R__b.WriteClassBuffer(::CppyyLegacy::TProtoClass::TProtoRealData::Class(),this);
   }
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(void *p) {
      return  p ? new(p) ::CppyyLegacy::TProtoClass::TProtoRealData : new ::CppyyLegacy::TProtoClass::TProtoRealData;
   }
   static void *newArray_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TProtoClass::TProtoRealData[nElements] : new ::CppyyLegacy::TProtoClass::TProtoRealData[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(void *p) {
      delete ((::CppyyLegacy::TProtoClass::TProtoRealData*)p);
   }
   static void deleteArray_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(void *p) {
      delete [] ((::CppyyLegacy::TProtoClass::TProtoRealData*)p);
   }
   static void destruct_CppyyLegacycLcLTProtoClasscLcLTProtoRealData(void *p) {
      typedef ::CppyyLegacy::TProtoClass::TProtoRealData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TProtoClass::TProtoRealData

namespace CppyyLegacy {
//______________________________________________________________________________
void TRealData::Streamer(TBuffer &R__b)
{
   // Stream an object of class CppyyLegacy::TRealData.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::CppyyLegacy::TObject baseClass0;
   baseClass0::Streamer(R__b);
}

} // namespace CppyyLegacy
namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTRealData(void *p) {
      return  p ? new(p) ::CppyyLegacy::TRealData : new ::CppyyLegacy::TRealData;
   }
   static void *newArray_CppyyLegacycLcLTRealData(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TRealData[nElements] : new ::CppyyLegacy::TRealData[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTRealData(void *p) {
      delete ((::CppyyLegacy::TRealData*)p);
   }
   static void deleteArray_CppyyLegacycLcLTRealData(void *p) {
      delete [] ((::CppyyLegacy::TRealData*)p);
   }
   static void destruct_CppyyLegacycLcLTRealData(void *p) {
      typedef ::CppyyLegacy::TRealData current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTRealData(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TRealData*)obj)->::CppyyLegacy::TRealData::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TRealData

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerElement(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerElement : new ::CppyyLegacy::TStreamerElement;
   }
   static void *newArray_CppyyLegacycLcLTStreamerElement(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerElement[nElements] : new ::CppyyLegacy::TStreamerElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerElement(void *p) {
      delete ((::CppyyLegacy::TStreamerElement*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerElement(void *p) {
      delete [] ((::CppyyLegacy::TStreamerElement*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerElement(void *p) {
      typedef ::CppyyLegacy::TStreamerElement current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerElement(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerElement*)obj)->::CppyyLegacy::TStreamerElement::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerElement

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerBase(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerBase : new ::CppyyLegacy::TStreamerBase;
   }
   static void *newArray_CppyyLegacycLcLTStreamerBase(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerBase[nElements] : new ::CppyyLegacy::TStreamerBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerBase(void *p) {
      delete ((::CppyyLegacy::TStreamerBase*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerBase(void *p) {
      delete [] ((::CppyyLegacy::TStreamerBase*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerBase(void *p) {
      typedef ::CppyyLegacy::TStreamerBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerBase(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerBase*)obj)->::CppyyLegacy::TStreamerBase::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerBase

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerBasicPointer(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerBasicPointer : new ::CppyyLegacy::TStreamerBasicPointer;
   }
   static void *newArray_CppyyLegacycLcLTStreamerBasicPointer(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerBasicPointer[nElements] : new ::CppyyLegacy::TStreamerBasicPointer[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerBasicPointer(void *p) {
      delete ((::CppyyLegacy::TStreamerBasicPointer*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerBasicPointer(void *p) {
      delete [] ((::CppyyLegacy::TStreamerBasicPointer*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerBasicPointer(void *p) {
      typedef ::CppyyLegacy::TStreamerBasicPointer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerBasicPointer(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerBasicPointer*)obj)->::CppyyLegacy::TStreamerBasicPointer::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerBasicPointer

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerLoop(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerLoop : new ::CppyyLegacy::TStreamerLoop;
   }
   static void *newArray_CppyyLegacycLcLTStreamerLoop(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerLoop[nElements] : new ::CppyyLegacy::TStreamerLoop[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerLoop(void *p) {
      delete ((::CppyyLegacy::TStreamerLoop*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerLoop(void *p) {
      delete [] ((::CppyyLegacy::TStreamerLoop*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerLoop(void *p) {
      typedef ::CppyyLegacy::TStreamerLoop current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerLoop(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerLoop*)obj)->::CppyyLegacy::TStreamerLoop::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerLoop

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerBasicType(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerBasicType : new ::CppyyLegacy::TStreamerBasicType;
   }
   static void *newArray_CppyyLegacycLcLTStreamerBasicType(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerBasicType[nElements] : new ::CppyyLegacy::TStreamerBasicType[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerBasicType(void *p) {
      delete ((::CppyyLegacy::TStreamerBasicType*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerBasicType(void *p) {
      delete [] ((::CppyyLegacy::TStreamerBasicType*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerBasicType(void *p) {
      typedef ::CppyyLegacy::TStreamerBasicType current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerBasicType(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerBasicType*)obj)->::CppyyLegacy::TStreamerBasicType::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerBasicType

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerObject(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerObject : new ::CppyyLegacy::TStreamerObject;
   }
   static void *newArray_CppyyLegacycLcLTStreamerObject(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerObject[nElements] : new ::CppyyLegacy::TStreamerObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerObject(void *p) {
      delete ((::CppyyLegacy::TStreamerObject*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerObject(void *p) {
      delete [] ((::CppyyLegacy::TStreamerObject*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerObject(void *p) {
      typedef ::CppyyLegacy::TStreamerObject current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerObject(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerObject*)obj)->::CppyyLegacy::TStreamerObject::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerObject

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerObjectAny(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerObjectAny : new ::CppyyLegacy::TStreamerObjectAny;
   }
   static void *newArray_CppyyLegacycLcLTStreamerObjectAny(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerObjectAny[nElements] : new ::CppyyLegacy::TStreamerObjectAny[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerObjectAny(void *p) {
      delete ((::CppyyLegacy::TStreamerObjectAny*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerObjectAny(void *p) {
      delete [] ((::CppyyLegacy::TStreamerObjectAny*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerObjectAny(void *p) {
      typedef ::CppyyLegacy::TStreamerObjectAny current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerObjectAny(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerObjectAny*)obj)->::CppyyLegacy::TStreamerObjectAny::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerObjectAny

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerObjectPointer(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerObjectPointer : new ::CppyyLegacy::TStreamerObjectPointer;
   }
   static void *newArray_CppyyLegacycLcLTStreamerObjectPointer(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerObjectPointer[nElements] : new ::CppyyLegacy::TStreamerObjectPointer[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerObjectPointer(void *p) {
      delete ((::CppyyLegacy::TStreamerObjectPointer*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerObjectPointer(void *p) {
      delete [] ((::CppyyLegacy::TStreamerObjectPointer*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerObjectPointer(void *p) {
      typedef ::CppyyLegacy::TStreamerObjectPointer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerObjectPointer(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerObjectPointer*)obj)->::CppyyLegacy::TStreamerObjectPointer::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerObjectPointer

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerObjectAnyPointer(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerObjectAnyPointer : new ::CppyyLegacy::TStreamerObjectAnyPointer;
   }
   static void *newArray_CppyyLegacycLcLTStreamerObjectAnyPointer(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerObjectAnyPointer[nElements] : new ::CppyyLegacy::TStreamerObjectAnyPointer[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerObjectAnyPointer(void *p) {
      delete ((::CppyyLegacy::TStreamerObjectAnyPointer*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerObjectAnyPointer(void *p) {
      delete [] ((::CppyyLegacy::TStreamerObjectAnyPointer*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerObjectAnyPointer(void *p) {
      typedef ::CppyyLegacy::TStreamerObjectAnyPointer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerObjectAnyPointer(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerObjectAnyPointer*)obj)->::CppyyLegacy::TStreamerObjectAnyPointer::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerObjectAnyPointer

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerString(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerString : new ::CppyyLegacy::TStreamerString;
   }
   static void *newArray_CppyyLegacycLcLTStreamerString(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerString[nElements] : new ::CppyyLegacy::TStreamerString[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerString(void *p) {
      delete ((::CppyyLegacy::TStreamerString*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerString(void *p) {
      delete [] ((::CppyyLegacy::TStreamerString*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerString(void *p) {
      typedef ::CppyyLegacy::TStreamerString current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerString(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerString*)obj)->::CppyyLegacy::TStreamerString::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerString

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerSTL(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerSTL : new ::CppyyLegacy::TStreamerSTL;
   }
   static void *newArray_CppyyLegacycLcLTStreamerSTL(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerSTL[nElements] : new ::CppyyLegacy::TStreamerSTL[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerSTL(void *p) {
      delete ((::CppyyLegacy::TStreamerSTL*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerSTL(void *p) {
      delete [] ((::CppyyLegacy::TStreamerSTL*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerSTL(void *p) {
      typedef ::CppyyLegacy::TStreamerSTL current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerSTL(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerSTL*)obj)->::CppyyLegacy::TStreamerSTL::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerSTL

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_CppyyLegacycLcLTStreamerSTLstring(void *p) {
      return  p ? new(p) ::CppyyLegacy::TStreamerSTLstring : new ::CppyyLegacy::TStreamerSTLstring;
   }
   static void *newArray_CppyyLegacycLcLTStreamerSTLstring(Long_t nElements, void *p) {
      return p ? new(p) ::CppyyLegacy::TStreamerSTLstring[nElements] : new ::CppyyLegacy::TStreamerSTLstring[nElements];
   }
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTStreamerSTLstring(void *p) {
      delete ((::CppyyLegacy::TStreamerSTLstring*)p);
   }
   static void deleteArray_CppyyLegacycLcLTStreamerSTLstring(void *p) {
      delete [] ((::CppyyLegacy::TStreamerSTLstring*)p);
   }
   static void destruct_CppyyLegacycLcLTStreamerSTLstring(void *p) {
      typedef ::CppyyLegacy::TStreamerSTLstring current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTStreamerSTLstring(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TStreamerSTLstring*)obj)->::CppyyLegacy::TStreamerSTLstring::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TStreamerSTLstring

namespace CppyyLegacy {
   // Wrapper around operator delete
   static void delete_CppyyLegacycLcLTVirtualStreamerInfo(void *p) {
      delete ((::CppyyLegacy::TVirtualStreamerInfo*)p);
   }
   static void deleteArray_CppyyLegacycLcLTVirtualStreamerInfo(void *p) {
      delete [] ((::CppyyLegacy::TVirtualStreamerInfo*)p);
   }
   static void destruct_CppyyLegacycLcLTVirtualStreamerInfo(void *p) {
      typedef ::CppyyLegacy::TVirtualStreamerInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CppyyLegacycLcLTVirtualStreamerInfo(TBuffer &buf, void *obj) {
      ((::CppyyLegacy::TVirtualStreamerInfo*)obj)->::CppyyLegacy::TVirtualStreamerInfo::Streamer(buf);
   }
} // end of namespace CppyyLegacy for class ::CppyyLegacy::TVirtualStreamerInfo

namespace CppyyLegacy {
   static TClass *stdcLcLvectorlEunsignedsPintgR_Dictionary();
   static void stdcLcLvectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_stdcLcLvectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_stdcLcLvectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_stdcLcLvectorlEunsignedsPintgR(void *p);
   static void deleteArray_stdcLcLvectorlEunsignedsPintgR(void *p);
   static void destruct_stdcLcLvectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::vector<unsigned int>*)
   {
      std::vector<unsigned int> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::vector<unsigned int>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::vector<unsigned int>", -2, "vector", 386,
                  typeid(std::vector<unsigned int>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLvectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(std::vector<unsigned int>) );
      instance.SetNew(&new_stdcLcLvectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_stdcLcLvectorlEunsignedsPintgR);
      instance.SetDelete(&delete_stdcLcLvectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLvectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_stdcLcLvectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< std::vector<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLvectorlEunsignedsPintgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::vector<unsigned int>*)0x0)->GetClass();
      stdcLcLvectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLvectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLvectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::vector<unsigned int> : new std::vector<unsigned int>;
   }
   static void *newArray_stdcLcLvectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::vector<unsigned int>[nElements] : new std::vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLvectorlEunsignedsPintgR(void *p) {
      delete ((std::vector<unsigned int>*)p);
   }
   static void deleteArray_stdcLcLvectorlEunsignedsPintgR(void *p) {
      delete [] ((std::vector<unsigned int>*)p);
   }
   static void destruct_stdcLcLvectorlEunsignedsPintgR(void *p) {
      typedef std::vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::vector<unsigned int>

namespace CppyyLegacy {
   static TClass *stdcLcLvectorlECppyyLegacycLcLTStringgR_Dictionary();
   static void stdcLcLvectorlECppyyLegacycLcLTStringgR_TClassManip(TClass*);
   static void *new_stdcLcLvectorlECppyyLegacycLcLTStringgR(void *p = 0);
   static void *newArray_stdcLcLvectorlECppyyLegacycLcLTStringgR(Long_t size, void *p);
   static void delete_stdcLcLvectorlECppyyLegacycLcLTStringgR(void *p);
   static void deleteArray_stdcLcLvectorlECppyyLegacycLcLTStringgR(void *p);
   static void destruct_stdcLcLvectorlECppyyLegacycLcLTStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::vector<CppyyLegacy::TString>*)
   {
      std::vector<CppyyLegacy::TString> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::vector<CppyyLegacy::TString>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::vector<CppyyLegacy::TString>", -2, "vector", 386,
                  typeid(std::vector<CppyyLegacy::TString>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLvectorlECppyyLegacycLcLTStringgR_Dictionary, isa_proxy, 0,
                  sizeof(std::vector<CppyyLegacy::TString>) );
      instance.SetNew(&new_stdcLcLvectorlECppyyLegacycLcLTStringgR);
      instance.SetNewArray(&newArray_stdcLcLvectorlECppyyLegacycLcLTStringgR);
      instance.SetDelete(&delete_stdcLcLvectorlECppyyLegacycLcLTStringgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLvectorlECppyyLegacycLcLTStringgR);
      instance.SetDestructor(&destruct_stdcLcLvectorlECppyyLegacycLcLTStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< std::vector<CppyyLegacy::TString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::vector<CppyyLegacy::TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLvectorlECppyyLegacycLcLTStringgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::vector<CppyyLegacy::TString>*)0x0)->GetClass();
      stdcLcLvectorlECppyyLegacycLcLTStringgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLvectorlECppyyLegacycLcLTStringgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLvectorlECppyyLegacycLcLTStringgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::vector<CppyyLegacy::TString> : new std::vector<CppyyLegacy::TString>;
   }
   static void *newArray_stdcLcLvectorlECppyyLegacycLcLTStringgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::vector<CppyyLegacy::TString>[nElements] : new std::vector<CppyyLegacy::TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLvectorlECppyyLegacycLcLTStringgR(void *p) {
      delete ((std::vector<CppyyLegacy::TString>*)p);
   }
   static void deleteArray_stdcLcLvectorlECppyyLegacycLcLTStringgR(void *p) {
      delete [] ((std::vector<CppyyLegacy::TString>*)p);
   }
   static void destruct_stdcLcLvectorlECppyyLegacycLcLTStringgR(void *p) {
      typedef std::vector<CppyyLegacy::TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::vector<CppyyLegacy::TString>

namespace CppyyLegacy {
   static TClass *stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR_Dictionary();
   static void stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR_TClassManip(TClass*);
   static void *new_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(void *p = 0);
   static void *newArray_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(Long_t size, void *p);
   static void delete_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(void *p);
   static void deleteArray_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(void *p);
   static void destruct_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::vector<CppyyLegacy::TProtoClass::TProtoRealData>*)
   {
      std::vector<CppyyLegacy::TProtoClass::TProtoRealData> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::vector<CppyyLegacy::TProtoClass::TProtoRealData>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::vector<CppyyLegacy::TProtoClass::TProtoRealData>", -2, "vector", 386,
                  typeid(std::vector<CppyyLegacy::TProtoClass::TProtoRealData>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR_Dictionary, isa_proxy, 0,
                  sizeof(std::vector<CppyyLegacy::TProtoClass::TProtoRealData>) );
      instance.SetNew(&new_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR);
      instance.SetNewArray(&newArray_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR);
      instance.SetDelete(&delete_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR);
      instance.SetDeleteArray(&deleteArray_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR);
      instance.SetDestructor(&destruct_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< std::vector<CppyyLegacy::TProtoClass::TProtoRealData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::vector<CppyyLegacy::TProtoClass::TProtoRealData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::vector<CppyyLegacy::TProtoClass::TProtoRealData>*)0x0)->GetClass();
      stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::vector<CppyyLegacy::TProtoClass::TProtoRealData> : new std::vector<CppyyLegacy::TProtoClass::TProtoRealData>;
   }
   static void *newArray_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::vector<CppyyLegacy::TProtoClass::TProtoRealData>[nElements] : new std::vector<CppyyLegacy::TProtoClass::TProtoRealData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(void *p) {
      delete ((std::vector<CppyyLegacy::TProtoClass::TProtoRealData>*)p);
   }
   static void deleteArray_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(void *p) {
      delete [] ((std::vector<CppyyLegacy::TProtoClass::TProtoRealData>*)p);
   }
   static void destruct_stdcLcLvectorlECppyyLegacycLcLTProtoClasscLcLTProtoRealDatagR(void *p) {
      typedef std::vector<CppyyLegacy::TProtoClass::TProtoRealData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::vector<CppyyLegacy::TProtoClass::TProtoRealData>

namespace CppyyLegacy {
   static TClass *stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR_Dictionary();
   static void stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR_TClassManip(TClass*);
   static void *new_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(void *p = 0);
   static void *newArray_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(Long_t size, void *p);
   static void delete_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(void *p);
   static void deleteArray_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(void *p);
   static void destruct_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const std::vector<CppyyLegacy::TDataMember*>*)
   {
      std::vector<CppyyLegacy::TDataMember*> *ptr = 0;
      static ::CppyyLegacy::TVirtualIsAProxy* isa_proxy = new ::CppyyLegacy::TIsAProxy(typeid(std::vector<CppyyLegacy::TDataMember*>));
      static ::CppyyLegacy::TGenericClassInfo 
         instance("std::vector<CppyyLegacy::TDataMember*>", -2, "vector", 386,
                  typeid(std::vector<CppyyLegacy::TDataMember*>), ::CppyyLegacy::Internal::DefineBehavior(ptr, ptr),
                  &stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR_Dictionary, isa_proxy, 0,
                  sizeof(std::vector<CppyyLegacy::TDataMember*>) );
      instance.SetNew(&new_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR);
      instance.SetNewArray(&newArray_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR);
      instance.SetDelete(&delete_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR);
      instance.SetDeleteArray(&deleteArray_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR);
      instance.SetDestructor(&destruct_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< std::vector<CppyyLegacy::TDataMember*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::CppyyLegacy::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const std::vector<CppyyLegacy::TDataMember*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static ::CppyyLegacy::TClass *stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR_Dictionary() {
      ::CppyyLegacy::TClass* theClass =::CppyyLegacy::GenerateInitInstanceLocal((const std::vector<CppyyLegacy::TDataMember*>*)0x0)->GetClass();
      stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR_TClassManip(theClass);
   return theClass;
   }

   static void stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR_TClassManip(TClass* ){
   }

} // end of namespace CppyyLegacy

namespace CppyyLegacy {
   // Wrappers around operator new
   static void *new_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(void *p) {
      return  p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::vector<CppyyLegacy::TDataMember*> : new std::vector<CppyyLegacy::TDataMember*>;
   }
   static void *newArray_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(Long_t nElements, void *p) {
      return p ? ::new((::CppyyLegacy::Internal::TOperatorNewHelper*)p) std::vector<CppyyLegacy::TDataMember*>[nElements] : new std::vector<CppyyLegacy::TDataMember*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(void *p) {
      delete ((std::vector<CppyyLegacy::TDataMember*>*)p);
   }
   static void deleteArray_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(void *p) {
      delete [] ((std::vector<CppyyLegacy::TDataMember*>*)p);
   }
   static void destruct_stdcLcLvectorlECppyyLegacycLcLTDataMembermUgR(void *p) {
      typedef std::vector<CppyyLegacy::TDataMember*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace CppyyLegacy for class std::vector<CppyyLegacy::TDataMember*>

namespace {
  void TriggerDictionaryInitialization_libCoreLegacy_Impl() {
    static const char* headers[] = {
"Bytes.h",
"Byteswap.h",
"Riostream.h",
"Rtypes.h",
"TApplication.h",
"TBuffer.h",
"TDatime.h",
"TDirectory.h",
"TEnv.h",
"TError.h",
"TException.h",
"TInetAddress.h",
"TMathBase.h",
"TMD5.h",
"TMemberInspector.h",
"TNamed.h",
"TObject.h",
"TObjString.h",
"TProcessID.h",
"TProcessUUID.h",
"TRegexp.h",
"TROOT.h",
"TStorage.h",
"TString.h",
"TSysEvtHandler.h",
"TSystem.h",
"TThreadSlots.h",
"TTime.h",
"TTimeStamp.h",
"TUrl.h",
"TUUID.h",
"TVersionCheck.h",
"TVirtualMutex.h",
"TVirtualRWMutex.h",
"strlcpy.h",
"snprintf.h",
"TArrayC.h",
"TArray.h",
"TBits.h",
"TClassTable.h",
"TCollection.h",
"TCollectionProxyInfo.h",
"TExMap.h",
"THashList.h",
"THashTable.h",
"TIterator.h",
"TList.h",
"TMap.h",
"TObjArray.h",
"TObjectTable.h",
"TOrdCollection.h",
"TSeqCollection.h",
"TVirtualCollectionProxy.h",
"ESTLType.h",
"RStringView.h",
"TClassEdit.h",
"ROOT/RMakeUnique.hxx",
"ROOT/RSpan.hxx",
"ROOT/RStringView.hxx",
"ROOT/TypeTraits.hxx",
"TUnixSystem.h",
"root_std_complex.h",
"TClingRuntime.h",
"TBaseClass.h",
"TClassGenerator.h",
"TClass.h",
"TClassRef.h",
"TClassStreamer.h",
"TDataMember.h",
"TDataType.h",
"TDictAttributeMap.h",
"TDictionary.h",
"TEnumConstant.h",
"TEnum.h",
"TFunction.h",
"TFunctionTemplate.h",
"TGenericClassInfo.h",
"TGlobal.h",
"TInterpreter.h",
"TInterpreterValue.h",
"TIsAProxy.h",
"TListOfDataMembers.h",
"TListOfEnums.h",
"TListOfEnumsWithLock.h",
"TListOfFunctions.h",
"TListOfFunctionTemplates.h",
"TMemberStreamer.h",
"TMethodArg.h",
"TMethod.h",
"TProtoClass.h",
"TRealData.h",
"TStreamerElement.h",
"TStreamer.h",
"TVirtualIsAProxy.h",
"TVirtualStreamerInfo.h",
"Getline.h",
0
    };
    static const char* includePaths[] = {
"$PREFIX/include",
"$PREFIX/include",
"$PREFIX/include",
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libCoreLegacy dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Bytes.h"
#include "Byteswap.h"
#include "Riostream.h"
#include "Rtypes.h"
#include "TApplication.h"
#include "TBuffer.h"
#include "TDatime.h"
#include "TDirectory.h"
#include "TEnv.h"
#include "TError.h"
#include "TException.h"
#include "TInetAddress.h"
#include "TMathBase.h"
#include "TMD5.h"
#include "TMemberInspector.h"
#include "TNamed.h"
#include "TObject.h"
#include "TObjString.h"
#include "TProcessID.h"
#include "TProcessUUID.h"
#include "TRegexp.h"
#include "TROOT.h"
#include "TStorage.h"
#include "TString.h"
#include "TSysEvtHandler.h"
#include "TSystem.h"
#include "TThreadSlots.h"
#include "TTime.h"
#include "TTimeStamp.h"
#include "TUrl.h"
#include "TUUID.h"
#include "TVersionCheck.h"
#include "TVirtualMutex.h"
#include "TVirtualRWMutex.h"
#include "strlcpy.h"
#include "snprintf.h"
#include "TArrayC.h"
#include "TArray.h"
#include "TBits.h"
#include "TClassTable.h"
#include "TCollection.h"
#include "TCollectionProxyInfo.h"
#include "TExMap.h"
#include "THashList.h"
#include "THashTable.h"
#include "TIterator.h"
#include "TList.h"
#include "TMap.h"
#include "TObjArray.h"
#include "TObjectTable.h"
#include "TOrdCollection.h"
#include "TSeqCollection.h"
#include "TVirtualCollectionProxy.h"
#include "ESTLType.h"
#include "RStringView.h"
#include "TClassEdit.h"
#include "ROOT/RMakeUnique.hxx"
#include "ROOT/RSpan.hxx"
#include "ROOT/RStringView.hxx"
#include "ROOT/TypeTraits.hxx"
#include "TUnixSystem.h"
#include "root_std_complex.h"
#include "TClingRuntime.h"
#include "TBaseClass.h"
#include "TClassGenerator.h"
#include "TClass.h"
#include "TClassRef.h"
#include "TClassStreamer.h"
#include "TDataMember.h"
#include "TDataType.h"
#include "TDictAttributeMap.h"
#include "TDictionary.h"
#include "TEnumConstant.h"
#include "TEnum.h"
#include "TFunction.h"
#include "TFunctionTemplate.h"
#include "TGenericClassInfo.h"
#include "TGlobal.h"
#include "TInterpreter.h"
#include "TInterpreterValue.h"
#include "TIsAProxy.h"
#include "TListOfDataMembers.h"
#include "TListOfEnums.h"
#include "TListOfEnumsWithLock.h"
#include "TListOfFunctions.h"
#include "TListOfFunctionTemplates.h"
#include "TMemberStreamer.h"
#include "TMethodArg.h"
#include "TMethod.h"
#include "TProtoClass.h"
#include "TRealData.h"
#include "TStreamerElement.h"
#include "TStreamer.h"
#include "TVirtualIsAProxy.h"
#include "TVirtualStreamerInfo.h"
#include "Getline.h"

// Extra includes
#include "string"
#include "string"
#include "Rpair.h"
#include "Rtypes.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CppyyLegacy::Compress", payloadCode, "@",
"CppyyLegacy::EAccessMode", payloadCode, "@",
"CppyyLegacy::EDataType", payloadCode, "@",
"CppyyLegacy::EEnvLevel", payloadCode, "@",
"CppyyLegacy::EObjBits", payloadCode, "@",
"CppyyLegacy::EProperty", payloadCode, "@",
"CppyyLegacy::ESignals", payloadCode, "@",
"CppyyLegacy::ESysConstants", payloadCode, "@",
"CppyyLegacy::Error", payloadCode, "@",
"CppyyLegacy::EscChar", payloadCode, "@",
"CppyyLegacy::Fatal", payloadCode, "@",
"CppyyLegacy::FileStat_t", payloadCode, "@",
"CppyyLegacy::Form", payloadCode, "@",
"CppyyLegacy::GetROOT", payloadCode, "@",
"CppyyLegacy::Hash", payloadCode, "@",
"CppyyLegacy::Info", payloadCode, "@",
"CppyyLegacy::RedirectHandle_t", payloadCode, "@",
"CppyyLegacy::StrDup", payloadCode, "@",
"CppyyLegacy::Strip", payloadCode, "@",
"CppyyLegacy::SysError", payloadCode, "@",
"CppyyLegacy::TApplication", payloadCode, "@",
"CppyyLegacy::TArray", payloadCode, "@",
"CppyyLegacy::TArrayC", payloadCode, "@",
"CppyyLegacy::TAssoc", payloadCode, "@",
"CppyyLegacy::TBaseClass", payloadCode, "@",
"CppyyLegacy::TBits", payloadCode, "@",
"CppyyLegacy::TBits::TReference", payloadCode, "@",
"CppyyLegacy::TBuffer", payloadCode, "@",
"CppyyLegacy::TClass", payloadCode, "@",
"CppyyLegacy::TClassGenerator", payloadCode, "@",
"CppyyLegacy::TClassRef", payloadCode, "@",
"CppyyLegacy::TClassStreamer", payloadCode, "@",
"CppyyLegacy::TClassTable", payloadCode, "@",
"CppyyLegacy::TCollection", payloadCode, "@",
"CppyyLegacy::TDataMember", payloadCode, "@",
"CppyyLegacy::TDataType", payloadCode, "@",
"CppyyLegacy::TDatime", payloadCode, "@",
"CppyyLegacy::TDictAttributeMap", payloadCode, "@",
"CppyyLegacy::TDictionary", payloadCode, "@",
"CppyyLegacy::TDirectory", payloadCode, "@",
"CppyyLegacy::TEnum", payloadCode, "@",
"CppyyLegacy::TEnumConstant", payloadCode, "@",
"CppyyLegacy::TEnv", payloadCode, "@",
"CppyyLegacy::TEnvRec", payloadCode, "@",
"CppyyLegacy::TExMap", payloadCode, "@",
"CppyyLegacy::TExMapIter", payloadCode, "@",
"CppyyLegacy::TFunction", payloadCode, "@",
"CppyyLegacy::TFunctionTemplate", payloadCode, "@",
"CppyyLegacy::TGlobal", payloadCode, "@",
"CppyyLegacy::THashList", payloadCode, "@",
"CppyyLegacy::THashTable", payloadCode, "@",
"CppyyLegacy::THashTableIter", payloadCode, "@",
"CppyyLegacy::TInetAddress", payloadCode, "@",
"CppyyLegacy::TInterpreter", payloadCode, "@",
"CppyyLegacy::TIsAProxy", payloadCode, "@",
"CppyyLegacy::TIter", payloadCode, "@",
"CppyyLegacy::TIterator", payloadCode, "@",
"CppyyLegacy::TList", payloadCode, "@",
"CppyyLegacy::TListIter", payloadCode, "@",
"CppyyLegacy::TListOfDataMembers", payloadCode, "@",
"CppyyLegacy::TListOfEnums", payloadCode, "@",
"CppyyLegacy::TListOfEnumsWithLock", payloadCode, "@",
"CppyyLegacy::TListOfEnumsWithLockIter", payloadCode, "@",
"CppyyLegacy::TListOfFunctionTemplates", payloadCode, "@",
"CppyyLegacy::TListOfFunctions", payloadCode, "@",
"CppyyLegacy::TListOfFunctionsIter", payloadCode, "@",
"CppyyLegacy::TLockGuard", payloadCode, "@",
"CppyyLegacy::TMD5", payloadCode, "@",
"CppyyLegacy::TMap", payloadCode, "@",
"CppyyLegacy::TMapIter", payloadCode, "@",
"CppyyLegacy::TMemberInspector", payloadCode, "@",
"CppyyLegacy::TMemberStreamer", payloadCode, "@",
"CppyyLegacy::TMethod", payloadCode, "@",
"CppyyLegacy::TMethodArg", payloadCode, "@",
"CppyyLegacy::TNamed", payloadCode, "@",
"CppyyLegacy::TObjArray", payloadCode, "@",
"CppyyLegacy::TObjArrayIter", payloadCode, "@",
"CppyyLegacy::TObjString", payloadCode, "@",
"CppyyLegacy::TObject", payloadCode, "@",
"CppyyLegacy::TObjectTable", payloadCode, "@",
"CppyyLegacy::TOptionListItem", payloadCode, "@",
"CppyyLegacy::TOrdCollection", payloadCode, "@",
"CppyyLegacy::TOrdCollectionIter", payloadCode, "@",
"CppyyLegacy::TPair", payloadCode, "@",
"CppyyLegacy::TProcessID", payloadCode, "@",
"CppyyLegacy::TProcessUUID", payloadCode, "@",
"CppyyLegacy::TProtoClass", payloadCode, "@",
"CppyyLegacy::TProtoClass::TProtoRealData", payloadCode, "@",
"CppyyLegacy::TROOT", payloadCode, "@",
"CppyyLegacy::TReadLockGuard", payloadCode, "@",
"CppyyLegacy::TRealData", payloadCode, "@",
"CppyyLegacy::TRegexp", payloadCode, "@",
"CppyyLegacy::TSeqCollection", payloadCode, "@",
"CppyyLegacy::TSignalHandler", payloadCode, "@",
"CppyyLegacy::TStdExceptionHandler", payloadCode, "@",
"CppyyLegacy::TStorage", payloadCode, "@",
"CppyyLegacy::TStreamerBase", payloadCode, "@",
"CppyyLegacy::TStreamerBasicPointer", payloadCode, "@",
"CppyyLegacy::TStreamerBasicType", payloadCode, "@",
"CppyyLegacy::TStreamerElement", payloadCode, "@",
"CppyyLegacy::TStreamerLoop", payloadCode, "@",
"CppyyLegacy::TStreamerObject", payloadCode, "@",
"CppyyLegacy::TStreamerObjectAny", payloadCode, "@",
"CppyyLegacy::TStreamerObjectAnyPointer", payloadCode, "@",
"CppyyLegacy::TStreamerObjectPointer", payloadCode, "@",
"CppyyLegacy::TStreamerSTL", payloadCode, "@",
"CppyyLegacy::TStreamerSTLstring", payloadCode, "@",
"CppyyLegacy::TStreamerString", payloadCode, "@",
"CppyyLegacy::TString", payloadCode, "@",
"CppyyLegacy::TSubString", payloadCode, "@",
"CppyyLegacy::TSystem", payloadCode, "@",
"CppyyLegacy::TTime", payloadCode, "@",
"CppyyLegacy::TTimeStamp", payloadCode, "@",
"CppyyLegacy::TUUID", payloadCode, "@",
"CppyyLegacy::TUnixSystem", payloadCode, "@",
"CppyyLegacy::TUrl", payloadCode, "@",
"CppyyLegacy::TVirtualCollectionProxy", payloadCode, "@",
"CppyyLegacy::TVirtualIsAProxy", payloadCode, "@",
"CppyyLegacy::TVirtualMutex", payloadCode, "@",
"CppyyLegacy::TVirtualRWMutex", payloadCode, "@",
"CppyyLegacy::TVirtualStreamerInfo", payloadCode, "@",
"CppyyLegacy::TWriteLockGuard", payloadCode, "@",
"CppyyLegacy::UnEscChar", payloadCode, "@",
"CppyyLegacy::UserGroup_t", payloadCode, "@",
"CppyyLegacy::Warning", payloadCode, "@",
"CppyyLegacy::gApplication", payloadCode, "@",
"CppyyLegacy::gClassTable", payloadCode, "@",
"CppyyLegacy::gDebug", payloadCode, "@",
"CppyyLegacy::gEnv", payloadCode, "@",
"CppyyLegacy::gErrorAbortLevel", payloadCode, "@",
"CppyyLegacy::gErrorIgnoreLevel", payloadCode, "@",
"CppyyLegacy::gObjectTable", payloadCode, "@",
"CppyyLegacy::gPrintViaErrorHandler", payloadCode, "@",
"CppyyLegacy::gProgName", payloadCode, "@",
"CppyyLegacy::gProgPath", payloadCode, "@",
"CppyyLegacy::gRootDir", payloadCode, "@",
"CppyyLegacy::kBitsPerByte", payloadCode, "@",
"CppyyLegacy::kError", payloadCode, "@",
"CppyyLegacy::kFALSE", payloadCode, "@",
"CppyyLegacy::kFatal", payloadCode, "@",
"CppyyLegacy::kInfo", payloadCode, "@",
"CppyyLegacy::kIterBackward", payloadCode, "@",
"CppyyLegacy::kIterForward", payloadCode, "@",
"CppyyLegacy::kMaxChar", payloadCode, "@",
"CppyyLegacy::kMaxInt", payloadCode, "@",
"CppyyLegacy::kMaxLong", payloadCode, "@",
"CppyyLegacy::kMaxLong64", payloadCode, "@",
"CppyyLegacy::kMaxShort", payloadCode, "@",
"CppyyLegacy::kMaxUChar", payloadCode, "@",
"CppyyLegacy::kMaxUInt", payloadCode, "@",
"CppyyLegacy::kMaxULong", payloadCode, "@",
"CppyyLegacy::kMaxULong64", payloadCode, "@",
"CppyyLegacy::kMaxUShort", payloadCode, "@",
"CppyyLegacy::kMinChar", payloadCode, "@",
"CppyyLegacy::kMinInt", payloadCode, "@",
"CppyyLegacy::kMinLong", payloadCode, "@",
"CppyyLegacy::kMinLong64", payloadCode, "@",
"CppyyLegacy::kMinShort", payloadCode, "@",
"CppyyLegacy::kNPOS", payloadCode, "@",
"CppyyLegacy::kSysError", payloadCode, "@",
"CppyyLegacy::kTRUE", payloadCode, "@",
"CppyyLegacy::kWarning", payloadCode, "@",
"gSystem", payloadCode, "@",
"std::string", payloadCode, "@",
"timespec", payloadCode, "@",
"timespec_t", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      ::CppyyLegacy::TROOT::RegisterModule("libCoreLegacy",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libCoreLegacy_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libCoreLegacy_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libCoreLegacy() {
  TriggerDictionaryInitialization_libCoreLegacy_Impl();
}

