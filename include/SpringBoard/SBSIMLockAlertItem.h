/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBSIMLockAlertItem : SBAlertItem {

	long long _status;
	long long _okButtonIndex;
	long long _unlockButtonIndex;

}
+(id)alertTitleForStatus:(long long)arg1 ;
+(id)alertTitleForStatus:(long long)arg1 languageCode:(id)arg2 ;
-(void)_resetButtonIndexes;
-(BOOL)canUnlock;
-(id)alertTitleForLanguageCode:(id)arg1 ;
-(id)alertTextForLanguageCode:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)unlock;
-(long long)status;
-(id)initWithStatus:(long long)arg1 ;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)allowInSetup;
-(BOOL)pendInSetupIfNotAllowed;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)forcesModalAlertAppearance;
@end

