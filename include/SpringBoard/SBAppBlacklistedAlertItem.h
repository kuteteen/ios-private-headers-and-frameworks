/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UIAlertViewDelegate.h>

@class SBApplicationIcon, NSString;

@interface SBAppBlacklistedAlertItem : SBAlertItem <UIAlertViewDelegate> {

	SBApplicationIcon* _icon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIcon:(id)arg1 ;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

