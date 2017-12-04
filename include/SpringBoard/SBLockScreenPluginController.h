/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@protocol SBLockScreenPluginControllerDelegate;
@class SBLockScreenPluginLoader, NSMutableDictionary, SBLockScreenPlugin, SBLockScreenPluginTransitionFactory, SBLockScreenViewController, UIWindow, SBLockScreenTestPluginSettings, NSString;

@interface SBLockScreenPluginController : NSObject <_UISettingsKeyObserver> {

	SBLockScreenPluginLoader* _pluginLoader;
	NSMutableDictionary* _plugins;
	SBLockScreenPlugin* _activePlugin;
	SBLockScreenPlugin* _displayedPlugin;
	SBLockScreenPluginTransitionFactory* _transitionFactory;
	id<SBLockScreenPluginControllerDelegate> _delegate;
	SBLockScreenViewController* _lockScreenViewController;
	BOOL _pluginControllerReceivedViewWillDisappear;
	BOOL _pluginControllerReceivedViewDidDisappear;
	UIWindow* _previousWindow;
	BOOL _removedDisplayedPluginTemporarily;
	SBLockScreenTestPluginSettings* _testSettings;
	BOOL _lockScreenHasNotifications;
	BOOL _allowDisplayOfPlugins;
	double _fadeDuration;

}

@property (assign,nonatomic,__weak) SBLockScreenViewController * lockScreenViewController;              //@synthesize lockScreenViewController=_lockScreenViewController - In the implementation block
@property (nonatomic,retain) SBLockScreenPluginLoader * pluginLoader;                                   //@synthesize pluginLoader=_pluginLoader - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenPluginControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL lockScreenHasNotifications;                                           //@synthesize lockScreenHasNotifications=_lockScreenHasNotifications - In the implementation block
@property (assign,nonatomic) BOOL allowDisplayOfPlugins;                                                //@synthesize allowDisplayOfPlugins=_allowDisplayOfPlugins - In the implementation block
@property (assign) double fadeDuration;                                                                 //@synthesize fadeDuration=_fadeDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBLockScreenViewController *)lockScreenViewController;
-(void)_handleApplicationExit:(id)arg1 ;
-(id)initWithLockScreenViewController:(id)arg1 ;
-(id)_lockScreenView;
-(id)_pluginView;
-(CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(long long)arg2 ;
-(BOOL)isPluginVisible;
-(id)activePluginBundleName;
-(BOOL)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2 auxiliaryActivationAnimationBlock:(/*^block*/id)arg3 ;
-(BOOL)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2 auxiliaryDeactivationAnimationBlock:(/*^block*/id)arg3 ;
-(void)_lockScreenWillMoveToWindow;
-(void)_lockScreenDidMoveToWindow;
-(void)_refreshLockScreenPlugin;
-(void)_handleUIRelock;
-(void)_handlePluginDisable:(id)arg1 ;
-(void)_handleUpdatePluginLegibilitySettings:(id)arg1 ;
-(void)_updateCallPluginPresentationStyle;
-(void)_passcodeLockedStateChanged:(id)arg1 ;
-(void)_removeActivePlugin;
-(BOOL)_pluginHidesNotificationList:(id)arg1 ;
-(BOOL)sendEventToPlugin:(/*^block*/id)arg1 ;
-(BOOL)_loadLockScreenPluginWithName:(id)arg1 activationContext:(id)arg2 ;
-(void)_setActivePlugin:(id)arg1 ;
-(id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)arg1 ;
-(void)_setDisplayedPlugin:(id)arg1 ;
-(BOOL)isPhonePluginActive;
-(id)displayedPlugin;
-(id)activePlugin;
-(void)_updateNotificationListForNewlyActivatedPlugin;
-(void)_setEffectivePresentationStyleForDisplayedPluginIfNecessary;
-(id)_transitionContextWithOldPlugin:(id)arg1 newPlugin:(id)arg2 ;
-(void)setLockScreenViewController:(SBLockScreenViewController *)arg1 ;
-(void)_disablePluginsPassingTest:(/*^block*/id)arg1 withReason:(id)arg2 ;
-(id)_pluginForName:(id)arg1 controller:(id)arg2 ;
-(void)_removeDisplayedPluginPermanently:(BOOL)arg1 ;
-(void)_notifyDisplayedPluginRemovedFromWindow;
-(void)_notifyDisplayedPluginAddedToWindow;
-(void)_transitionFromExclusionaryPluginToNotificationList;
-(void)_transitionFromNotificationListToExclusionaryPlugin;
-(BOOL)activePluginHidesNotificationList;
-(BOOL)pluginControllerShouldAnimateOthersResumption;
-(BOOL)isPhonePluginVisible;
-(void)handleUIUnlock;
-(void)handleLockScreenTemporarilyDismissed;
-(void)setLockScreenHasNotifications:(BOOL)arg1 ;
-(SBLockScreenPluginLoader *)pluginLoader;
-(void)setPluginLoader:(SBLockScreenPluginLoader *)arg1 ;
-(BOOL)lockScreenHasNotifications;
-(BOOL)allowDisplayOfPlugins;
-(void)setAllowDisplayOfPlugins:(BOOL)arg1 ;
-(void)setFadeDuration:(double)arg1 ;
-(double)fadeDuration;
-(void)setDelegate:(id<SBLockScreenPluginControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBLockScreenPluginControllerDelegate>)delegate;
-(void)reset;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)wantsMenuButtonHeldEvent;
-(BOOL)handleMenuButtonHeld;
-(void)_addObservers;
-(BOOL)handleLockButtonPressed;
@end

