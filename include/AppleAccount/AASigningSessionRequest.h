/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSData;

@interface AASigningSessionRequest : AARequest {

	NSData* _sessionInfoRequestData;

}
+(Class)responseClass;
-(id)initWithURLString:(id)arg1 sessionInfoRequestData:(id)arg2 ;
-(id)urlRequest;
@end
