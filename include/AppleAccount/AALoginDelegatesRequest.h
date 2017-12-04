/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, ACAccount;

@interface AALoginDelegatesRequest : AARequest {

	NSDictionary* _loginParameters;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)urlString;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 ;
-(id)urlRequest;
@end

