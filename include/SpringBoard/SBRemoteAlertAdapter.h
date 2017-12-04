/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAlertAdapter.h>
#import <SpringBoard/_SBRemoteAlertHostViewControllerDelegate.h>

@protocol SBRemoteAlertAdapterDelegate;
@class _SBRemoteAlertHostViewController, NSString, NSMutableSet;

@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate> {

	_SBRemoteAlertHostViewController* _remoteAlertHostViewController;
	id<SBRemoteAlertAdapterDelegate> _remoteAlertAdapterDelegate;
	NSString* _impersonatedApplicationBundleID;
	BOOL _dismissWithHomeButton;
	BOOL _userRequestedHomeButtonDismissal;
	long long _desiredButtonEvents;
	BOOL _wantsWallpaperTunnel;
	BOOL _hasTranslucentBackground;
	long long _requestedBackgroundStyle;
	BOOL _allowsAlertStacking;
	long long _dismissalAnimationStyle;
	BOOL _disableFadeInAnimation;
	NSMutableSet* _idleTimerDisabledReasons;
	double _requestedAutoLockTime;
	BOOL _hasCustomStatusBarStyle;
	long long _customStatusBarStyle;
	int _desiredStatusBarStyleOverrides;
	BOOL _wantsToShowStatusBar;
	BOOL _wantsToManageStatusBarAtActivation;
	BOOL _canManageStatusBarVisibility;
	BOOL _suppressesSiri;
	BOOL _dismissOnUILock;
	long long _desiredLaunchingInterfaceOrientation;
	BOOL _dontCancelStatusBarStyleOverrides;
	/*^block*/id _lockUIAndDismissActions;
	/*^block*/id _clientActivationHandler;
	/*^block*/id _clientDeactivationHandler;
	long long _whitePointAdaptivityStyle;
	BOOL _beingPresentedObscured;

}

