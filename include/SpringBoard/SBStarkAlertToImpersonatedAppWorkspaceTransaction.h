/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkAlertToAppWorkspaceTransaction.h>

@class SBAlert, SBWorkspaceAlert;

@interface SBStarkAlertToImpersonatedAppWorkspaceTransaction : SBStarkAlertToAppWorkspaceTransaction {

	SBAlert* _fromAlert;
	SBWorkspaceAlert* _toAlert;

}
-(id)initWithTransitionRequest:(id)arg1 ;
-(id)_effectiveTopEntity;
-(void)_beginAnimation;
-(void)_activateAlert;
-(void)_alertDidDeactivate;
-(void)dealloc;
-(id)debugDescription;
@end

