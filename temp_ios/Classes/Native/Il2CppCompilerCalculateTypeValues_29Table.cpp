﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Mono.Math.BigInteger
struct BigInteger_t2902905090;
// Mono.Security.ASN1
struct ASN1_t2114160833;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3064139578;
// Mono.Security.Interface.Alert
struct Alert_t1480305158;
// Mono.Security.Interface.CipherSuiteCode[]
struct CipherSuiteCodeU5BU5D_t3566916850;
// Mono.Security.Interface.ICertificateValidator
struct ICertificateValidator_t849923962;
// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct MonoLocalCertificateSelectionCallback_t1375878923;
// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct MonoRemoteCertificateValidationCallback_t2521872312;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3218159896;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168550;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t609554709;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventArgs
struct EventArgs_t3591816995;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.DSA
struct DSA_t2386879874;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t3586970409;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t194917408;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



#ifndef U3CMODULEU3E_T692745530_H
#define U3CMODULEU3E_T692745530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745530 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745530_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef BIGINTEGER_T2902905090_H
#define BIGINTEGER_T2902905090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t2902905090  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t2770800703* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t2902905090, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t2902905090, ___data_1)); }
	inline UInt32U5BU5D_t2770800703* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t2770800703** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t2770800703* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t2902905090_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t2770800703* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t386037858 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t2902905090_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t2770800703* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t2770800703* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t2902905090_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t386037858 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t386037858 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T2902905090_H
#ifndef KERNEL_T1402667220_H
#define KERNEL_T1402667220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t1402667220  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T1402667220_H
#ifndef MODULUSRING_T596511505_H
#define MODULUSRING_T596511505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t596511505  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t2902905090 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t2902905090 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t596511505, ___mod_0)); }
	inline BigInteger_t2902905090 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t2902905090 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t2902905090 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t596511505, ___constant_1)); }
	inline BigInteger_t2902905090 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t2902905090 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t2902905090 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T596511505_H
#ifndef PRIMEGENERATORBASE_T446028867_H
#define PRIMEGENERATORBASE_T446028867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t446028867  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T446028867_H
#ifndef PRIMALITYTESTS_T1538473976_H
#define PRIMALITYTESTS_T1538473976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t1538473976  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T1538473976_H
#ifndef BITCONVERTERLE_T2108532979_H
#define BITCONVERTERLE_T2108532979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2108532979  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2108532979_H
#ifndef CRYPTOCONVERT_T610933157_H
#define CRYPTOCONVERT_T610933157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t610933157  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T610933157_H
#ifndef PKCS1_T1505584677_H
#define PKCS1_T1505584677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t1505584677  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t1505584677_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t4116647657* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t4116647657* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t4116647657* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t4116647657* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T1505584677_H
#ifndef PKCS8_T696280613_H
#define PKCS8_T696280613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t696280613  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T696280613_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T862116836_H
#define ENCRYPTEDPRIVATEKEYINFO_T862116836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t862116836  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t4116647657* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t4116647657* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____salt_1)); }
	inline ByteU5BU5D_t4116647657* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t4116647657* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____data_3)); }
	inline ByteU5BU5D_t4116647657* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t4116647657* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T862116836_H
#ifndef PRIVATEKEYINFO_T668027993_H
#define PRIVATEKEYINFO_T668027993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t668027993  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t4116647657* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t2718874744 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____key_2)); }
	inline ByteU5BU5D_t4116647657* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t4116647657** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t4116647657* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____list_3)); }
	inline ArrayList_t2718874744 * get__list_3() const { return ____list_3; }
	inline ArrayList_t2718874744 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t2718874744 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T668027993_H
#ifndef CERTIFICATEVALIDATIONHELPER_T2276302545_H
#define CERTIFICATEVALIDATIONHELPER_T2276302545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.CertificateValidationHelper
struct  CertificateValidationHelper_t2276302545  : public RuntimeObject
{
public:

public:
};

struct CertificateValidationHelper_t2276302545_StaticFields
{
public:
	// System.Boolean Mono.Security.Interface.CertificateValidationHelper::noX509Chain
	bool ___noX509Chain_0;
	// System.Boolean Mono.Security.Interface.CertificateValidationHelper::supportsTrustAnchors
	bool ___supportsTrustAnchors_1;

public:
	inline static int32_t get_offset_of_noX509Chain_0() { return static_cast<int32_t>(offsetof(CertificateValidationHelper_t2276302545_StaticFields, ___noX509Chain_0)); }
	inline bool get_noX509Chain_0() const { return ___noX509Chain_0; }
	inline bool* get_address_of_noX509Chain_0() { return &___noX509Chain_0; }
	inline void set_noX509Chain_0(bool value)
	{
		___noX509Chain_0 = value;
	}

	inline static int32_t get_offset_of_supportsTrustAnchors_1() { return static_cast<int32_t>(offsetof(CertificateValidationHelper_t2276302545_StaticFields, ___supportsTrustAnchors_1)); }
	inline bool get_supportsTrustAnchors_1() const { return ___supportsTrustAnchors_1; }
	inline bool* get_address_of_supportsTrustAnchors_1() { return &___supportsTrustAnchors_1; }
	inline void set_supportsTrustAnchors_1(bool value)
	{
		___supportsTrustAnchors_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATEVALIDATIONHELPER_T2276302545_H
#ifndef MONOTLSPROVIDER_T3152003291_H
#define MONOTLSPROVIDER_T3152003291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsProvider
struct  MonoTlsProvider_t3152003291  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSPROVIDER_T3152003291_H
#ifndef PKCS7_T1860834339_H
#define PKCS7_T1860834339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t1860834339  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T1860834339_H
#ifndef CONTENTINFO_T3218159896_H
#define CONTENTINFO_T3218159896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t3218159896  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t2114160833 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159896, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159896, ___content_1)); }
	inline ASN1_t2114160833 * get_content_1() const { return ___content_1; }
	inline ASN1_t2114160833 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t2114160833 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T3218159896_H
#ifndef ENCRYPTEDDATA_T3577548733_H
#define ENCRYPTEDDATA_T3577548733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t3577548733  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t3218159896 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t3218159896 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t4116647657* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____content_1)); }
	inline ContentInfo_t3218159896 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t3218159896 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t3218159896 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t3218159896 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t3218159896 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t3218159896 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____encrypted_3)); }
	inline ByteU5BU5D_t4116647657* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t4116647657* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T3577548733_H
#ifndef PKCS12_T4101533061_H
#define PKCS12_T4101533061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t4101533061  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t4116647657* ____password_0;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t2718874744 * ____keyBags_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t2718874744 * ____secretBags_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t1542168550 * ____certs_3;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_4;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_6;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_7;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t2718874744 * ____safeBags_8;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t386037858 * ____rng_9;

public:
	inline static int32_t get_offset_of__password_0() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____password_0)); }
	inline ByteU5BU5D_t4116647657* get__password_0() const { return ____password_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_0() { return &____password_0; }
	inline void set__password_0(ByteU5BU5D_t4116647657* value)
	{
		____password_0 = value;
		Il2CppCodeGenWriteBarrier((&____password_0), value);
	}

	inline static int32_t get_offset_of__keyBags_1() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____keyBags_1)); }
	inline ArrayList_t2718874744 * get__keyBags_1() const { return ____keyBags_1; }
	inline ArrayList_t2718874744 ** get_address_of__keyBags_1() { return &____keyBags_1; }
	inline void set__keyBags_1(ArrayList_t2718874744 * value)
	{
		____keyBags_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_1), value);
	}

	inline static int32_t get_offset_of__secretBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____secretBags_2)); }
	inline ArrayList_t2718874744 * get__secretBags_2() const { return ____secretBags_2; }
	inline ArrayList_t2718874744 ** get_address_of__secretBags_2() { return &____secretBags_2; }
	inline void set__secretBags_2(ArrayList_t2718874744 * value)
	{
		____secretBags_2 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_2), value);
	}

	inline static int32_t get_offset_of__certs_3() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____certs_3)); }
	inline X509CertificateCollection_t1542168550 * get__certs_3() const { return ____certs_3; }
	inline X509CertificateCollection_t1542168550 ** get_address_of__certs_3() { return &____certs_3; }
	inline void set__certs_3(X509CertificateCollection_t1542168550 * value)
	{
		____certs_3 = value;
		Il2CppCodeGenWriteBarrier((&____certs_3), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_4() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____keyBagsChanged_4)); }
	inline bool get__keyBagsChanged_4() const { return ____keyBagsChanged_4; }
	inline bool* get_address_of__keyBagsChanged_4() { return &____keyBagsChanged_4; }
	inline void set__keyBagsChanged_4(bool value)
	{
		____keyBagsChanged_4 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____secretBagsChanged_5)); }
	inline bool get__secretBagsChanged_5() const { return ____secretBagsChanged_5; }
	inline bool* get_address_of__secretBagsChanged_5() { return &____secretBagsChanged_5; }
	inline void set__secretBagsChanged_5(bool value)
	{
		____secretBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__certsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____certsChanged_6)); }
	inline bool get__certsChanged_6() const { return ____certsChanged_6; }
	inline bool* get_address_of__certsChanged_6() { return &____certsChanged_6; }
	inline void set__certsChanged_6(bool value)
	{
		____certsChanged_6 = value;
	}

	inline static int32_t get_offset_of__iterations_7() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____iterations_7)); }
	inline int32_t get__iterations_7() const { return ____iterations_7; }
	inline int32_t* get_address_of__iterations_7() { return &____iterations_7; }
	inline void set__iterations_7(int32_t value)
	{
		____iterations_7 = value;
	}

	inline static int32_t get_offset_of__safeBags_8() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____safeBags_8)); }
	inline ArrayList_t2718874744 * get__safeBags_8() const { return ____safeBags_8; }
	inline ArrayList_t2718874744 ** get_address_of__safeBags_8() { return &____safeBags_8; }
	inline void set__safeBags_8(ArrayList_t2718874744 * value)
	{
		____safeBags_8 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_8), value);
	}

	inline static int32_t get_offset_of__rng_9() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____rng_9)); }
	inline RandomNumberGenerator_t386037858 * get__rng_9() const { return ____rng_9; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_9() { return &____rng_9; }
	inline void set__rng_9(RandomNumberGenerator_t386037858 * value)
	{
		____rng_9 = value;
		Il2CppCodeGenWriteBarrier((&____rng_9), value);
	}
};

