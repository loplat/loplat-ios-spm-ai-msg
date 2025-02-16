#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 6.0 effective-5.10 (swiftlang-6.0.0.9.10 clang-1600.0.26.2)
#ifndef MINIPLENGI_SWIFT_H
#define MINIPLENGI_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MiniPlengi",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;
@class NSCoder;

/// <code>PlengiResponse</code> 로부터 인식된 Loplat X 광고 정보를 저장하는 객체입니다.
/// important:
/// 해당 객체는 무조건 <code>responsePlaceEvent</code> delegate 로부터 전달받은 <code>plengiResponse</code> 안 <code>advertisement</code> 객체만을 사용해야합니다.
SWIFT_CLASS("_TtC10MiniPlengi13Advertisement")
@interface Advertisement : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Nonnull alarm;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable body;
@property (nonatomic, copy) NSString * _Nonnull img;
@property (nonatomic) NSInteger campaign_id;
@property (nonatomic) NSInteger delay;
@property (nonatomic, copy) NSString * _Nonnull delay_type;
@property (nonatomic, copy) NSString * _Nonnull intent;
@property (nonatomic) NSInteger msg_id;
@property (nonatomic, copy) NSString * _Nonnull target_pkg;
@property (nonatomic, copy) NSString * _Nonnull client_code;
@property (nonatomic) NSInteger fcm_token_id;
@property (nonatomic, copy) NSString * _Nonnull ad_type;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// <code>PlengiResponse</code> 로부터 인식된 상권의 결과값을 저장하는 객체입니다.
/// important:
/// 해당 객체는 무조건 <code>responsePlaceEvent</code> delegate 로부터 전달받은 <code>plengiResponse</code> 안 <code>area</code> 객체만을 사용해야합니다.
SWIFT_CLASS("_TtC10MiniPlengi4Area")
@interface Area : NSObject <NSCoding>
@property (nonatomic) NSInteger id;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull tag;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




/// <code>PlengiResponse</code> 로부터 인식된 복합몰의 결과값을 저장하는 객체입니다.
/// important:
/// 해당 객체는 무조건 <code>responsePlaceEvent</code> delegate 로부터 전달받은 <code>plengiResponse</code> 안 <code>complex</code> 객체만을 사용해야합니다.
SWIFT_CLASS("_TtC10MiniPlengi7Complex")
@interface Complex : NSObject <NSCoding>
@property (nonatomic) NSInteger id;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull branch_name;
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic, copy) NSString * _Nonnull category_code;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// <code>PlengiResponse</code> 로부터 인식된 행정구역의 결과값을 저장하는 객체입니다.
/// important:
/// 해당 객체는 무조건 <code>responsePlaceEvent</code> delegate 로부터 전달받은 <code>plengiResponse</code> 안 <code>district</code> 객체만을 사용해야합니다.
SWIFT_CLASS("_TtC10MiniPlengi8District")
@interface District : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Nonnull lv0_code;
@property (nonatomic, copy) NSString * _Nonnull lv1_name;
@property (nonatomic, copy) NSString * _Nonnull lv2_name;
@property (nonatomic, copy) NSString * _Nonnull lv3_name;
@property (nonatomic, copy) NSString * _Nonnull lv1_code;
@property (nonatomic, copy) NSString * _Nonnull lv2_code;
@property (nonatomic, copy) NSString * _Nonnull lv3_code;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, EngineStatus, open) {
  EngineStatusSTOPPED = 0,
  EngineStatusSTARTED = 1,
};


