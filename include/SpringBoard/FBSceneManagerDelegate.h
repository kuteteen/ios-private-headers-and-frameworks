/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:04 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneManagerDelegate <FBSceneManagerObserver>
@optional
-(long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;

@required
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;

@end