struct PKCS12_t4101533061_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_10;

public:
	inline static int32_t get_offset_of_password_max_length_10() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___password_max_length_10)); }
	inline int32_t get_password_max_length_10() const { return ___password_max_length_10; }
	inline int32_t* get_address_of_password_max_length_10() { return &___password_max_length_10; }
	inline void set_password_max_length_10(int32_t value)
	{
		___password_max_length_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T4101533061_H
#ifndef DERIVEBYTES_T1492915136_H
#define DERIVEBYTES_T1492915136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t1492915136  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t4116647657* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t4116647657* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____password_5)); }
	inline ByteU5BU5D_t4116647657* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t4116647657* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____salt_6)); }
	inline ByteU5BU5D_t4116647657* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t4116647657* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t1492915136_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t4116647657* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t4116647657* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t4116647657* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t4116647657* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t4116647657* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t4116647657* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t4116647657* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t4116647657* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t4116647657* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T1492915136_H
#ifndef SAFEBAG_T3961248200_H
#define SAFEBAG_T3961248200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t3961248200  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t2114160833 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t3961248200, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t3961248200, ____asn1_1)); }
	inline ASN1_t2114160833 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t2114160833 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t2114160833 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T3961248200_H
#ifndef X501_T1758824426_H
#define X501_T1758824426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t1758824426  : public RuntimeObject
{
public:

public:
};

struct X501_t1758824426_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t4116647657* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t4116647657* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t4116647657* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t4116647657* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t4116647657* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t4116647657* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t4116647657* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t4116647657* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t4116647657* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t4116647657* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t4116647657* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t4116647657* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t4116647657* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t4116647657* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t4116647657* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t4116647657* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t4116647657* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t4116647657* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t4116647657* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t4116647657* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t4116647657* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t4116647657* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t4116647657* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t4116647657* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t4116647657* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t4116647657* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t4116647657* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t4116647657* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t4116647657* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t4116647657* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t4116647657* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t4116647657* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t4116647657* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t4116647657* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t4116647657* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t4116647657* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t4116647657* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t4116647657* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t4116647657* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t4116647657* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t4116647657* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t4116647657* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t4116647657* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t4116647657* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t4116647657* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T1758824426_H
#ifndef X509CERTIFICATEENUMERATOR_T3515934698_H
#define X509CERTIFICATEENUMERATOR_T3515934698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3515934698  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3515934698, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T3515934698_H
#ifndef X509EXTENSION_T3173393653_H
#define X509EXTENSION_T3173393653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t3173393653  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t2114160833 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnValue_2)); }
	inline ASN1_t2114160833 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t2114160833 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t2114160833 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T3173393653_H