SWIFT_CLASS("_TtC10MiniPlengi5Fence")
@interface Fence : NSObject <NSCoding>
@property (nonatomic) NSInteger gfid;
@property (nonatomic) double dist;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull client_code;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// <code>PlengiResponse</code> 로부터 인식된 Geofence의 결과값을 저장하는 객체입니다.
/// important:
/// 해당 객체는 무조건 <code>responsePlaceEvent</code> delegate 로부터 전달받은 <code>plengiResponse</code> 안 <code>geofence</code> 객체만을 사용해야합니다.
SWIFT_CLASS("_TtC10MiniPlengi8Geofence")
@interface Geofence : NSObject <NSCoding>
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic, copy) NSArray<Fence *> * _Nonnull fences;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// <code>PlengiResponse</code> 로부터 인식된 기기의 위경도 결과값을 저장하는 객체입니다.
/// important:
/// 해당 객체는 무조건 <code>responsePlaceEvent</code> delegate 로부터 전달받은 <code>plengiResponse</code> 안 <code>location</code> 객체만을 사용해야합니다.
SWIFT_CLASS("_TtC10MiniPlengi8Location")
@interface Location : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Nonnull provider;
@property (nonatomic) NSInteger floor;
@property (nonatomic) int64_t time;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) double accuracy;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// <code>PlengiResponse</code> 로부터 인식된 nearby의 결과값을 저장하는 객체입니다.
/// important:
/// 해당 객체는 무조건 <code>responsePlaceEvent</code> delegate 로부터 전달받은 <code>plengiResponse</code> 안 <code>nearby</code> 객체만을 사용해야합니다.
SWIFT_CLASS("_TtC10MiniPlengi7Nearbys")
@interface Nearbys : NSObject <NSCoding>
@property (nonatomic) NSInteger loplat_id;
@property (nonatomic, copy) NSString * _Nonnull placename;
@property (nonatomic, copy) NSString * _Nonnull tags;
@property (nonatomic) NSInteger floor;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) double accuracy;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// <code>PlengiResponse</code> 로부터 인식된 장소의 결과값을 저장하는 객체입니다.
/// important:
/// 해당 객체는 무조건 <code>responsePlaceEvent</code> delegate 로부터 전달받은 <code>plengiResponse</code> 안 <code>place</code> 객체만을 사용해야합니다.
SWIFT_CLASS("_TtC10MiniPlengi5Place")
@interface Place : NSObject <NSCoding>
@property (nonatomic) NSInteger loplat_id;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull tags;
@property (nonatomic) NSInteger distance;
@property (nonatomic) NSInteger floor;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) double accuracy;
@property (nonatomic) double threshold;
@property (nonatomic, copy) NSString * _Nonnull client_code;
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic, copy) NSString * _Nonnull category_code;
@property (nonatomic, copy) NSString * _Nonnull address;
@property (nonatomic, copy) NSString * _Nonnull address_road;
@property (nonatomic, copy) NSString * _Nonnull post;
@property (nonatomic, copy) NSString * _Nonnull pnu;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class PlengiResponse;

/// 위치 결과를 받는 프로토콜입니다.
SWIFT_PROTOCOL("_TtP10MiniPlengi13PlaceDelegate_")
@protocol PlaceDelegate
/// 장소에 대한 LEAVE, ENTER에 대한 이벤트가 트리거됩니다.
/// \param plengiResponse 이벤트 결과를 담은 객체입니다. 자세한 사항은 https://developers.loplat.com 을 참고 해주세요.
///
- (void)responsePlaceEvent:(PlengiResponse * _Nonnull)plengiResponse;
@optional
/// manual 장소인식 요청시에 실시간 process 이벤트가 전달됩니다. (TEST 모드에서만 사용 / Optional)
/// \param msg 실시간 process 이벤트 메시지
///
- (void)responseManualProcess:(NSString * _Nonnull)msg;
@end

typedef SWIFT_ENUM(NSInteger, PlaceEvent, open) {
  PlaceEventNOT_AVAILABLE = 0,
  PlaceEventENTER = 1,
  PlaceEventLEAVE = 2,
  PlaceEventNEARBY = 3,
};

@class CLLocationManager;

/// 로플랫 SDK (이하 Plengi)는 실내위치를 판별하고, 해당 장소에 들어옴, 나감에 대한 이벤트를 트래킹할 수 있으며, 이러한 정보를 통해 마케팅을 할 수 있는 SDK 입니다.
/// 자세한 SDK 사용방법은 https://developers.loplat.com 을 참조하세요.
SWIFT_CLASS("_TtC10MiniPlengi6Plengi")
@interface Plengi : NSObject <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
- (void)locationManagerDidChangeAuthorization:(CLLocationManager * _Nonnull)manager SWIFT_AVAILABILITY(ios,introduced=14.0);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface Plengi (SWIFT_EXTENSION(MiniPlengi))
/// 발급받은 FCM 토큰을 기기와 로플랫 서버에 저장합니다.
/// 토큰을 처음 발급받거나 새로 발급받는 상황에서만 저장합니다.
/// \param fcmToken 발급받은 FCM 토큰
///
+ (void)registerFcmWithFcmToken:(NSString * _Nullable)fcmToken;
@end