@property (nonatomic,readonly) long long dismissalAnimationStyle;                                                                                                                        //@synthesize dismissalAnimationStyle=_dismissalAnimationStyle - In the implementation block
@property (nonatomic,readonly) BOOL userRequestedHomeButtonDismissal;                                                                                                                    //@synthesize userRequestedHomeButtonDismissal=_userRequestedHomeButtonDismissal - In the implementation block
@property (nonatomic,readonly) BOOL wantsWallpaperTunnel;                                                                                                                                //@synthesize wantsWallpaperTunnel=_wantsWallpaperTunnel - In the implementation block
@property (assign,nonatomic) long long requestedBackgroundStyle;                                                                                                                         //@synthesize requestedBackgroundStyle=_requestedBackgroundStyle - In the implementation block
@property (nonatomic,readonly) BOOL dismissOnUILock;                                                                                                                                     //@synthesize dismissOnUILock=_dismissOnUILock - In the implementation block
@property (nonatomic,readonly) BOOL disablesFadeInAnimation;                                                                                                                             //@synthesize disableFadeInAnimation=_disableFadeInAnimation - In the implementation block
@property (nonatomic,__weak,readonly) NSString * serviceBundleIdentifier; 
@property (assign,getter=isBeingPresentedObscured,nonatomic) BOOL beingPresentedObscured;                                                                                                //@synthesize beingPresentedObscured=_beingPresentedObscured - In the implementation block
@property (assign,setter=_setRemoteAlertAdapterDelegate:,getter=_remoteAlertAdapterDelegate,nonatomic,__weak) id<SBRemoteAlertAdapterDelegate> _remoteAlertAdapterDelegate;              //@synthesize remoteAlertAdapterDelegate=_remoteAlertAdapterDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestRemoteViewService:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)requestWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_requestWithServiceName:(id)arg1 serviceClass:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)dismissalAnimationStyle;
-(BOOL)matchesInCallUIService;
-(void)setLockUIAndDismissActions:(/*^block*/id)arg1 ;
-(id)_impersonatesApplicationWithBundleID;
-(void)setActivationHandler:(/*^block*/id)arg1 deactivationHandler:(/*^block*/id)arg2 ;
-(void)setBeingPresentedObscured:(BOOL)arg1 ;
-(BOOL)matchesRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(BOOL)matchesAnyInCallService;
-(BOOL)userRequestedHomeButtonDismissal;
-(double)autoLockTime;
-(BOOL)_shouldDismissSwitcherOnActivation;
-(int)statusBarStyleOverridesToCancel;
-(BOOL)managesOwnStatusBarAtActivation;
-(BOOL)showsSpringBoardStatusBar;
-(id)_displayLayoutElementIdentifier;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesControlCenter;
-(BOOL)allowsStackingOfAlert:(id)arg1 ;
-(BOOL)suppressesSiri;
-(long long)requestedBackgroundStyle;
-(BOOL)isBeingPresentedObscured;
-(void)setWantsToManageStatusBarAtActivation:(BOOL)arg1 ;
-(void)setCanManageStatusBarVisibility:(BOOL)arg1 ;
-(BOOL)disablesFadeInAnimation;
-(BOOL)wantsWallpaperTunnel;
-(BOOL)dismissOnUILock;
-(void)_setRemoteAlertAdapterDelegate:(id)arg1 ;
-(void)_terminate;
-(void)noteShouldStopDisablingStatusBarOverrides;
-(void)remoteAlertWantsToAllowBanners:(BOOL)arg1 ;
-(void)remoteAlertDidRequestDismissal;
-(void)remoteAlertWantsToLockUIAndDismiss;
-(void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(long long)arg1 ;
-(void)remoteAlertWantsWallpaperTunnelActive:(BOOL)arg1 ;
-(void)remoteAlertWantsToSetBackgroundStyle:(long long)arg1 withDuration:(double)arg2 ;
-(void)remoteAlertWantsMenuButtonDismissal:(BOOL)arg1 ;
-(void)remoteAlertWantsToAllowAlertStacking:(BOOL)arg1 ;
-(void)remoteAlertWantstoSetDismissalAnimationStyle:(long long)arg1 ;
-(void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)arg1 ;
-(void)remoteAlertWantsToSetIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)remoteAlertWantsToSetAutoLockDuration:(double)arg1 ;
-(void)remoteAlertWantsToSetStatusBarHidden:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)remoteAlertWantsToDismissOnUILock:(BOOL)arg1 ;
-(void)remoteAlertWantsToDisableFadeInAnimation:(BOOL)arg1 ;
-(void)remoteAlertWantsToSetWhitePointAdaptivityStyle:(long long)arg1 ;
-(void)remoteAlertDidTerminateWithError:(id)arg1 ;
-(id)_initWithRemoteAlertHostViewController:(id)arg1 ;
-(void)_cleanupIdleTimerDisabledReasons;
-(void)_setImpersonatedApplicationBundleID:(id)arg1 ;
-(void)_setDismissWithHomeButton:(BOOL)arg1 ;
-(void)_setWantsWallpaperTunnel:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)_setDismissalAnimationStyle:(long long)arg1 ;
-(void)_setLaunchingInterfaceOrientation:(long long)arg1 ;
-(void)setRequestedBackgroundStyle:(long long)arg1 ;
-(void)_setHasTranslucentBackground:(BOOL)arg1 ;
-(void)_setSuppressesSiri:(BOOL)arg1 ;
-(void)_setCustomStatusBarStyle:(long long)arg1 ;
-(void)_setShouldDisableFadeInAnimation:(BOOL)arg1 ;
-(void)_didTerminateWithError:(id)arg1 ;
-(id<SBRemoteAlertAdapterDelegate>)_remoteAlertAdapterDelegate;
-(void)dealloc;
-(long long)statusBarStyle;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)deactivate;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)activate;
-(id)initWithViewController:(id)arg1 ;
-(void)synchronizeAnimationsInActions:(/*^block*/id)arg1 ;
-(NSString *)serviceBundleIdentifier;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(void)handleDoubleHeightStatusBarTap;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1 ;
-(void)noteActivatedForCustomReason:(id)arg1 ;
-(BOOL)handleMenuButtonTap;
-(BOOL)hasTranslucentBackground;
-(BOOL)isRemote;
-(BOOL)handleLockButtonPressed;
@end