#ifndef SR_T167583546_H
#define SR_T167583546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SR
struct  SR_t167583546  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SR_T167583546_H
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2727926298_H
#ifndef ENUMERABLEHELPERS_T3229093989_H
#define ENUMERABLEHELPERS_T3229093989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EnumerableHelpers
struct  EnumerableHelpers_t3229093989  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEHELPERS_T3229093989_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef ERROR_T2882114465_H
#define ERROR_T2882114465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Error
struct  Error_t2882114465  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROR_T2882114465_H
#ifndef UTILITIES_T3288484762_H
#define UTILITIES_T3288484762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Utilities
struct  Utilities_t3288484762  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILITIES_T3288484762_H
#ifndef ASYMMETRICALGORITHM_T932037087_H
#define ASYMMETRICALGORITHM_T932037087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t932037087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T932037087_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef __STATICARRAYINITTYPESIZEU3D10_T1548194904_H
#define __STATICARRAYINITTYPESIZEU3D10_T1548194904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct  __StaticArrayInitTypeSizeU3D10_t1548194904 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t1548194904__padding[10];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D10_T1548194904_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#define __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t3517563373 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t3517563373__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#ifndef __STATICARRAYINITTYPESIZEU3D20_T1548391513_H
#define __STATICARRAYINITTYPESIZEU3D20_T1548391513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct  __StaticArrayInitTypeSizeU3D20_t1548391513 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t1548391513__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D20_T1548391513_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#define __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t3217885684 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t3217885684__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#ifndef __STATICARRAYINITTYPESIZEU3D3132_T3825993976_H
#define __STATICARRAYINITTYPESIZEU3D3132_T3825993976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct  __StaticArrayInitTypeSizeU3D3132_t3825993976 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_t3825993976__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3132_T3825993976_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125392 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125392__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#ifndef __STATICARRAYINITTYPESIZEU3D48_T1904228656_H
#define __STATICARRAYINITTYPESIZEU3D48_T1904228656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct  __StaticArrayInitTypeSizeU3D48_t1904228656 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t1904228656__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D48_T1904228656_H
#ifndef __STATICARRAYINITTYPESIZEU3D64_T3517497837_H
#define __STATICARRAYINITTYPESIZEU3D64_T3517497837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct  __StaticArrayInitTypeSizeU3D64_t3517497837 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t3517497837__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D64_T3517497837_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#define __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3218278900 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t3218278900__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090509_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t2996090509  : public PrimeGeneratorBase_t446028867
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090509_H
#ifndef TLSEXCEPTION_T3204531704_H
#define TLSEXCEPTION_T3204531704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.TlsException
struct  TlsException_t3204531704  : public Exception_t
{
public:
	// Mono.Security.Interface.Alert Mono.Security.Interface.TlsException::alert
	Alert_t1480305158 * ___alert_17;

public:
	inline static int32_t get_offset_of_alert_17() { return static_cast<int32_t>(offsetof(TlsException_t3204531704, ___alert_17)); }
	inline Alert_t1480305158 * get_alert_17() const { return ___alert_17; }
	inline Alert_t1480305158 ** get_address_of_alert_17() { return &___alert_17; }
	inline void set_alert_17(Alert_t1480305158 * value)
	{
		___alert_17 = value;
		Il2CppCodeGenWriteBarrier((&___alert_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSEXCEPTION_T3204531704_H
#ifndef X509CERTIFICATECOLLECTION_T1542168550_H
#define X509CERTIFICATECOLLECTION_T1542168550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t1542168550  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T1542168550_H
#ifndef X509EXTENSIONCOLLECTION_T609554709_H
#define X509EXTENSIONCOLLECTION_T609554709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t609554709  : public CollectionBase_t2727926298
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t609554709, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T609554709_H
#ifndef COPYPOSITION_T2993389481_H
#define COPYPOSITION_T2993389481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.CopyPosition
struct  CopyPosition_t2993389481 
{
public:
	// System.Int32 System.Collections.Generic.CopyPosition::<Row>k__BackingField
	int32_t ___U3CRowU3Ek__BackingField_0;
	// System.Int32 System.Collections.Generic.CopyPosition::<Column>k__BackingField
	int32_t ___U3CColumnU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CRowU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CopyPosition_t2993389481, ___U3CRowU3Ek__BackingField_0)); }
	inline int32_t get_U3CRowU3Ek__BackingField_0() const { return ___U3CRowU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CRowU3Ek__BackingField_0() { return &___U3CRowU3Ek__BackingField_0; }
	inline void set_U3CRowU3Ek__BackingField_0(int32_t value)
	{
		___U3CRowU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CColumnU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CopyPosition_t2993389481, ___U3CColumnU3Ek__BackingField_1)); }
	inline int32_t get_U3CColumnU3Ek__BackingField_1() const { return ___U3CColumnU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CColumnU3Ek__BackingField_1() { return &___U3CColumnU3Ek__BackingField_1; }
	inline void set_U3CColumnU3Ek__BackingField_1(int32_t value)
	{
		___U3CColumnU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COPYPOSITION_T2993389481_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef RSA_T2385438082_H
#define RSA_T2385438082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t2385438082  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T2385438082_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::12D04472A8285260EA12FD3813CDFA9F2D2B548C
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::13A35EF1A549297C70E2AD46045BBD2ECA17852D
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::235D99572263B22ADFEE10FDA0C25E12F4D94FFC
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130
	__StaticArrayInitTypeSizeU3D14_t3517563373  ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::320B018758ECE3752FFEDBAEB1A6DB67C80B9359
	__StaticArrayInitTypeSizeU3D64_t3517497837  ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::3E3442C7396F3F2BB4C7348F4A2074C7DC677D68
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4E3B533C39447AAEB59A8E48FABD7E15B5B5D195
	__StaticArrayInitTypeSizeU3D48_t1904228656  ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::56DFA5053B3131883637F53219E7D88CCEF35949
	__StaticArrayInitTypeSizeU3D10_t1548194904  ___56DFA5053B3131883637F53219E7D88CCEF35949_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t3218278900  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::6E5DC824F803F8565AF31B42199DAE39FE7F4EA9
	__StaticArrayInitTypeSizeU3D3132_t3825993976  ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::736D39815215889F11249D9958F6ED12D37B9F57
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___736D39815215889F11249D9958F6ED12D37B9F57_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::86F4F563FA2C61798AE6238D789139739428463A
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___86F4F563FA2C61798AE6238D789139739428463A_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::97FB30C84FF4A41CD4625B44B2940BFC8DB43003
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5
	__StaticArrayInitTypeSizeU3D64_t3517497837  ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A323DB0813C4D072957BA6FDA79D9776674CD06B
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___A323DB0813C4D072957BA6FDA79D9776674CD06B_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BE1BDEC0AA74B4DCB079943E70528096CCA985F8
	__StaticArrayInitTypeSizeU3D20_t1548391513  ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::BF477463CE2F5EF38FC4C644BBBF4DF109E7670A
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::CF0B42666EF5E37EDEA0AB8E173E42C196D03814
	__StaticArrayInitTypeSizeU3D64_t3517497837  ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE
	__StaticArrayInitTypeSizeU3D32_t2711125392  ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E75835D001C843F156FBA01B001DFE1B8029AC17
	__StaticArrayInitTypeSizeU3D64_t3517497837  ___E75835D001C843F156FBA01B001DFE1B8029AC17_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11
	__StaticArrayInitTypeSizeU3D10_t1548194904  ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::EC83FB16C20052BEE2B4025159BC2ED45C9C70C3
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23;

public:
	inline static int32_t get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() const { return ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0() { return &___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0; }
	inline void set_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___12D04472A8285260EA12FD3813CDFA9F2D2B548C_0 = value;
	}

	inline static int32_t get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() const { return ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1() { return &___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1; }
	inline void set_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___13A35EF1A549297C70E2AD46045BBD2ECA17852D_1 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_2)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_2; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_2; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_2 = value;
	}

	inline static int32_t get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3() const { return ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3() { return &___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3; }
	inline void set_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3 = value;
	}

	inline static int32_t get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4)); }
	inline __StaticArrayInitTypeSizeU3D14_t3517563373  get_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4() const { return ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4; }
	inline __StaticArrayInitTypeSizeU3D14_t3517563373 * get_address_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4() { return &___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4; }
	inline void set_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4(__StaticArrayInitTypeSizeU3D14_t3517563373  value)
	{
		___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4 = value;
	}

	inline static int32_t get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837  get_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5() const { return ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837 * get_address_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5() { return &___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5; }
	inline void set_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5(__StaticArrayInitTypeSizeU3D64_t3517497837  value)
	{
		___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5 = value;
	}

	inline static int32_t get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6() const { return ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6() { return &___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6; }
	inline void set_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6 = value;
	}

	inline static int32_t get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7)); }
	inline __StaticArrayInitTypeSizeU3D48_t1904228656  get_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7() const { return ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7; }
	inline __StaticArrayInitTypeSizeU3D48_t1904228656 * get_address_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7() { return &___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7; }
	inline void set_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7(__StaticArrayInitTypeSizeU3D48_t1904228656  value)
	{
		___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7 = value;
	}

	inline static int32_t get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___56DFA5053B3131883637F53219E7D88CCEF35949_8)); }
	inline __StaticArrayInitTypeSizeU3D10_t1548194904  get_U356DFA5053B3131883637F53219E7D88CCEF35949_8() const { return ___56DFA5053B3131883637F53219E7D88CCEF35949_8; }
	inline __StaticArrayInitTypeSizeU3D10_t1548194904 * get_address_of_U356DFA5053B3131883637F53219E7D88CCEF35949_8() { return &___56DFA5053B3131883637F53219E7D88CCEF35949_8; }
	inline void set_U356DFA5053B3131883637F53219E7D88CCEF35949_8(__StaticArrayInitTypeSizeU3D10_t1548194904  value)
	{
		___56DFA5053B3131883637F53219E7D88CCEF35949_8 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9(__StaticArrayInitTypeSizeU3D9_t3218278900  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_9 = value;
	}

	inline static int32_t get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10)); }
	inline __StaticArrayInitTypeSizeU3D3132_t3825993976  get_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10() const { return ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10; }
	inline __StaticArrayInitTypeSizeU3D3132_t3825993976 * get_address_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10() { return &___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10; }
	inline void set_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10(__StaticArrayInitTypeSizeU3D3132_t3825993976  value)
	{
		___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10 = value;
	}

	inline static int32_t get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___736D39815215889F11249D9958F6ED12D37B9F57_11)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U3736D39815215889F11249D9958F6ED12D37B9F57_11() const { return ___736D39815215889F11249D9958F6ED12D37B9F57_11; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U3736D39815215889F11249D9958F6ED12D37B9F57_11() { return &___736D39815215889F11249D9958F6ED12D37B9F57_11; }
	inline void set_U3736D39815215889F11249D9958F6ED12D37B9F57_11(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___736D39815215889F11249D9958F6ED12D37B9F57_11 = value;
	}

	inline static int32_t get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___86F4F563FA2C61798AE6238D789139739428463A_12)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U386F4F563FA2C61798AE6238D789139739428463A_12() const { return ___86F4F563FA2C61798AE6238D789139739428463A_12; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U386F4F563FA2C61798AE6238D789139739428463A_12() { return &___86F4F563FA2C61798AE6238D789139739428463A_12; }
	inline void set_U386F4F563FA2C61798AE6238D789139739428463A_12(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___86F4F563FA2C61798AE6238D789139739428463A_12 = value;
	}

	inline static int32_t get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13() const { return ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13() { return &___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13; }
	inline void set_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_13 = value;
	}

	inline static int32_t get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837  get_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14() const { return ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837 * get_address_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14() { return &___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14; }
	inline void set_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14(__StaticArrayInitTypeSizeU3D64_t3517497837  value)
	{
		___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14 = value;
	}

	inline static int32_t get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15() const { return ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15() { return &___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15; }
	inline void set_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15 = value;
	}

	inline static int32_t get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___A323DB0813C4D072957BA6FDA79D9776674CD06B_16)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_A323DB0813C4D072957BA6FDA79D9776674CD06B_16() const { return ___A323DB0813C4D072957BA6FDA79D9776674CD06B_16; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_16() { return &___A323DB0813C4D072957BA6FDA79D9776674CD06B_16; }
	inline void set_A323DB0813C4D072957BA6FDA79D9776674CD06B_16(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___A323DB0813C4D072957BA6FDA79D9776674CD06B_16 = value;
	}

	inline static int32_t get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17)); }
	inline __StaticArrayInitTypeSizeU3D20_t1548391513  get_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17() const { return ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17; }
	inline __StaticArrayInitTypeSizeU3D20_t1548391513 * get_address_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17() { return &___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17; }
	inline void set_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17(__StaticArrayInitTypeSizeU3D20_t1548391513  value)
	{
		___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17 = value;
	}

	inline static int32_t get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18() const { return ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18() { return &___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18; }
	inline void set_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18 = value;
	}

	inline static int32_t get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837  get_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19() const { return ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837 * get_address_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19() { return &___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19; }
	inline void set_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19(__StaticArrayInitTypeSizeU3D64_t3517497837  value)
	{
		___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19 = value;
	}

	inline static int32_t get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392  get_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20() const { return ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392 * get_address_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20() { return &___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20; }
	inline void set_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20(__StaticArrayInitTypeSizeU3D32_t2711125392  value)
	{
		___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20 = value;
	}

	inline static int32_t get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___E75835D001C843F156FBA01B001DFE1B8029AC17_21)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837  get_E75835D001C843F156FBA01B001DFE1B8029AC17_21() const { return ___E75835D001C843F156FBA01B001DFE1B8029AC17_21; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497837 * get_address_of_E75835D001C843F156FBA01B001DFE1B8029AC17_21() { return &___E75835D001C843F156FBA01B001DFE1B8029AC17_21; }
	inline void set_E75835D001C843F156FBA01B001DFE1B8029AC17_21(__StaticArrayInitTypeSizeU3D64_t3517497837  value)
	{
		___E75835D001C843F156FBA01B001DFE1B8029AC17_21 = value;
	}

	inline static int32_t get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22)); }
	inline __StaticArrayInitTypeSizeU3D10_t1548194904  get_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22() const { return ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22; }
	inline __StaticArrayInitTypeSizeU3D10_t1548194904 * get_address_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22() { return &___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22; }
	inline void set_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22(__StaticArrayInitTypeSizeU3D10_t1548194904  value)
	{
		___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22 = value;
	}

	inline static int32_t get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23() const { return ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23() { return &___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23; }
	inline void set_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifndef SIGN_T3338384039_H
#define SIGN_T3338384039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t3338384039 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sign_t3338384039, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGN_T3338384039_H
#ifndef CONFIDENCEFACTOR_T2516000286_H
#define CONFIDENCEFACTOR_T2516000286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2516000286 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2516000286, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T2516000286_H
#ifndef RSAMANAGED_T1757093820_H
#define RSAMANAGED_T1757093820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t1757093820  : public RSA_t2385438082
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_4;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t2902905090 * ___d_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t2902905090 * ___p_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t2902905090 * ___q_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t2902905090 * ___dp_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t2902905090 * ___dq_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t2902905090 * ___qInv_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t2902905090 * ___n_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t2902905090 * ___e_12;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3064139578 * ___KeyGenerated_13;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_3() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___keypairGenerated_3)); }
	inline bool get_keypairGenerated_3() const { return ___keypairGenerated_3; }
	inline bool* get_address_of_keypairGenerated_3() { return &___keypairGenerated_3; }
	inline void set_keypairGenerated_3(bool value)
	{
		___keypairGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_disposed_4() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___m_disposed_4)); }
	inline bool get_m_disposed_4() const { return ___m_disposed_4; }
	inline bool* get_address_of_m_disposed_4() { return &___m_disposed_4; }
	inline void set_m_disposed_4(bool value)
	{
		___m_disposed_4 = value;
	}

	inline static int32_t get_offset_of_d_5() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___d_5)); }
	inline BigInteger_t2902905090 * get_d_5() const { return ___d_5; }
	inline BigInteger_t2902905090 ** get_address_of_d_5() { return &___d_5; }
	inline void set_d_5(BigInteger_t2902905090 * value)
	{
		___d_5 = value;
		Il2CppCodeGenWriteBarrier((&___d_5), value);
	}

	inline static int32_t get_offset_of_p_6() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___p_6)); }
	inline BigInteger_t2902905090 * get_p_6() const { return ___p_6; }
	inline BigInteger_t2902905090 ** get_address_of_p_6() { return &___p_6; }
	inline void set_p_6(BigInteger_t2902905090 * value)
	{
		___p_6 = value;
		Il2CppCodeGenWriteBarrier((&___p_6), value);
	}

	inline static int32_t get_offset_of_q_7() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___q_7)); }
	inline BigInteger_t2902905090 * get_q_7() const { return ___q_7; }
	inline BigInteger_t2902905090 ** get_address_of_q_7() { return &___q_7; }
	inline void set_q_7(BigInteger_t2902905090 * value)
	{
		___q_7 = value;
		Il2CppCodeGenWriteBarrier((&___q_7), value);
	}

	inline static int32_t get_offset_of_dp_8() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___dp_8)); }
	inline BigInteger_t2902905090 * get_dp_8() const { return ___dp_8; }
	inline BigInteger_t2902905090 ** get_address_of_dp_8() { return &___dp_8; }
	inline void set_dp_8(BigInteger_t2902905090 * value)
	{
		___dp_8 = value;
		Il2CppCodeGenWriteBarrier((&___dp_8), value);
	}

	inline static int32_t get_offset_of_dq_9() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___dq_9)); }
	inline BigInteger_t2902905090 * get_dq_9() const { return ___dq_9; }
	inline BigInteger_t2902905090 ** get_address_of_dq_9() { return &___dq_9; }
	inline void set_dq_9(BigInteger_t2902905090 * value)
	{
		___dq_9 = value;
		Il2CppCodeGenWriteBarrier((&___dq_9), value);
	}

	inline static int32_t get_offset_of_qInv_10() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___qInv_10)); }
	inline BigInteger_t2902905090 * get_qInv_10() const { return ___qInv_10; }
	inline BigInteger_t2902905090 ** get_address_of_qInv_10() { return &___qInv_10; }
	inline void set_qInv_10(BigInteger_t2902905090 * value)
	{
		___qInv_10 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_10), value);
	}

	inline static int32_t get_offset_of_n_11() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___n_11)); }
	inline BigInteger_t2902905090 * get_n_11() const { return ___n_11; }
	inline BigInteger_t2902905090 ** get_address_of_n_11() { return &___n_11; }
	inline void set_n_11(BigInteger_t2902905090 * value)
	{
		___n_11 = value;
		Il2CppCodeGenWriteBarrier((&___n_11), value);
	}

	inline static int32_t get_offset_of_e_12() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___e_12)); }
	inline BigInteger_t2902905090 * get_e_12() const { return ___e_12; }
	inline BigInteger_t2902905090 ** get_address_of_e_12() { return &___e_12; }
	inline void set_e_12(BigInteger_t2902905090 * value)
	{
		___e_12 = value;
		Il2CppCodeGenWriteBarrier((&___e_12), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_13() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___KeyGenerated_13)); }
	inline KeyGeneratedEventHandler_t3064139578 * get_KeyGenerated_13() const { return ___KeyGenerated_13; }
	inline KeyGeneratedEventHandler_t3064139578 ** get_address_of_KeyGenerated_13() { return &___KeyGenerated_13; }
	inline void set_KeyGenerated_13(KeyGeneratedEventHandler_t3064139578 * value)
	{
		___KeyGenerated_13 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T1757093820_H
#ifndef ALERTDESCRIPTION_T1176432216_H
#define ALERTDESCRIPTION_T1176432216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.AlertDescription
struct  AlertDescription_t1176432216 
{
public:
	// System.Byte Mono.Security.Interface.AlertDescription::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlertDescription_t1176432216, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTDESCRIPTION_T1176432216_H
#ifndef ALERTLEVEL_T886784433_H
#define ALERTLEVEL_T886784433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.AlertLevel
struct  AlertLevel_t886784433 
{
public:
	// System.Byte Mono.Security.Interface.AlertLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlertLevel_t886784433, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTLEVEL_T886784433_H
#ifndef CIPHERSUITECODE_T732562211_H
#define CIPHERSUITECODE_T732562211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.CipherSuiteCode
struct  CipherSuiteCode_t732562211 
{
public:
	// System.UInt16 Mono.Security.Interface.CipherSuiteCode::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherSuiteCode_t732562211, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITECODE_T732562211_H
#ifndef MONOSSLPOLICYERRORS_T2590217945_H
#define MONOSSLPOLICYERRORS_T2590217945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoSslPolicyErrors
struct  MonoSslPolicyErrors_t2590217945 
{
public:
	// System.Int32 Mono.Security.Interface.MonoSslPolicyErrors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonoSslPolicyErrors_t2590217945, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOSSLPOLICYERRORS_T2590217945_H
#ifndef TLSPROTOCOLS_T3756552591_H
#define TLSPROTOCOLS_T3756552591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.TlsProtocols
struct  TlsProtocols_t3756552591 
{
public:
	// System.Int32 Mono.Security.Interface.TlsProtocols::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TlsProtocols_t3756552591, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSPROTOCOLS_T3756552591_H
#ifndef X509CERTIFICATE_T489243025_H
#define X509CERTIFICATE_T489243025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t489243025  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t2114160833 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t4116647657* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t3738529785  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t3738529785  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t2114160833 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t4116647657* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t2114160833 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t4116647657* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t4116647657* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t4116647657* ___m_signaturealgoparams_13;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t2385438082 * ____rsa_14;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t2386879874 * ____dsa_15;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_16;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t4116647657* ___serialnumber_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t4116647657* ___issuerUniqueID_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t4116647657* ___subjectUniqueID_19;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t609554709 * ___extensions_20;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___decoder_0)); }
	inline ASN1_t2114160833 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t2114160833 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t2114160833 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t4116647657* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t4116647657* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_from_2)); }
	inline DateTime_t3738529785  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t3738529785 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t3738529785  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_until_3)); }
	inline DateTime_t3738529785  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t3738529785 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t3738529785  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___issuer_4)); }
	inline ASN1_t2114160833 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t2114160833 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t2114160833 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t4116647657* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t4116647657* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___subject_8)); }
	inline ASN1_t2114160833 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t2114160833 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t2114160833 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_publickey_10)); }
	inline ByteU5BU5D_t4116647657* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t4116647657* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___signature_11)); }
	inline ByteU5BU5D_t4116647657* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t4116647657* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t4116647657* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t4116647657* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of__rsa_14() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ____rsa_14)); }
	inline RSA_t2385438082 * get__rsa_14() const { return ____rsa_14; }
	inline RSA_t2385438082 ** get_address_of__rsa_14() { return &____rsa_14; }
	inline void set__rsa_14(RSA_t2385438082 * value)
	{
		____rsa_14 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_14), value);
	}

	inline static int32_t get_offset_of__dsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ____dsa_15)); }
	inline DSA_t2386879874 * get__dsa_15() const { return ____dsa_15; }
	inline DSA_t2386879874 ** get_address_of__dsa_15() { return &____dsa_15; }
	inline void set__dsa_15(DSA_t2386879874 * value)
	{
		____dsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_15), value);
	}

	inline static int32_t get_offset_of_version_16() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___version_16)); }
	inline int32_t get_version_16() const { return ___version_16; }
	inline int32_t* get_address_of_version_16() { return &___version_16; }
	inline void set_version_16(int32_t value)
	{
		___version_16 = value;
	}

	inline static int32_t get_offset_of_serialnumber_17() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___serialnumber_17)); }
	inline ByteU5BU5D_t4116647657* get_serialnumber_17() const { return ___serialnumber_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_serialnumber_17() { return &___serialnumber_17; }
	inline void set_serialnumber_17(ByteU5BU5D_t4116647657* value)
	{
		___serialnumber_17 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_17), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_18() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___issuerUniqueID_18)); }
	inline ByteU5BU5D_t4116647657* get_issuerUniqueID_18() const { return ___issuerUniqueID_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_issuerUniqueID_18() { return &___issuerUniqueID_18; }
	inline void set_issuerUniqueID_18(ByteU5BU5D_t4116647657* value)
	{
		___issuerUniqueID_18 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_18), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___subjectUniqueID_19)); }
	inline ByteU5BU5D_t4116647657* get_subjectUniqueID_19() const { return ___subjectUniqueID_19; }
	inline ByteU5BU5D_t4116647657** get_address_of_subjectUniqueID_19() { return &___subjectUniqueID_19; }
	inline void set_subjectUniqueID_19(ByteU5BU5D_t4116647657* value)
	{
		___subjectUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_19), value);
	}

	inline static int32_t get_offset_of_extensions_20() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___extensions_20)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_20() const { return ___extensions_20; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_20() { return &___extensions_20; }
	inline void set_extensions_20(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_20 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_20), value);
	}
};