@class UNUserNotificationCenter;
@class UNNotificationResponse;
enum Result : NSInteger;
@class UIApplication;
@class UILocalNotification;

@interface Plengi (SWIFT_EXTENSION(MiniPlengi))
/// iOS 10 이상부터 광고에 대한 클릭 이벤트를 처리합니다. AppDelegate에서 필수로 불려야만 합니다.
/// 성공한 경우 PlengiResponse.Result.SUCCESS / 문제가 발생했을 경우에는 PlengiResponse.Result.FAILED가 반환됩니다.
/// \param center AppDelegate에 UNNotificationHandler에 있는 UNNotificationCenter 객체
///
/// \param response AppDelegate에 UNNotificationHandler에 있는 UNNotificationResponse 객체
///
/// \param completionHandler AppDelegate에 UNNotificationHandler에 있는 Handler 객체
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)processLoplatAdvertisement:(UNUserNotificationCenter * _Nonnull)center didReceive:(UNNotificationResponse * _Nonnull)response withCompletionHandler:(void (^ _Nonnull)(void))completionHandler SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
/// iOS 9 에서 광고에 대한 클릭 이벤트를 처리합니다. AppDelegate에서 필수로 불려야만 합니다.
/// 성공한 경우 PlengiResponse.Result.SUCCESS / 문제가 발생했을 경우에는 PlengiResponse.Result.FAILED가 반환됩니다.
/// \param application AppDelegate에 UILocalNotification 이벤트 함수의 application 객체
///
/// \param identifier AppDelegate에 UILocalNotification 이벤트 함수의 idenfier 문자열
///
/// \param notification AppDelegate에 UILocalNotification 이벤트 함수의 notification 객체
///
/// \param completionHandler AppDelegate에 UILocalNotification 이벤트 함수의 completionHandler 객체
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)processLoplatAdvertisement:(UIApplication * _Nonnull)application handleActionWithIdentifier:(NSString * _Nullable)identifier for:(UILocalNotification * _Nonnull)notification completionHandler:(void (^ _Nonnull)(void))completionHandler SWIFT_WARN_UNUSED_RESULT;
/// iOS 9 에서 앱이 종료되어 있을 때, 광고알림이 올 경우에 대한 클릭 이벤트를 처리합니다.
/// 성공한 경우 PlengiResponse.Result.SUCCESS / 문제가 발생했을 경우에는 PlengiResponse.Result.FAILED가 반환됩니다.
/// \param application AppDelegate에 application_didFinishlaunchingWithOptions 이벤트 함수의 application 객체
///
/// \param launchOptions AppDelegate에 application_didFinishlaunchingWithOptions 이벤트 함수의 launchOptions 객체
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)processLoplatAdvertisement:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions SWIFT_WARN_UNUSED_RESULT;
@end


@interface Plengi (SWIFT_EXTENSION(MiniPlengi))
/// 수동으로 현재 위치를 인식하도록 요청합니다.
/// 성공한 경우 PlengiResponse.Result.SUCCESS / 문제가 발생했을 경우에는 PlengiResponse.Result.FAILED가 반환됩니다.
/// warning:
/// 테스트 용도로만 사용하셔야 합니다. 테스트를 위해 포그라운드 상태에서만 작동됩니다. !!! 메인 쓰레드에서만 사용가능합니다.
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)manual_refreshPlace_foreground SWIFT_WARN_UNUSED_RESULT;
/// 수동으로 현재 위치를 인식하도록 요청합니다. (IP Location)
/// 성공한 경우 PlengiResponse.Result.SUCCESS / 문제가 발생했을 경우에는 PlengiResponse.Result.FAILED가 반환됩니다.
/// warning:
/// 테스트 용도로만 사용하셔야 합니다. 테스트를 위해 포그라운드 상태에서만 작동됩니다. !!! 메인 쓰레드에서만 사용가능합니다.
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)manual_refreshPlace_ip_location SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=9.0);
@end


