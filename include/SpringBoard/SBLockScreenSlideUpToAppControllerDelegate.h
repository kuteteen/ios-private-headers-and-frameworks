/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBLockScreenSlideUpToAppControllerDelegate
@required
-(BOOL)isAnotherSlideUpControllerBlockingController:(id)arg1;
-(BOOL)controllerShouldUseAdditionalTopPadding:(id)arg1;
-(BOOL)controllerShouldInvertVerticalPadding:(id)arg1;
-(void)addGrabberView:(id)arg1 toLockScreenView:(id)arg2 forController:(id)arg3;
-(id)grabberViewInLockScreenView:(id)arg1 forController:(id)arg2;
-(void)setUnlockActionContext:(id)arg1;
-(id)viewControllerToUseAsParent;
-(void)passcodeViewDidBecomeActive:(BOOL)arg1 forController:(id)arg2;
-(void)adjustWallpaperForVerticalScrollPercentage:(double)arg1;
-(void)prepareForSlideUpAppLaunchAnimated:(BOOL)arg1;
-(BOOL)lockScreenIsActive;
-(long long)presentingControllerIdentifierForController:(id)arg1;

@end

