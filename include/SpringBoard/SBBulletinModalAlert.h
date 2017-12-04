/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class BBBulletin, NSArray;

@interface SBBulletinModalAlert : SBAlertItem {

	BBBulletin* _bulletin;
	NSArray* _buttons;
	NSArray* _bulletinButtonIndices;
	BOOL _playedSound;
	SBBulletinModalAlert* _superseded;
	NSArray* _actions;

}

@property (nonatomic,retain) NSArray * buttons;                            //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSArray * bulletinButtonIndices;              //@synthesize bulletinButtonIndices=_bulletinButtonIndices - In the implementation block
@property (nonatomic,retain) NSArray * actions;                            //@synthesize actions=_actions - In the implementation block
-(id)initWithBulletin:(id)arg1 supersededAlert:(id)arg2 ;
-(id)_actionForAlertViewButtonIndex:(long long)arg1 ;
-(void)_handleActionGroup:(id)arg1 ;
-(void)_handleAction:(id)arg1 atIndex:(long long)arg2 ;
-(void)setBulletinButtonIndices:(NSArray *)arg1 ;
-(id)_actionsFromBulletin;
-(id)_actionsWithOptions;
-(id)_defaultActions;
-(id)_dismissAction;
-(id)_defaultAction;
-(id)_defaultAppearance;
-(id)_dismissAppearance;
-(id)_snoozeAppearance;
-(id)_optionsAppearance;
-(void)_configureSheetWithBulletinButtons;
-(void)_configureSheetWithBulletinActions;
-(id)_snoozeAction;
-(NSArray *)bulletinButtonIndices;
-(void)setActions:(NSArray *)arg1 ;
-(void)dealloc;
-(NSArray *)actions;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)dismiss:(int)arg1 ;
-(NSArray *)buttons;
-(void)willDeactivateForReason:(int)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(id)initWithBulletin:(id)arg1 ;
@end