@interface Plengi (SWIFT_EXTENSION(MiniPlengi))
/// 가장 최근에 인식되었을 떄의 행정구역과, 기기 위경도 인식 정보를 반환합니다.
/// 성공한 경우 PlengiResponse.Result.SUCCESS / 움직임이 없거나 일정 시간(초기 로딩시간 2~3분)이 흐르지 않은 경우 위치인식 하지 못하여 대기 중인 경우에는 .PENDING을 반환합니다.
/// \param completion 응답 받을 핸들러 객체
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)getCurrentLocationInfoWithCompletion:(void (^ _Nonnull)(PlengiResponse * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
@end


@interface Plengi (SWIFT_EXTENSION(MiniPlengi))
/// MiniPlengi의 delegate을 반환합니다.
///
/// returns:
/// PlaceDelegate: 연결된 delegate가 없으면 nil을 반환
+ (id <PlaceDelegate> _Nullable)getDelegate SWIFT_WARN_UNUSED_RESULT;
/// MiniPlengi의 delegate을 설정합니다.
/// 성공: PlengiResponse.Result.SUCCESS, 실패: PlengiResponse.Result.FAIL 값 리턴
/// \param delegate nil을 전달하면 delegate 기존연결이 해제됩니다.
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)setDelegate:(id <PlaceDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
/// MiniPlengi의 EngineStatus를 반환합니다.
/// EngineStatus.STARTED 또는 EngineStatus.STOPPED 값을 반환
///
/// returns:
/// EngineStatus값
+ (enum EngineStatus)getEngineStatus SWIFT_WARN_UNUSED_RESULT;
/// loplat Gravity 광고알림 서비스 사용 여부
///
/// returns:
/// Boolen: Gravity 서비스를 사용할 경우 true, 사용하지 않을 경우에는 false
+ (BOOL)isEnabledAdNetwork SWIFT_WARN_UNUSED_RESULT;
/// loplat Gravity 광고알림을 사용할지 여부를 설정합니다.
/// 성공: PlengiResponse.Result.SUCCESS, 실패: PlengiResponse.Result.FAIL 값 리턴
/// \param enableAd Gravity 서비스를 사용할 경우 true, 사용하지 않을 경우에는 false
///
/// \param enableNoti Gravity 알림을 받으시려면 true, responsePlaceEvent에 Advertisement 객체로 받으시려면 false
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)enableAdNetwork:(BOOL)enableAd enableNoti:(BOOL)enableNoti SWIFT_WARN_UNUSED_RESULT;
@end


@interface Plengi (SWIFT_EXTENSION(MiniPlengi))
/// loplat SDK를 초기화합니다. SDK를 사용하기 위해서는 필수로 호출되어야만 합니다.
/// Deprecated:
/// 해당 API는 Swift 5 대응으로 인해 로플랫 SDK 버전 1.3.2 에서 Deprecated 되었습니다.
/// 대신 <code>Plengi.initialize</code> API를 사용해주세요.
/// \param client_id 로플랫에서 발급받은 클라이언트 아이디
///
/// \param client_secret 로플랫에서 발급받은 클라이언트 시크릿키
///
/// \param echo_code 통신에 사용하는 사용자 지정 코드
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)initWithClientID:(NSString * _Nonnull)ID clientSecret:(NSString * _Nonnull)secret echoCode:(NSString * _Nullable)echoCode SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_MSG("This method will be deprecated loplat SDK v1.3.2\nPlease consider using `Plengi.initialize()` API instead.`");
/// loplat SDK echo ocde를 세팅합니다.
/// 성공: PlengiResponse.Result.SUCCESS, 실패: PlengiResponse.Result.FAIL 값 리턴
/// \param client_id 로플랫에서 발급받은 클라이언트 아이디
///
/// \param client_secret 로플랫에서 발급받은 클라이언트 시크릿키
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)setEchoCodeWithEchoCode:(NSString * _Nullable)echoCode SWIFT_WARN_UNUSED_RESULT;
/// loplat SDK를 초기화합니다. SDK를 사용하기 위해서는 필수로 호출되어야만 합니다.
/// warning:
/// 반드시 AppDelegate에서만 호출하여야합니다.
/// \param client_id 로플랫에서 발급받은 클라이언트 아이디
///
/// \param client_secret 로플랫에서 발급받은 클라이언트 시크릿키
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)initializeWithClientID:(NSString * _Nonnull)ID clientSecret:(NSString * _Nonnull)secret SWIFT_WARN_UNUSED_RESULT;
+ (void)setBrazeUserIDWithUserID:(NSString * _Nonnull)userID;
/// MiniPlengi 사용을 중지합니다.
/// 정지가 성공하면 PlengiResponse.Result.SUCCESS, 실패하면 PlengiResponse.Result.FAIL이 반환
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)stop SWIFT_WARN_UNUSED_RESULT;
/// loplat SDK를 시작합니다.
/// 성공: PlengiResponse.Result.SUCCESS, 실패: PlengiResponse.Result.FAIL 값 리턴
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)start SWIFT_WARN_UNUSED_RESULT;
/// loplat SDK를 시작합니다.
/// 이 기능은 로플랫과 협의가 되야 사용 가능합니다. 그렇지 않다면 start()와 동일하게 사용됩니다.
/// 성공: PlengiResponse.Result.SUCCESS, 실패: PlengiResponse.Result.FAIL 값 리턴
/// \param interval 주기 (최소는 90초)
///
///
/// returns:
/// PlengiResponse.Result: PlengiResponse 객체의 Result
+ (enum Result)start:(NSInteger)interval SWIFT_WARN_UNUSED_RESULT;
/// engine 값이 있다면 SUCCESS, 없다면 NOT_INITIALIZED
+ (enum Result)isEngineInitialized SWIFT_WARN_UNUSED_RESULT;
/// 위치 권한을 요청합니다.
/// 위치 권한은 iOS 버전별로 요청 시나리오가 상이합니다.
/// <ul>
///   <li>
///     iOS 12이하 - Foreground에서 ‘항상’ 권한을 요청합니다.
///   </li>
///   <li>
///     iOS 13.0이상 iOS 13.3.1 이하 - Foreground에서 ‘앱 사용 중’ 권한을 요청합니다. 이후, Background에서 ‘항상’ 권한을 요청합니다.
///   </li>
///   <li>
///     iOS 13.4이상 - Foreground에서 ‘앱 사용 중’ 권한을 요청하여 유저가 요청을 승인하면 즉시, ‘항상’ 권한을 요청합니다.
///   </li>
/// </ul>
+ (void)requestAlwaysLocationAuthorization;
/// 추적 권한을 요청합니다.
/// iOS 14.5부터 IDFA(광고아이디)를 사용하기 위하여 유저가 권한을 부여해야 합니다.
+ (void)requestTrackingAuthorizationWithCompletion:(void (^ _Nonnull)(void))completion;
/// SDK의 버전을 전달합니다.
///
/// returns:
/// String형태의 SDK의 버전정보
+ (NSString * _Nullable)getSdkVersion SWIFT_WARN_UNUSED_RESULT;
@end