struct X509Certificate_t489243025_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_21;

public:
	inline static int32_t get_offset_of_encoding_error_21() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___encoding_error_21)); }
	inline String_t* get_encoding_error_21() const { return ___encoding_error_21; }
	inline String_t** get_address_of_encoding_error_21() { return &___encoding_error_21; }
	inline void set_encoding_error_21(String_t* value)
	{
		___encoding_error_21 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T489243025_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef NULLABLE_1_T1166124571_H
#define NULLABLE_1_T1166124571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t1166124571 
{
public:
	// T System.Nullable`1::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1166124571_H
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T84635067_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T2546806710_H
#ifndef SYMMETRICTRANSFORM_T3802591842_H
#define SYMMETRICTRANSFORM_T3802591842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591842  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591842_H
#ifndef ALERT_T1480305158_H
#define ALERT_T1480305158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.Alert
struct  Alert_t1480305158  : public RuntimeObject
{
public:
	// Mono.Security.Interface.AlertLevel Mono.Security.Interface.Alert::level
	uint8_t ___level_0;
	// Mono.Security.Interface.AlertDescription Mono.Security.Interface.Alert::description
	uint8_t ___description_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(Alert_t1480305158, ___level_0)); }
	inline uint8_t get_level_0() const { return ___level_0; }
	inline uint8_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(uint8_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Alert_t1480305158, ___description_1)); }
	inline uint8_t get_description_1() const { return ___description_1; }
	inline uint8_t* get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(uint8_t value)
	{
		___description_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERT_T1480305158_H
#ifndef MONOTLSCONNECTIONINFO_T1391984550_H
#define MONOTLSCONNECTIONINFO_T1391984550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsConnectionInfo
struct  MonoTlsConnectionInfo_t1391984550  : public RuntimeObject
{
public:
	// Mono.Security.Interface.CipherSuiteCode Mono.Security.Interface.MonoTlsConnectionInfo::<CipherSuiteCode>k__BackingField
	uint16_t ___U3CCipherSuiteCodeU3Ek__BackingField_0;
	// Mono.Security.Interface.TlsProtocols Mono.Security.Interface.MonoTlsConnectionInfo::<ProtocolVersion>k__BackingField
	int32_t ___U3CProtocolVersionU3Ek__BackingField_1;
	// System.String Mono.Security.Interface.MonoTlsConnectionInfo::<PeerDomainName>k__BackingField
	String_t* ___U3CPeerDomainNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCipherSuiteCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoTlsConnectionInfo_t1391984550, ___U3CCipherSuiteCodeU3Ek__BackingField_0)); }
	inline uint16_t get_U3CCipherSuiteCodeU3Ek__BackingField_0() const { return ___U3CCipherSuiteCodeU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CCipherSuiteCodeU3Ek__BackingField_0() { return &___U3CCipherSuiteCodeU3Ek__BackingField_0; }
	inline void set_U3CCipherSuiteCodeU3Ek__BackingField_0(uint16_t value)
	{
		___U3CCipherSuiteCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CProtocolVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MonoTlsConnectionInfo_t1391984550, ___U3CProtocolVersionU3Ek__BackingField_1)); }
	inline int32_t get_U3CProtocolVersionU3Ek__BackingField_1() const { return ___U3CProtocolVersionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CProtocolVersionU3Ek__BackingField_1() { return &___U3CProtocolVersionU3Ek__BackingField_1; }
	inline void set_U3CProtocolVersionU3Ek__BackingField_1(int32_t value)
	{
		___U3CProtocolVersionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPeerDomainNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MonoTlsConnectionInfo_t1391984550, ___U3CPeerDomainNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CPeerDomainNameU3Ek__BackingField_2() const { return ___U3CPeerDomainNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPeerDomainNameU3Ek__BackingField_2() { return &___U3CPeerDomainNameU3Ek__BackingField_2; }
	inline void set_U3CPeerDomainNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CPeerDomainNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPeerDomainNameU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSCONNECTIONINFO_T1391984550_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef NULLABLE_1_T17812731_H
#define NULLABLE_1_T17812731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors>
struct  Nullable_1_t17812731 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t17812731, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t17812731, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T17812731_H
#ifndef NULLABLE_1_T1184147377_H
#define NULLABLE_1_T1184147377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Mono.Security.Interface.TlsProtocols>
struct  Nullable_1_t1184147377 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1184147377, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1184147377, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1184147377_H
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_2)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_2), value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
#ifndef PRIMALITYTEST_T1539325944_H
#define PRIMALITYTEST_T1539325944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t1539325944  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T1539325944_H
#ifndef KEYGENERATEDEVENTHANDLER_T3064139578_H
#define KEYGENERATEDEVENTHANDLER_T3064139578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3064139578  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3064139578_H
#ifndef MONOLOCALCERTIFICATESELECTIONCALLBACK_T1375878923_H
#define MONOLOCALCERTIFICATESELECTIONCALLBACK_T1375878923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct  MonoLocalCertificateSelectionCallback_t1375878923  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOLOCALCERTIFICATESELECTIONCALLBACK_T1375878923_H
#ifndef MONOREMOTECERTIFICATEVALIDATIONCALLBACK_T2521872312_H
#define MONOREMOTECERTIFICATEVALIDATIONCALLBACK_T2521872312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct  MonoRemoteCertificateValidationCallback_t2521872312  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOREMOTECERTIFICATEVALIDATIONCALLBACK_T2521872312_H
#ifndef MONOTLSSETTINGS_T3666008581_H
#define MONOTLSSETTINGS_T3666008581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsSettings
struct  MonoTlsSettings_t3666008581  : public RuntimeObject
{
public:
	// Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Security.Interface.MonoTlsSettings::<RemoteCertificateValidationCallback>k__BackingField
	MonoRemoteCertificateValidationCallback_t2521872312 * ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0;
	// Mono.Security.Interface.MonoLocalCertificateSelectionCallback Mono.Security.Interface.MonoTlsSettings::<ClientCertificateSelectionCallback>k__BackingField
	MonoLocalCertificateSelectionCallback_t1375878923 * ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> Mono.Security.Interface.MonoTlsSettings::<CertificateValidationTime>k__BackingField
	Nullable_1_t1166124571  ___U3CCertificateValidationTimeU3Ek__BackingField_2;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Interface.MonoTlsSettings::<TrustAnchors>k__BackingField
	X509CertificateCollection_t3399372417 * ___U3CTrustAnchorsU3Ek__BackingField_3;
	// System.Object Mono.Security.Interface.MonoTlsSettings::<UserSettings>k__BackingField
	RuntimeObject * ___U3CUserSettingsU3Ek__BackingField_4;
	// System.String[] Mono.Security.Interface.MonoTlsSettings::<CertificateSearchPaths>k__BackingField
	StringU5BU5D_t1281789340* ___U3CCertificateSearchPathsU3Ek__BackingField_5;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::<SendCloseNotify>k__BackingField
	bool ___U3CSendCloseNotifyU3Ek__BackingField_6;
	// System.Nullable`1<Mono.Security.Interface.TlsProtocols> Mono.Security.Interface.MonoTlsSettings::<EnabledProtocols>k__BackingField
	Nullable_1_t1184147377  ___U3CEnabledProtocolsU3Ek__BackingField_7;
	// Mono.Security.Interface.CipherSuiteCode[] Mono.Security.Interface.MonoTlsSettings::<EnabledCiphers>k__BackingField
	CipherSuiteCodeU5BU5D_t3566916850* ___U3CEnabledCiphersU3Ek__BackingField_8;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::cloned
	bool ___cloned_9;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertName
	bool ___checkCertName_10;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_11;
	// System.Nullable`1<System.Boolean> Mono.Security.Interface.MonoTlsSettings::useServicePointManagerCallback
	Nullable_1_t1819850047  ___useServicePointManagerCallback_12;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::skipSystemValidators
	bool ___skipSystemValidators_13;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::callbackNeedsChain
	bool ___callbackNeedsChain_14;
	// Mono.Security.Interface.ICertificateValidator Mono.Security.Interface.MonoTlsSettings::certificateValidator
	RuntimeObject* ___certificateValidator_15;

public:
	inline static int32_t get_offset_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0)); }
	inline MonoRemoteCertificateValidationCallback_t2521872312 * get_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0() const { return ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0; }
	inline MonoRemoteCertificateValidationCallback_t2521872312 ** get_address_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0() { return &___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0; }
	inline void set_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0(MonoRemoteCertificateValidationCallback_t2521872312 * value)
	{
		___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1)); }
	inline MonoLocalCertificateSelectionCallback_t1375878923 * get_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1() const { return ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1; }
	inline MonoLocalCertificateSelectionCallback_t1375878923 ** get_address_of_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1() { return &___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1; }
	inline void set_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1(MonoLocalCertificateSelectionCallback_t1375878923 * value)
	{
		___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CCertificateValidationTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CCertificateValidationTimeU3Ek__BackingField_2)); }
	inline Nullable_1_t1166124571  get_U3CCertificateValidationTimeU3Ek__BackingField_2() const { return ___U3CCertificateValidationTimeU3Ek__BackingField_2; }
	inline Nullable_1_t1166124571 * get_address_of_U3CCertificateValidationTimeU3Ek__BackingField_2() { return &___U3CCertificateValidationTimeU3Ek__BackingField_2; }
	inline void set_U3CCertificateValidationTimeU3Ek__BackingField_2(Nullable_1_t1166124571  value)
	{
		___U3CCertificateValidationTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTrustAnchorsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CTrustAnchorsU3Ek__BackingField_3)); }
	inline X509CertificateCollection_t3399372417 * get_U3CTrustAnchorsU3Ek__BackingField_3() const { return ___U3CTrustAnchorsU3Ek__BackingField_3; }
	inline X509CertificateCollection_t3399372417 ** get_address_of_U3CTrustAnchorsU3Ek__BackingField_3() { return &___U3CTrustAnchorsU3Ek__BackingField_3; }
	inline void set_U3CTrustAnchorsU3Ek__BackingField_3(X509CertificateCollection_t3399372417 * value)
	{
		___U3CTrustAnchorsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrustAnchorsU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CUserSettingsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CUserSettingsU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CUserSettingsU3Ek__BackingField_4() const { return ___U3CUserSettingsU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CUserSettingsU3Ek__BackingField_4() { return &___U3CUserSettingsU3Ek__BackingField_4; }
	inline void set_U3CUserSettingsU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CUserSettingsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserSettingsU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CCertificateSearchPathsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CCertificateSearchPathsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t1281789340* get_U3CCertificateSearchPathsU3Ek__BackingField_5() const { return ___U3CCertificateSearchPathsU3Ek__BackingField_5; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CCertificateSearchPathsU3Ek__BackingField_5() { return &___U3CCertificateSearchPathsU3Ek__BackingField_5; }
	inline void set_U3CCertificateSearchPathsU3Ek__BackingField_5(StringU5BU5D_t1281789340* value)
	{
		___U3CCertificateSearchPathsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCertificateSearchPathsU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CSendCloseNotifyU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CSendCloseNotifyU3Ek__BackingField_6)); }
	inline bool get_U3CSendCloseNotifyU3Ek__BackingField_6() const { return ___U3CSendCloseNotifyU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSendCloseNotifyU3Ek__BackingField_6() { return &___U3CSendCloseNotifyU3Ek__BackingField_6; }
	inline void set_U3CSendCloseNotifyU3Ek__BackingField_6(bool value)
	{
		___U3CSendCloseNotifyU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledProtocolsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CEnabledProtocolsU3Ek__BackingField_7)); }
	inline Nullable_1_t1184147377  get_U3CEnabledProtocolsU3Ek__BackingField_7() const { return ___U3CEnabledProtocolsU3Ek__BackingField_7; }
	inline Nullable_1_t1184147377 * get_address_of_U3CEnabledProtocolsU3Ek__BackingField_7() { return &___U3CEnabledProtocolsU3Ek__BackingField_7; }
	inline void set_U3CEnabledProtocolsU3Ek__BackingField_7(Nullable_1_t1184147377  value)
	{
		___U3CEnabledProtocolsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledCiphersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CEnabledCiphersU3Ek__BackingField_8)); }
	inline CipherSuiteCodeU5BU5D_t3566916850* get_U3CEnabledCiphersU3Ek__BackingField_8() const { return ___U3CEnabledCiphersU3Ek__BackingField_8; }
	inline CipherSuiteCodeU5BU5D_t3566916850** get_address_of_U3CEnabledCiphersU3Ek__BackingField_8() { return &___U3CEnabledCiphersU3Ek__BackingField_8; }
	inline void set_U3CEnabledCiphersU3Ek__BackingField_8(CipherSuiteCodeU5BU5D_t3566916850* value)
	{
		___U3CEnabledCiphersU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEnabledCiphersU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_cloned_9() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___cloned_9)); }
	inline bool get_cloned_9() const { return ___cloned_9; }
	inline bool* get_address_of_cloned_9() { return &___cloned_9; }
	inline void set_cloned_9(bool value)
	{
		___cloned_9 = value;
	}

	inline static int32_t get_offset_of_checkCertName_10() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___checkCertName_10)); }
	inline bool get_checkCertName_10() const { return ___checkCertName_10; }
	inline bool* get_address_of_checkCertName_10() { return &___checkCertName_10; }
	inline void set_checkCertName_10(bool value)
	{
		___checkCertName_10 = value;
	}

	inline static int32_t get_offset_of_checkCertRevocationStatus_11() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___checkCertRevocationStatus_11)); }
	inline bool get_checkCertRevocationStatus_11() const { return ___checkCertRevocationStatus_11; }
	inline bool* get_address_of_checkCertRevocationStatus_11() { return &___checkCertRevocationStatus_11; }
	inline void set_checkCertRevocationStatus_11(bool value)
	{
		___checkCertRevocationStatus_11 = value;
	}

	inline static int32_t get_offset_of_useServicePointManagerCallback_12() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___useServicePointManagerCallback_12)); }
	inline Nullable_1_t1819850047  get_useServicePointManagerCallback_12() const { return ___useServicePointManagerCallback_12; }
	inline Nullable_1_t1819850047 * get_address_of_useServicePointManagerCallback_12() { return &___useServicePointManagerCallback_12; }
	inline void set_useServicePointManagerCallback_12(Nullable_1_t1819850047  value)
	{
		___useServicePointManagerCallback_12 = value;
	}

	inline static int32_t get_offset_of_skipSystemValidators_13() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___skipSystemValidators_13)); }
	inline bool get_skipSystemValidators_13() const { return ___skipSystemValidators_13; }
	inline bool* get_address_of_skipSystemValidators_13() { return &___skipSystemValidators_13; }
	inline void set_skipSystemValidators_13(bool value)
	{
		___skipSystemValidators_13 = value;
	}

	inline static int32_t get_offset_of_callbackNeedsChain_14() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___callbackNeedsChain_14)); }
	inline bool get_callbackNeedsChain_14() const { return ___callbackNeedsChain_14; }
	inline bool* get_address_of_callbackNeedsChain_14() { return &___callbackNeedsChain_14; }
	inline void set_callbackNeedsChain_14(bool value)
	{
		___callbackNeedsChain_14 = value;
	}

	inline static int32_t get_offset_of_certificateValidator_15() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___certificateValidator_15)); }
	inline RuntimeObject* get_certificateValidator_15() const { return ___certificateValidator_15; }
	inline RuntimeObject** get_address_of_certificateValidator_15() { return &___certificateValidator_15; }
	inline void set_certificateValidator_15(RuntimeObject* value)
	{
		___certificateValidator_15 = value;
		Il2CppCodeGenWriteBarrier((&___certificateValidator_15), value);
	}
};

