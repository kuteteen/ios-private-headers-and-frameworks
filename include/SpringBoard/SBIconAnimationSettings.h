/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBAnimationSettings;

@interface SBIconAnimationSettings : _UISettings {

	SBAnimationSettings* _centralAnimationSettings;

}

@property (retain) SBAnimationSettings * centralAnimationSettings;              //@synthesize centralAnimationSettings=_centralAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(SBAnimationSettings *)centralAnimationSettings;
-(void)setCentralAnimationSettings:(SBAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end