enum ResponseType : NSInteger;

/// 장소 인식 결과 값을 전달하는 PlengiResponse 객체
SWIFT_CLASS("_TtC10MiniPlengi14PlengiResponse")
@interface PlengiResponse : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Nullable echoCode;
@property (nonatomic, copy) NSString * _Nullable errorReason;
@property (nonatomic) enum Result result;
@property (nonatomic) enum ResponseType type;
@property (nonatomic) enum PlaceEvent placeEvent;
@property (nonatomic, strong) Place * _Nullable place;
@property (nonatomic, strong) Area * _Nullable area;
@property (nonatomic, strong) Complex * _Nullable complex;
@property (nonatomic, strong) Geofence * _Nullable geofence;
@property (nonatomic, copy) NSArray<Nearbys *> * _Nullable nearbys;
@property (nonatomic, strong) District * _Nullable district;
@property (nonatomic, strong) Advertisement * _Nullable advertisement;
@property (nonatomic, strong) Location * _Nullable location;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


typedef SWIFT_ENUM(NSInteger, ResponseType, open) {
  ResponseTypeUNKNOWN = 0,
  ResponseTypePLACE = 1,
  ResponseTypePLACE_EVENT = 2,
  ResponseTypeIP_LOC_EVENT = 4,
  ResponseTypeLOGGING = 5,
};

typedef SWIFT_ENUM(NSInteger, Result, open) {
  ResultSUCCESS = 0,
  ResultFAIL = -1,
  ResultPENDING = -2,
  ResultNETWORK_FAIL = -3,
  ResultERROR_CLOUD_ACCESS = -4,
  ResultFAIL_INTERNET_UNAVAILABLE = -5,
  ResultFAIL_WIFI_SCAN_UNAVAILABLE = -6,
  ResultNOT_SUPPORTED_OS_VERSION = -7,
  ResultALREADY_STARTED = -8,
  ResultNOT_INITIALIZED = -9,
};

typedef SWIFT_ENUM(NSInteger, TestModeStatus, open) {
  TestModeStatusRELEASE_SERVER = 0,
  TestModeStatusHALF_STAGING_SERVER = 1,
  TestModeStatusFULL_STAGING_SERVER = 2,
};






#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
