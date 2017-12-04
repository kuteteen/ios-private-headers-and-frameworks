/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>

@class FBSynchronizedTransactionGroup, NSString;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBSynchronizedTransactionDelegate> {

	FBSynchronizedTransactionGroup* _synchronizedGroup;
	BOOL _notifiedSlaves;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)addSlaveTransaction:(id)arg1 ;
-(void)_notifySlavesIfNecessary;
-(void)_begin;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
@end

