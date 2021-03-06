/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:04 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBPassKitPrearmTriggerDelegate;
@interface SBPassKitPrearmTrigger : NSObject {

	id<SBPassKitPrearmTriggerDelegate> _delegate;
	double _baseFingerDownTimeout;
	double _baseMenuPressTimeout;
	double _fingerDownTimeout;
	double _menuPressTimeout;
	unsigned long long _homePressCount;
	unsigned long long _homePressTotalCount;
	unsigned long long _homePressTotalCountWhenFired;
	unsigned long long _homePressCountWhenHomeUp;
	BOOL _fingerOnTimerActive;
	BOOL _doubleTapTimerActive;

}
-(double)_accessibilityModifyTimeoutForHomeClickSpeed:(double)arg1 ;
-(BOOL)isTrackingUserInput;
-(void)fingerOn;
-(void)menuButtonUp;
-(void)menuButtonDown;
-(void)dealloc;
-(void)_reset;
-(id)initWithDelegate:(id)arg1 fingerDownTimeout:(double)arg2 menuPressTimeout:(double)arg3 ;
-(void)accessibilityHomeClickTimeoutsChanged;
-(void)accessibilityCancelFingerOnTimer;
@end

