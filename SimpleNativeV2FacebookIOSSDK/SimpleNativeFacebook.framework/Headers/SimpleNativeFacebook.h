//
//  SimpleNativeFacebook.h
//  SimpleNativeFacebook
//
//  Created by qus on 2022/3/10.
//

#import <Foundation/Foundation.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <SimpleNativeBase/SimpleNativeBase.h>
#import <SimpleNativeUserPayment/LoginServices.h>

@interface FacebookLogin<ILogin>: NSObject
@property ClientLoginParamsSuccess success;
@property CallbackFail fail;

+(instancetype)sharedInstance;

@end

@interface FacebookAppDelegate<SimpleSDKAppDelegateProtocol>: NSObject
@end

@interface FacebookThirdUploadLogger<ThirdUploadLoggerProtocol>:NSObject
@property FBSDKAccessToken * accessToken;
+(instancetype)sharedInstance;

-(void) initTokenWithProID:(NSString *)proID token:(NSString *) clientToken;

@end

//! Project version number for SimpleNativeFacebook.
FOUNDATION_EXPORT double SimpleNativeFacebookVersionNumber;

//! Project version string for SimpleNativeFacebook.
FOUNDATION_EXPORT const unsigned char SimpleNativeFacebookVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SimpleNativeFacebook/PublicHeader.h>


