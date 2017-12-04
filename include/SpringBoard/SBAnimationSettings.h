/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAnimationCurveSettings.h>

@class BSAnimationSettings;

@interface SBAnimationSettings : SBAnimationCurveSettings {

	BSAnimationSettings* _exportedSettings;
	long long _animationType;
	double _delay;
	double _duration;
	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _calculatedDuration;

}

@property (assign,nonatomic) long long animationType;                //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) double delay;                           //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double mass;                            //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                       //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                         //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double epsilon;                         //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) double calculatedDuration;              //@synthesize calculatedDuration=_calculatedDuration - In the implementation block
+(id)_moduleWithSectionTitle:(id)arg1 delay:(BOOL)arg2 ;
+(id)_moduleWithSectionTitle:(id)arg1 ;
+(id)settingsControllerModule;
-(id)BSAnimationSettings;
-(double)calculatedDuration;
-(void)setCalculatedDuration:(double)arg1 ;
-(double)epsilon;
-(void)setEpsilon:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(double)duration;
-(double)delay;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setDefaultValues;
-(double)damping;
-(double)mass;
-(void)setAnimationType:(long long)arg1 ;
-(void)_invalidate;
-(long long)animationType;
-(double)stiffness;
@end

