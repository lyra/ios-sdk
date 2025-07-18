#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef LYRAPAYMENTSDK_SWIFT_H
#define LYRAPAYMENTSDK_SWIFT_H
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
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
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

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="LyraPaymentSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class UIView;

/// Can be <code>UIView</code> or <code>UIBarButtonItem</code>.
SWIFT_PROTOCOL("_TtP14LyraPaymentSDK10AnchorView_")
@protocol AnchorView
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end


@class UILabel;
@class NSString;
@class NSCoder;

SWIFT_CLASS("_TtC14LyraPaymentSDK12DropDownCell")
@interface DropDownCell : UITableViewCell
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified optionLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface DropDownCell (SWIFT_EXTENSION(LyraPaymentSDK))
- (void)awakeFromNib;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
@end

@class UIColor;
@class UIFont;

/// A Material Design drop down in replacement for <code>UIPickerView</code>.
SWIFT_CLASS("_TtC14LyraPaymentSDK10DropDownKH")
@interface DropDownKH : UIView
@property (nonatomic) CGFloat cellHeight;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
/// The background color of the selected cell in the drop down.
/// Changing the background color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull selectionBackgroundColor;
/// The separator color between cells.
/// Changing the separator color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull separatorColor;
/// The corner radius of DropDown.
/// Changing the corner radius automatically reloads the drop down.
@property (nonatomic) CGFloat cornerRadius;
/// Alias method for <code>cornerRadius</code> variable to avoid ambiguity.
- (void)setupCornerRadius:(CGFloat)radius;
/// The masked corners of DropDown.
/// Changing the masked corners automatically reloads the drop down.
- (void)setupMaskedCorners:(CACornerMask)cornerMask SWIFT_AVAILABILITY(ios,introduced=11.0);
/// The offset of the shadow.
/// Changing the shadow color automatically reloads the drop down.
@property (nonatomic) CGSize shadowOffset;
/// The opacity of the shadow.
/// Changing the shadow opacity automatically reloads the drop down.
@property (nonatomic) float shadowOpacity;
/// The radius of the shadow.
/// Changing the shadow radius automatically reloads the drop down.
@property (nonatomic) CGFloat shadowRadius;
/// The duration of the show/hide animation.
@property (nonatomic) double animationduration;
/// The color of the text for each cells of the drop down.
/// Changing the text color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/// The color of the text for selected cells of the drop down.
/// Changing the text color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull selectedTextColor;
/// The font of the text for each cells of the drop down.
/// Changing the text font automatically reloads the drop down.
@property (nonatomic, strong) UIFont * _Nullable textFont;
/// Creates a new instance of a drop down.
/// Don’t forget to setup the <code>dataSource</code>,
/// the <code>anchorView</code> and the <code>selectionAction</code>
/// at least before calling <code>show()</code>.
- (nonnull instancetype)init;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



@class UIEvent;

@interface DropDownKH (SWIFT_EXTENSION(LyraPaymentSDK))
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end


@interface DropDownKH (SWIFT_EXTENSION(LyraPaymentSDK))
/// Starts listening to keyboard events.
/// Allows the drop down to display correctly when keyboard is showed.
+ (void)startListeningToKeyboard;
@end

@class UITableView;
@class NSIndexPath;

@interface DropDownKH (SWIFT_EXTENSION(LyraPaymentSDK)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)_ numberOfRowsInSection:(NSInteger)_ SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)_ willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class NSDictionary;

@interface DropDownKH (SWIFT_EXTENSION(LyraPaymentSDK))
/// An Objective-C alias for the show() method which converts the returned tuple into an NSDictionary.
///
/// returns:
/// An NSDictionary with a value for the “canBeDisplayed” Bool, and possibly for the “offScreenHeight” Optional(CGFloat).
- (NSDictionary * _Nonnull)show SWIFT_WARN_UNUSED_RESULT;
- (BOOL)accessibilityPerformEscape SWIFT_WARN_UNUSED_RESULT;
@end


@interface DropDownKH (SWIFT_EXTENSION(LyraPaymentSDK))
- (void)updateConstraints;
- (void)layoutSubviews;
@end


@interface DropDownKH (SWIFT_EXTENSION(LyraPaymentSDK))
- (void)selectRow:(NSInteger)index scrollPosition:(enum UITableViewScrollPosition)scrollPosition;
- (void)clearSelection;
- (void)deselectRow:(NSInteger)index;
@property (nonatomic, readonly, strong) NSIndexPath * _Nullable indexPathForSelectedRow;
@end

@class UIViewController;
@class LyraResponse;
@class LyraError;

