/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockOverlayTransition : NSObject {

	SBLockOverlayContext* _from;
	SBLockOverlayContext* _to;
	SBLockScreenViewController* _lockScreenVC;

}
+(id)underlayRequesterNameForContext:(id)arg1 ;
-(id)initFromOverlay:(id)arg1 toOverlay:(id)arg2 inside:(id)arg3 ;
-(void)performTransitionWithAnimationFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideLockContent;
@end