struct MonoTlsSettings_t3666008581_StaticFields
{
public:
	// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::defaultSettings
	MonoTlsSettings_t3666008581 * ___defaultSettings_16;

public:
	inline static int32_t get_offset_of_defaultSettings_16() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581_StaticFields, ___defaultSettings_16)); }
	inline MonoTlsSettings_t3666008581 * get_defaultSettings_16() const { return ___defaultSettings_16; }
	inline MonoTlsSettings_t3666008581 ** get_address_of_defaultSettings_16() { return &___defaultSettings_16; }
	inline void set_defaultSettings_16(MonoTlsSettings_t3666008581 * value)
	{
		___defaultSettings_16 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSettings_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSSETTINGS_T3666008581_H
#ifndef VALIDATIONRESULT_T2074029760_H
#define VALIDATIONRESULT_T2074029760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.ValidationResult
struct  ValidationResult_t2074029760  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Interface.ValidationResult::trusted
	bool ___trusted_0;
	// System.Boolean Mono.Security.Interface.ValidationResult::user_denied
	bool ___user_denied_1;
	// System.Int32 Mono.Security.Interface.ValidationResult::error_code
	int32_t ___error_code_2;
	// System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors> Mono.Security.Interface.ValidationResult::policy_errors
	Nullable_1_t17812731  ___policy_errors_3;

public:
	inline static int32_t get_offset_of_trusted_0() { return static_cast<int32_t>(offsetof(ValidationResult_t2074029760, ___trusted_0)); }
	inline bool get_trusted_0() const { return ___trusted_0; }
	inline bool* get_address_of_trusted_0() { return &___trusted_0; }
	inline void set_trusted_0(bool value)
	{
		___trusted_0 = value;
	}

	inline static int32_t get_offset_of_user_denied_1() { return static_cast<int32_t>(offsetof(ValidationResult_t2074029760, ___user_denied_1)); }
	inline bool get_user_denied_1() const { return ___user_denied_1; }
	inline bool* get_address_of_user_denied_1() { return &___user_denied_1; }
	inline void set_user_denied_1(bool value)
	{
		___user_denied_1 = value;
	}

	inline static int32_t get_offset_of_error_code_2() { return static_cast<int32_t>(offsetof(ValidationResult_t2074029760, ___error_code_2)); }
	inline int32_t get_error_code_2() const { return ___error_code_2; }
	inline int32_t* get_address_of_error_code_2() { return &___error_code_2; }
	inline void set_error_code_2(int32_t value)
	{
		___error_code_2 = value;
	}

	inline static int32_t get_offset_of_policy_errors_3() { return static_cast<int32_t>(offsetof(ValidationResult_t2074029760, ___policy_errors_3)); }
	inline Nullable_1_t17812731  get_policy_errors_3() const { return ___policy_errors_3; }
	inline Nullable_1_t17812731 * get_address_of_policy_errors_3() { return &___policy_errors_3; }
	inline void set_policy_errors_3(Nullable_1_t17812731  value)
	{
		___policy_errors_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONRESULT_T2074029760_H
#ifndef AES_T1218282760_H
#define AES_T1218282760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1218282760  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct Aes_t1218282760_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Aes_t1218282760_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Aes_t1218282760_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1218282760_H
#ifndef AESTRANSFORM_T2957123611_H
#define AESTRANSFORM_T2957123611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t2957123611  : public SymmetricTransform_t3802591842
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t2770800703* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___expandedKey_12)); }
	inline UInt32U5BU5D_t2770800703* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t2770800703** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t2770800703* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t2957123611_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t2770800703* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t4116647657* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t4116647657* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t2770800703* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t2770800703* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t2770800703* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t2770800703* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t2770800703* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t2770800703* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t2770800703* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t2770800703* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t2770800703* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t2770800703* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t4116647657* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t4116647657* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t4116647657* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t4116647657* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t2770800703* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t2770800703* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t2770800703* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t2770800703* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t2770800703* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t2770800703* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t2770800703* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t2770800703* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t2770800703* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t2770800703* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t2770800703* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t2770800703* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t2770800703* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t2770800703* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t2770800703* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t2770800703* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T2957123611_H
