/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneManager.h>
#import <SpringBoard/SBApplicationRestrictionObserver.h>

@class UIApplicationSceneClientSettingsDiffInspector, FBSSceneClientSettingsDiffInspector, SBSideAppState, NSMutableDictionary, UISystemNavigationAction, SBMainDisplaySceneLayoutViewController, NSString;

@interface SBMainDisplaySceneManager : SBSceneManager <SBApplicationRestrictionObserver> {

	UIApplicationSceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	FBSSceneClientSettingsDiffInspector* _externalClientSettingsDiffInspector;
	long long _validInterfaceOrientation;
	unsigned long long _validInterfaceOrientationChangeCount;
	unsigned long long _processedValidInterfaceOrientationChangeCount;
	SBSideAppState* _sideAppState;
	NSMutableDictionary* _windowOverlayInsetsForSource;
	UISystemNavigationAction* _currentBreadcrumbNavigationAction;

}

@property (nonatomic,readonly) SBMainDisplaySceneLayoutViewController * layoutController; 
@property (nonatomic,retain) SBSideAppState * sideAppState; 
@property (nonatomic,retain) UISystemNavigationAction * currentBreadcrumbNavigationAction;              //@synthesize currentBreadcrumbNavigationAction=_currentBreadcrumbNavigationAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBSideAppState *)sideAppState;
-(id)_newLayoutControllerForDisplay:(id)arg1 ;
-(id)_snapshotRequestsForApplication:(id)arg1 scene:(id)arg2 settings:(id)arg3 ;
-(long long)_hostingPolicyForScene:(id)arg1 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(BOOL)_handleAction:(id)arg1 forScene:(id)arg2 ;
-(id)additionalActionsForApplication:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)applyWindowOverlayInsets:(UIEdgeInsets)arg1 fromSource:(long long)arg2 duration:(double)arg3 ;
-(void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3 ;
-(UISystemNavigationAction *)currentBreadcrumbNavigationAction;
-(void)_appKilledInAppSwitcher:(id)arg1 ;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(void)_keyboardWillDisappear:(id)arg1 ;
-(void)_keyboardWillRotate:(id)arg1 ;
-(void)_bulletinWillPresent:(id)arg1 ;
-(void)_bulletinWillDismiss:(id)arg1 ;
-(void)_updatePictureInPictureOverlayInsetsWithDuration:(double)arg1 ;
-(id)_breadcrumbBundleIdForApplication:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)_presentSpotlightFromEdge:(unsigned long long)arg1 fromBreadcrumb:(BOOL)arg2 ;
-(id)_applicationForAppLink:(id)arg1 ;
-(long long)_openStrategyForAppLinkState:(id)arg1 ;
-(id)_destinationContextsForApplication:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)_activateAppLink:(id)arg1 withAppLinkState:(id)arg2 transitionContext:(id)arg3 wasFromSpotlight:(BOOL)arg4 previousBreadcrumb:(id)arg5 ;
-(void)_activateBreadcrumbApplication:(id)arg1 ;
-(BOOL)_isActivatingPinnedBreadcrumbApp:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)setCurrentBreadcrumbNavigationAction:(UISystemNavigationAction *)arg1 ;
-(BOOL)_shouldBreadcrumbApplication:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)_breadcrumbNavigationActionForApplication:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)_externalClientSettingsDiffInspector;
-(id)_appClientSettingsDiffInspector;
-(void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6 ;
-(void)_updateLevelForScene:(id)arg1 transitionContext:(id)arg2 ;
-(void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(BOOL)arg2 ;
-(BOOL)_animateGeometryChangesForExternalForegroundApplicationScenes;
-(id)_rotationAnimationSettingsForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 medusaSettings:(id)arg3 ;
-(void)_adjustPIPInsetsForKeyboardFrameChangeNotification:(id)arg1 ;
-(double)_effectiveKeyboardSceneLevelForClientSettings:(id)arg1 ;
-(void)_presentSpotlightFromEdge:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithDisplay:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)_deviceOrientationChanged:(id)arg1 ;
-(void)setSideAppState:(SBSideAppState *)arg1 ;
@end

