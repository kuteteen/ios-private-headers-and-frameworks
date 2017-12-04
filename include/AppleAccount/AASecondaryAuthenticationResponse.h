/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSString, NSData;

@interface AASecondaryAuthenticationResponse : AAResponse {

	NSString* _secondFactorToken;
	NSData* _buddyML;

}

@property (nonatomic,readonly) NSString * secondFactorToken;              //@synthesize secondFactorToken=_secondFactorToken - In the implementation block
@property (nonatomic,readonly) NSData * buddyML;                          //@synthesize buddyML=_buddyML - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)secondFactorToken;
-(NSData *)buddyML;
@end

