/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>
#import <SpringBoard/SBLockOverlayViewDelegate.h>

@class SBLockOverlayView, SBAwayBulletinListItem, NSString;

@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {

	SBLockOverlayView* _bulletinView;
	BOOL _performedAction;
	SBAwayBulletinListItem* _bulletinItem;

}

@property (nonatomic,retain) SBAwayBulletinListItem * bulletinItem;              //@synthesize bulletinItem=_bulletinItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_lockScreenActionContext;
-(id)_dismissAction;
-(id)_snoozeAction;
-(void)lockButtonPressed:(id)arg1 ;
-(id)_titleForAlternateActionButton;
-(BOOL)handleVolumeButtonPressed;
-(BOOL)_hasSnoozeAction;
-(void)performSnoozeAction;
-(BOOL)_hasAlternateAction;
-(void)performAlternateAction;
-(void)performDismissAction;
-(id)_customTitleForAlternateActionButton;
-(id)_calculatedTitleForAlternateActionButton;
-(id)_alternateAction;
-(SBAwayBulletinListItem *)bulletinItem;
-(void)setBulletinItem:(SBAwayBulletinListItem *)arg1 ;
-(void)dealloc;
-(void)volumeChanged:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)handleTapGestureFromView:(id)arg1 ;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(id)slideToUnlockText;
-(BOOL)isPlayingSound;
-(void)performUnlockAction;
-(void)updateContent;
-(void)performAction:(id)arg1 ;
@end
