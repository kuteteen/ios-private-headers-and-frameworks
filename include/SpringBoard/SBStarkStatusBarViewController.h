/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIStatusBarStyleDelegate.h>

@protocol SBStarkSessionConfiguring, UIStatusBarStyleDelegate;
@class SBStarkStatusBarStateProvider, UIStatusBar, NSMutableSet, UIView, NSString;

@interface SBStarkStatusBarViewController : UIViewController <UIStatusBarStyleDelegate> {

	id<SBStarkSessionConfiguring> _configuration;
	SBStarkStatusBarStateProvider* _statusBarStateProvider;
	UIStatusBar* _statusBarView;
	id<UIStatusBarStyleDelegate> _statusBarStyleDelegate;
	NSMutableSet* _statusBarHideReasons;
	long long _requestedStyle;
	BOOL _styleHasBeenRequested;
	double _statusBarWidth;
	UIView* _separatorView;
	BOOL _separatorHidden;

}

@property (assign,nonatomic,__weak) id<UIStatusBarStyleDelegate> statusBarStyleDelegate; 
@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStatusBarHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3 ;
-(id)newFakeStatusBarWithStyle:(long long)arg1 ;
-(BOOL)_isStatusBarHidden;
-(void)_layoutStatusBar:(id)arg1 ;
-(id<UIStatusBarStyleDelegate>)statusBarStyleDelegate;
-(void)setStatusBarStyleDelegate:(id<UIStatusBarStyleDelegate>)arg1 ;
-(void)updateStatusBarWithRequestedStyle:(long long)arg1 animationFactory:(id)arg2 ;
-(id)newFakeStatusBar;
-(id)initWithCoder:(id)arg1 ;
-(long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5 ;
-(void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)isSeparatorHidden;
@end

