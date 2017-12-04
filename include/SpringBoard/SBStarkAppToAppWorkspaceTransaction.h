/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkToAppWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class SBUIAnimationController, SBWorkspaceEntity, NSString;

@interface SBStarkAppToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerObserver> {

	SBUIAnimationController* _animationController;
	BOOL _animatedActivation;
	BOOL _animatedDeactivation;

}

@property (nonatomic,readonly) SBWorkspaceEntity * fromEntity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_doCommit;
-(SBWorkspaceEntity *)fromEntity;
-(void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(BOOL)arg2 ;
-(id)_newAnimationFromAppToApp;
-(id)_newAnimationFromLauncherToApp;
-(id)_newAnimationFromAppToNowPlaying;
-(id)_newAnimationFromNowPlayingToApp;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_beginAnimation;
-(id)_setupAnimationFrom:(id)arg1 to:(id)arg2 ;
-(void)_performTransition;
-(void)_cleanUpAnimation;
-(void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1 ;
-(void)mainScreenApplicationSceneWillCommit:(id)arg1 ;
-(id)_newAnimationFromAppToLauncher;
-(void)_handleAppDidNotChange;
-(id)_newAnimationFromNowPlayingToNowPlaying;
-(id)_newAnimationFromLauncherToNowPlaying;
-(id)_newAnimationFromNowPlayingToLauncher;
-(void)dealloc;
-(NSString *)debugDescription;
-(id)_animation;
-(void)_didComplete;
-(BOOL)_canBeInterrupted;
@end