SWIFT_CLASS("_TtC14LyraPaymentSDK4Lyra")
@interface Lyra : NSObject
/// Initializes the SDK with the value of publicKey. This function must be invoked before trying to launch a payment/register-card process from the SDK.
/// \param publicKey Key for VAD access (available in merchant BO: Settings->Shop->REST API Keys)
///
/// \param options SDK configuration options
///
///
/// throws:
/// Throws a NSError using LyraSdkError class, if the public key or the api server name have an incorrect value.
+ (BOOL)initialize:(NSString * _Nonnull)publicKey :(NSDictionary<NSString *, id> * _Nonnull)options error:(NSError * _Nullable * _Nullable)error;
/// Use this method to get the sdk version number
///
/// returns:
/// A String value corresponding to the version number of the sdk
+ (NSString * _Nonnull)getSDKVersion SWIFT_WARN_UNUSED_RESULT;
/// Use this method to launch the payment/register card process.
/// The process to be started depends on the serverResponse passed as parameter
/// \param contextViewController Corresponds to the ViewController of the client application from which the payment process will be launched.
///
/// \param formToken The formToken defines the type of process to be triggered. A formToken with an amount of 0 will start a process of registering the card, otherwise a payment process will start.
///
/// \param onSuccess onSuccess Process callback
///
/// \param onError onError Process callback
///
///
/// throws:
/// Throws an NSError using the LyraSdkError class if the SDK was not previously initialized.
+ (BOOL)process:(UIViewController * _Nonnull)contextViewController :(NSString * _Nonnull)formToken onSuccess:(void (^ _Nonnull)(LyraResponse * _Nonnull))onSuccess onError:(void (^ _Nonnull)(LyraError * _Nonnull, LyraResponse * _Nullable))onError :(NSDictionary<NSString *, id> * _Nonnull)options error:(NSError * _Nullable * _Nullable)error;
/// Use this method for cancel Payment process
+ (void)cancelProcess;
/// Uses this method for get the formToken version supported by Lyra SDK
///
/// returns:
/// An Int value with the supported version of formToken
+ (NSInteger)getFormTokenVersion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Define an error built from a remote server error
SWIFT_CLASS("_TtC14LyraPaymentSDK9LyraError")
@interface LyraError : NSObject
@property (nonatomic, copy) NSString * _Nonnull errorCode;
@property (nonatomic, copy) NSString * _Nonnull errorMessage;
@property (nonatomic, copy) NSString * _Nonnull detailErrorCode;
@property (nonatomic, copy) NSString * _Nonnull detailErrorMessage;
@property (nonatomic) BOOL isTechnicalError;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Keys for sdk options configurations dictionary in initialize method
SWIFT_CLASS("_TtC14LyraPaymentSDK15LyraInitOptions")
@interface LyraInitOptions : NSObject
/// Key for sdk options dictionary. The expected value for this key in the  options dictionary is a String that represents the name of the theme file to be used for the customization of the SDK views. If not set, the default name PaymentSdkTheme is used to find the theme file.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull themeFileName;)
+ (NSString * _Nonnull)themeFileName SWIFT_WARN_UNUSED_RESULT;
/// Key for sdk options dictionary. The expected value for this key in the  options dictionary is a String that represents the REST API Server Name (available in merchant BO: Settings->Shop->REST API Keys)
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull apiServerName;)
+ (NSString * _Nonnull)apiServerName SWIFT_WARN_UNUSED_RESULT;
/// Key for sdk options  dictionary. The expected value for this key in the  options dictionary is a Boolean thats represents if the card scan functionality is enabled or not.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull cardScanningEnabled;)
+ (NSString * _Nonnull)cardScanningEnabled SWIFT_WARN_UNUSED_RESULT;
/// Key for sdk options  dictionary. The expected value for this key in the  options dictionary is a String thats represents the apple merchant identifier. Necessary for support Apple Pay functionality
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull applePayMerchantId;)
+ (NSString * _Nonnull)applePayMerchantId SWIFT_WARN_UNUSED_RESULT;
/// Key for sdk options  dictionary.; The expected value for this key in the options dictionary is a String thats represents  the person or company receiving payment.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull applePayMerchantName;)
+ (NSString * _Nonnull)applePayMerchantName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Define a local SDK error from an ErrorType
SWIFT_CLASS("_TtC14LyraPaymentSDK12LyraMobError")
@interface LyraMobError : LyraError
@end

typedef SWIFT_ENUM(NSInteger, LyraPaymentMethods, open) {
  LyraPaymentMethodsCardPayment = 0,
  LyraPaymentMethodsApplePay = 1,
  LyraPaymentMethodsAll = 2,
};


/// Keys for sdk options configurations dictionary in  process method
SWIFT_CLASS("_TtC14LyraPaymentSDK18LyraPaymentOptions")
@interface LyraPaymentOptions : NSObject
/// Key for sdk options  dictionary in process method. The expected value for this key in the options dictionary is a String thats represents the text for display  in PAY button.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull customPayButtonLabel;)
+ (NSString * _Nonnull)customPayButtonLabel SWIFT_WARN_UNUSED_RESULT;
/// Key for sdk options  dictionary in process method. The expected value for this key in the options dictionary is a String thats represents the text for display  in the header of Payment Form .
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull customHeaderLabel;)
+ (NSString * _Nonnull)customHeaderLabel SWIFT_WARN_UNUSED_RESULT;
/// Key for sdk options  dictionary in process method. The expected value for this key in the options dictionary is a String thats represents the text for display in loading popup  while payment is in process .
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull customPopupLabel;)
+ (NSString * _Nonnull)customPopupLabel SWIFT_WARN_UNUSED_RESULT;
/// Key for sdk options  dictionary in process method. The expected value for this key in the options dictionary is
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull paymentMethodType;)
+ (NSString * _Nonnull)paymentMethodType SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSData;

SWIFT_CLASS("_TtC14LyraPaymentSDK12LyraResponse")
@interface LyraResponse : NSObject
- (NSString * _Nonnull)getResponseDataString SWIFT_WARN_UNUSED_RESULT;
- (NSData * _Nonnull)getResponseData SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface UIBarButtonItem (SWIFT_EXTENSION(LyraPaymentSDK)) <AnchorView>
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end






@interface UITextField (SWIFT_EXTENSION(LyraPaymentSDK))
- (BOOL)canPerformAction:(SEL _Nonnull)action withSender:(id _Nullable)_ SWIFT_WARN_UNUSED_RESULT;
@end




@interface UIView (SWIFT_EXTENSION(LyraPaymentSDK)) <AnchorView>
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end


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
