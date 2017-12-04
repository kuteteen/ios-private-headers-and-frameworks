/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBCCButtonModuleDelegate;
@class UIViewController;

@interface SBCCButtonModule : NSObject {

	BOOL _enabled;
	BOOL _inoperative;
	id<SBCCButtonModuleDelegate> _delegate;
	UIViewController* _parentViewController;

}

@property (assign,nonatomic,__weak) id<SBCCButtonModuleDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isInoperative,nonatomic) BOOL inoperative;                       //@synthesize inoperative=_inoperative - In the implementation block
+(BOOL)isSupported:(int)arg1 ;
+(Class)buttonControllerClass;
+(BOOL)enabledByDefault;
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(void)cooldown;
-(void)setInoperative:(BOOL)arg1 ;
-(id)statusUpdate;
-(id)unavailableText;
-(id)glyphImageForState:(int)arg1 section:(int)arg2 ;
-(BOOL)isInoperative;
-(void)_noteButtonStateDidChange;
-(void)toggleState;
-(void)_noteDisplayPropertiesDidChange;
-(BOOL)needsConfirmation;
-(void)confirmed:(BOOL)arg1 ;
-(id)confirmationAlertMessage;
-(id)confirmationAlertTitle;
-(void)setDelegate:(id<SBCCButtonModuleDelegate>)arg1 ;
-(id)description;
-(id<SBCCButtonModuleDelegate>)delegate;
-(int)state;
-(id)identifier;
-(UIViewController *)parentViewController;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)deactivate;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)_updateState;
-(void)activate;
-(id)displayName;
-(BOOL)isRestricted;
-(void)warmup;
@end

