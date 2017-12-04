/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:04 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

@interface SBTouchTemplatePanGestureRecognizer : SBTouchTemplateGestureRecognizer {

	BOOL _recognizesHorizontalPanning;
	BOOL _recognizesVerticalPanning;

}

@property (assign,nonatomic) BOOL recognizesHorizontalPanning;              //@synthesize recognizesHorizontalPanning=_recognizesHorizontalPanning - In the implementation block
@property (assign,nonatomic) BOOL recognizesVerticalPanning;                //@synthesize recognizesVerticalPanning=_recognizesVerticalPanning - In the implementation block
+(id)defaultTemplates;
-(BOOL)recognizesHorizontalPanning;
-(BOOL)recognizesVerticalPanning;
-(BOOL)hasSignificantMotionToBegin;
-(BOOL)_directionallyAcceptMotion;
-(CGPoint)_convertPortraitPoint:(CGPoint)arg1 toOrientation:(long long)arg2 ;
-(double)_arcCenter;
-(double)_arcSize;
-(void)_log:(id)arg1 ;
-(double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2 ;
-(void)setRecognizesHorizontalPanning:(BOOL)arg1 ;
-(void)setRecognizesVerticalPanning:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