#ifndef AESCRYPTOSERVICEPROVIDER_T345478893_H
#define AESCRYPTOSERVICEPROVIDER_T345478893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesCryptoServiceProvider
struct  AesCryptoServiceProvider_t345478893  : public Aes_t1218282760
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESCRYPTOSERVICEPROVIDER_T345478893_H
#ifndef AESMANAGED_T1129950597_H
#define AESMANAGED_T1129950597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t1129950597  : public Aes_t1218282760
{
public:
	// System.Security.Cryptography.RijndaelManaged System.Security.Cryptography.AesManaged::m_rijndael
	RijndaelManaged_t3586970409 * ___m_rijndael_11;

public:
	inline static int32_t get_offset_of_m_rijndael_11() { return static_cast<int32_t>(offsetof(AesManaged_t1129950597, ___m_rijndael_11)); }
	inline RijndaelManaged_t3586970409 * get_m_rijndael_11() const { return ___m_rijndael_11; }
	inline RijndaelManaged_t3586970409 ** get_address_of_m_rijndael_11() { return &___m_rijndael_11; }
	inline void set_m_rijndael_11(RijndaelManaged_t3586970409 * value)
	{
		___m_rijndael_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_rijndael_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T1129950597_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2900 = { sizeof (BitConverterLE_t2108532979), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2901 = { sizeof (PKCS7_t1860834339), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2902 = { sizeof (ContentInfo_t3218159896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2902[2] = 
{
	ContentInfo_t3218159896::get_offset_of_contentType_0(),
	ContentInfo_t3218159896::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2903 = { sizeof (EncryptedData_t3577548733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2903[4] = 
{
	EncryptedData_t3577548733::get_offset_of__version_0(),
	EncryptedData_t3577548733::get_offset_of__content_1(),
	EncryptedData_t3577548733::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t3577548733::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2904 = { sizeof (SafeBag_t3961248200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2904[2] = 
{
	SafeBag_t3961248200::get_offset_of__bagOID_0(),
	SafeBag_t3961248200::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2905 = { sizeof (PKCS12_t4101533061), -1, sizeof(PKCS12_t4101533061_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2905[11] = 
{
	PKCS12_t4101533061::get_offset_of__password_0(),
	PKCS12_t4101533061::get_offset_of__keyBags_1(),
	PKCS12_t4101533061::get_offset_of__secretBags_2(),
	PKCS12_t4101533061::get_offset_of__certs_3(),
	PKCS12_t4101533061::get_offset_of__keyBagsChanged_4(),
	PKCS12_t4101533061::get_offset_of__secretBagsChanged_5(),
	PKCS12_t4101533061::get_offset_of__certsChanged_6(),
	PKCS12_t4101533061::get_offset_of__iterations_7(),
	PKCS12_t4101533061::get_offset_of__safeBags_8(),
	PKCS12_t4101533061::get_offset_of__rng_9(),
	PKCS12_t4101533061_StaticFields::get_offset_of_password_max_length_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2906 = { sizeof (DeriveBytes_t1492915136), -1, sizeof(DeriveBytes_t1492915136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2906[7] = 
{
	DeriveBytes_t1492915136_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t1492915136_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t1492915136_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t1492915136::get_offset_of__hashName_3(),
	DeriveBytes_t1492915136::get_offset_of__iterations_4(),
	DeriveBytes_t1492915136::get_offset_of__password_5(),
	DeriveBytes_t1492915136::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2907 = { sizeof (X501_t1758824426), -1, sizeof(X501_t1758824426_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2907[15] = 
{
	X501_t1758824426_StaticFields::get_offset_of_countryName_0(),
	X501_t1758824426_StaticFields::get_offset_of_organizationName_1(),
	X501_t1758824426_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t1758824426_StaticFields::get_offset_of_commonName_3(),
	X501_t1758824426_StaticFields::get_offset_of_localityName_4(),
	X501_t1758824426_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t1758824426_StaticFields::get_offset_of_streetAddress_6(),
	X501_t1758824426_StaticFields::get_offset_of_domainComponent_7(),
	X501_t1758824426_StaticFields::get_offset_of_userid_8(),
	X501_t1758824426_StaticFields::get_offset_of_email_9(),
	X501_t1758824426_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t1758824426_StaticFields::get_offset_of_title_11(),
	X501_t1758824426_StaticFields::get_offset_of_surname_12(),
	X501_t1758824426_StaticFields::get_offset_of_givenName_13(),
	X501_t1758824426_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2908 = { sizeof (X509Certificate_t489243025), -1, sizeof(X509Certificate_t489243025_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2908[22] = 
{
	X509Certificate_t489243025::get_offset_of_decoder_0(),
	X509Certificate_t489243025::get_offset_of_m_encodedcert_1(),
	X509Certificate_t489243025::get_offset_of_m_from_2(),
	X509Certificate_t489243025::get_offset_of_m_until_3(),
	X509Certificate_t489243025::get_offset_of_issuer_4(),
	X509Certificate_t489243025::get_offset_of_m_issuername_5(),
	X509Certificate_t489243025::get_offset_of_m_keyalgo_6(),
	X509Certificate_t489243025::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t489243025::get_offset_of_subject_8(),
	X509Certificate_t489243025::get_offset_of_m_subject_9(),
	X509Certificate_t489243025::get_offset_of_m_publickey_10(),
	X509Certificate_t489243025::get_offset_of_signature_11(),
	X509Certificate_t489243025::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t489243025::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t489243025::get_offset_of__rsa_14(),
	X509Certificate_t489243025::get_offset_of__dsa_15(),
	X509Certificate_t489243025::get_offset_of_version_16(),
	X509Certificate_t489243025::get_offset_of_serialnumber_17(),
	X509Certificate_t489243025::get_offset_of_issuerUniqueID_18(),
	X509Certificate_t489243025::get_offset_of_subjectUniqueID_19(),
	X509Certificate_t489243025::get_offset_of_extensions_20(),
	X509Certificate_t489243025_StaticFields::get_offset_of_encoding_error_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2909 = { sizeof (X509CertificateCollection_t1542168550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2910 = { sizeof (X509CertificateEnumerator_t3515934698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2910[1] = 
{
	X509CertificateEnumerator_t3515934698::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2911 = { sizeof (X509Extension_t3173393653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2911[3] = 
{
	X509Extension_t3173393653::get_offset_of_extnOid_0(),
	X509Extension_t3173393653::get_offset_of_extnCritical_1(),
	X509Extension_t3173393653::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2912 = { sizeof (X509ExtensionCollection_t609554709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2912[1] = 
{
	X509ExtensionCollection_t609554709::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2913 = { sizeof (AlertLevel_t886784433)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2913[3] = 
{
	AlertLevel_t886784433::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2914 = { sizeof (AlertDescription_t1176432216)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2914[26] = 
{
	AlertDescription_t1176432216::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2915 = { sizeof (Alert_t1480305158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2915[2] = 
{
	Alert_t1480305158::get_offset_of_level_0(),
	Alert_t1480305158::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2916 = { sizeof (ValidationResult_t2074029760), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2916[4] = 
{
	ValidationResult_t2074029760::get_offset_of_trusted_0(),
	ValidationResult_t2074029760::get_offset_of_user_denied_1(),
	ValidationResult_t2074029760::get_offset_of_error_code_2(),
	ValidationResult_t2074029760::get_offset_of_policy_errors_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2917 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2918 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2919 = { sizeof (CertificateValidationHelper_t2276302545), -1, sizeof(CertificateValidationHelper_t2276302545_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2919[2] = 
{
	CertificateValidationHelper_t2276302545_StaticFields::get_offset_of_noX509Chain_0(),
	CertificateValidationHelper_t2276302545_StaticFields::get_offset_of_supportsTrustAnchors_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2920 = { sizeof (CipherSuiteCode_t732562211)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2920[267] = 
{
	CipherSuiteCode_t732562211::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2921 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2922 = { sizeof (MonoTlsConnectionInfo_t1391984550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2922[3] = 
{
	MonoTlsConnectionInfo_t1391984550::get_offset_of_U3CCipherSuiteCodeU3Ek__BackingField_0(),
	MonoTlsConnectionInfo_t1391984550::get_offset_of_U3CProtocolVersionU3Ek__BackingField_1(),
	MonoTlsConnectionInfo_t1391984550::get_offset_of_U3CPeerDomainNameU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2923 = { sizeof (MonoSslPolicyErrors_t2590217945)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2923[5] = 
{
	MonoSslPolicyErrors_t2590217945::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2924 = { sizeof (MonoRemoteCertificateValidationCallback_t2521872312), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2925 = { sizeof (MonoLocalCertificateSelectionCallback_t1375878923), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2926 = { sizeof (MonoTlsProvider_t3152003291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2927 = { sizeof (MonoTlsSettings_t3666008581), -1, sizeof(MonoTlsSettings_t3666008581_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2927[17] = 
{
	MonoTlsSettings_t3666008581::get_offset_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CCertificateValidationTimeU3Ek__BackingField_2(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CTrustAnchorsU3Ek__BackingField_3(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CUserSettingsU3Ek__BackingField_4(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CCertificateSearchPathsU3Ek__BackingField_5(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CSendCloseNotifyU3Ek__BackingField_6(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CEnabledProtocolsU3Ek__BackingField_7(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CEnabledCiphersU3Ek__BackingField_8(),
	MonoTlsSettings_t3666008581::get_offset_of_cloned_9(),
	MonoTlsSettings_t3666008581::get_offset_of_checkCertName_10(),
	MonoTlsSettings_t3666008581::get_offset_of_checkCertRevocationStatus_11(),
	MonoTlsSettings_t3666008581::get_offset_of_useServicePointManagerCallback_12(),
	MonoTlsSettings_t3666008581::get_offset_of_skipSystemValidators_13(),
	MonoTlsSettings_t3666008581::get_offset_of_callbackNeedsChain_14(),
	MonoTlsSettings_t3666008581::get_offset_of_certificateValidator_15(),
	MonoTlsSettings_t3666008581_StaticFields::get_offset_of_defaultSettings_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2928 = { sizeof (TlsException_t3204531704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2928[1] = 
{
	TlsException_t3204531704::get_offset_of_alert_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2929 = { sizeof (TlsProtocols_t3756552591)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2929[13] = 
{
	TlsProtocols_t3756552591::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2930 = { sizeof (CryptoConvert_t610933157), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2931 = { sizeof (PKCS1_t1505584677), -1, sizeof(PKCS1_t1505584677_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2931[4] = 
{
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2932 = { sizeof (PKCS8_t696280613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2933 = { sizeof (PrivateKeyInfo_t668027993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2933[4] = 
{
	PrivateKeyInfo_t668027993::get_offset_of__version_0(),
	PrivateKeyInfo_t668027993::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t668027993::get_offset_of__key_2(),
	PrivateKeyInfo_t668027993::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2934 = { sizeof (EncryptedPrivateKeyInfo_t862116836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2934[4] = 
{
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2935 = { sizeof (RSAManaged_t1757093820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2935[12] = 
{
	RSAManaged_t1757093820::get_offset_of_isCRTpossible_2(),
	RSAManaged_t1757093820::get_offset_of_keypairGenerated_3(),
	RSAManaged_t1757093820::get_offset_of_m_disposed_4(),
	RSAManaged_t1757093820::get_offset_of_d_5(),
	RSAManaged_t1757093820::get_offset_of_p_6(),
	RSAManaged_t1757093820::get_offset_of_q_7(),
	RSAManaged_t1757093820::get_offset_of_dp_8(),
	RSAManaged_t1757093820::get_offset_of_dq_9(),
	RSAManaged_t1757093820::get_offset_of_qInv_10(),
	RSAManaged_t1757093820::get_offset_of_n_11(),
	RSAManaged_t1757093820::get_offset_of_e_12(),
	RSAManaged_t1757093820::get_offset_of_KeyGenerated_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2936 = { sizeof (KeyGeneratedEventHandler_t3064139578), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2937 = { sizeof (BigInteger_t2902905090), -1, sizeof(BigInteger_t2902905090_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2937[4] = 
{
	BigInteger_t2902905090::get_offset_of_length_0(),
	BigInteger_t2902905090::get_offset_of_data_1(),
	BigInteger_t2902905090_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t2902905090_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2938 = { sizeof (Sign_t3338384039)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2938[4] = 
{
	Sign_t3338384039::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2939 = { sizeof (ModulusRing_t596511505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2939[2] = 
{
	ModulusRing_t596511505::get_offset_of_mod_0(),
	ModulusRing_t596511505::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2940 = { sizeof (Kernel_t1402667220), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2941 = { sizeof (ConfidenceFactor_t2516000286)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2941[7] = 
{
	ConfidenceFactor_t2516000286::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2942 = { sizeof (PrimalityTest_t1539325944), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2943 = { sizeof (PrimalityTests_t1538473976), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2944 = { sizeof (PrimeGeneratorBase_t446028867), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2945 = { sizeof (SequentialSearchPrimeGeneratorBase_t2996090509), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2946 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255365), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2946[24] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_0(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_1(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_2(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_3(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_4(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_5(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_6(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_7(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_8(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_9(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_10(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_11(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_12(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_13(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_14(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_15(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_16(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_17(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_18(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_19(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_20(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_21(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_22(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2947 = { sizeof (__StaticArrayInitTypeSizeU3D3_t3217885684)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3_t3217885684 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2948 = { sizeof (__StaticArrayInitTypeSizeU3D9_t3218278900)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D9_t3218278900 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2949 = { sizeof (__StaticArrayInitTypeSizeU3D10_t1548194904)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D10_t1548194904 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2950 = { sizeof (__StaticArrayInitTypeSizeU3D14_t3517563373)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D14_t3517563373 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2951 = { sizeof (__StaticArrayInitTypeSizeU3D20_t1548391513)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D20_t1548391513 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2952 = { sizeof (__StaticArrayInitTypeSizeU3D32_t2711125392)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t2711125392 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2953 = { sizeof (__StaticArrayInitTypeSizeU3D48_t1904228656)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D48_t1904228656 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2954 = { sizeof (__StaticArrayInitTypeSizeU3D64_t3517497837)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D64_t3517497837 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2955 = { sizeof (__StaticArrayInitTypeSizeU3D3132_t3825993976)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3132_t3825993976 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2956 = { sizeof (U3CModuleU3E_t692745530), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2957 = { sizeof (SR_t167583546), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2958 = { sizeof (AesManaged_t1129950597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2958[1] = 
{
	AesManaged_t1129950597::get_offset_of_m_rijndael_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2959 = { sizeof (AesCryptoServiceProvider_t345478893), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2960 = { sizeof (AesTransform_t2957123611), -1, sizeof(AesTransform_t2957123611_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2960[14] = 
{
	AesTransform_t2957123611::get_offset_of_expandedKey_12(),
	AesTransform_t2957123611::get_offset_of_Nk_13(),
	AesTransform_t2957123611::get_offset_of_Nr_14(),
	AesTransform_t2957123611_StaticFields::get_offset_of_Rcon_15(),
	AesTransform_t2957123611_StaticFields::get_offset_of_SBox_16(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iSBox_17(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T0_18(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T1_19(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T2_20(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T3_21(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT0_22(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT1_23(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT2_24(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT3_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2961 = { sizeof (Error_t2882114465), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2962 = { sizeof (Enumerable_t538148348), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2963 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2963[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2964 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2964[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2965 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2965[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2966 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2966[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2967 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2967[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2968 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2968[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2969 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2969[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2970 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2970[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2971 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2971[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2972 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2972[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2973 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2973[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2974 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2974[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2975 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2975[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2976 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2976[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2977 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2977[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2978 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2978[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2979 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2979[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2980 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2981 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2981[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2982 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2982[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2983 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2983[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2984 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2985 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2985[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2986 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2986[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2987 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2988 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2988[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2989 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2990 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2991 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2991[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2992 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2992[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2993 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2993[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2994 = { sizeof (Utilities_t3288484762), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2995 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2995[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2996 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2996[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2997 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2997[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2998 = { sizeof (EnumerableHelpers_t3229093989), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2999 = { sizeof (CopyPosition_t2993389481)+ sizeof (RuntimeObject), sizeof(CopyPosition_t2993389481 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2999[2] = 
{
	CopyPosition_t2993389481::get_offset_of_U3CRowU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CopyPosition_t2993389481::get_offset_of_U3CColumnU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
