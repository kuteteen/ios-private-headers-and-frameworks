/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>
#import <SpringBoard/SBRemoteAlertControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface SBRemoteAlertServer : FBSystemServiceFacility <SBRemoteAlertControllerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _tokenPortToToken;
	NSMutableDictionary* _tokenPortToControllerMap;
	NSMutableDictionary* _tokenPortToClientsMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_queue_addControllerWithConfiguration:(id)arg1 token:(id)arg2 forClient:(id)arg3 ;
-(void)_queue_notifyClients:(id)arg1 remoteAlertForToken:(id)arg2 didInvalidateWithReason:(long long)arg3 underlyingError:(id)arg4 ;
-(void)queue_remoteAlertController:(id)arg1 didInvalidateWithReason:(long long)arg2 underlyingError:(id)arg3 ;
-(void)queue_remoteAlertControllerDidChangeActivationState:(id)arg1 ;
-(void)dealloc;
-(id)_init;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
@end

