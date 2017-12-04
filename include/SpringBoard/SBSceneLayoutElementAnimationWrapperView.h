/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBSceneLayoutInterfaceOrientedView.h>

@class SBLayoutElement, SBAppView, SBOrientationTransformWrapperView, SBLayoutElementAdornmentView, NSString;

@interface SBSceneLayoutElementAnimationWrapperView : UIView <SBSceneLayoutInterfaceOrientedView> {

	SBLayoutElement* _layoutElement;
	SBAppView* _appView;
	SBOrientationTransformWrapperView* _orientedView;
	SBLayoutElementAdornmentView* _adornmentView;

}

@property (nonatomic,readonly) SBLayoutElement * layoutElement;                           //@synthesize layoutElement=_layoutElement - In the implementation block
@property (nonatomic,readonly) SBAppView * appView;                                       //@synthesize appView=_appView - In the implementation block
@property (nonatomic,readonly) SBLayoutElementAdornmentView * adornmentView;              //@synthesize adornmentView=_adornmentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long layoutOrientation; 
-(SBAppView *)appView;
-(SBLayoutElement *)layoutElement;
-(id)initWithLayoutElement:(id)arg1 appView:(id)arg2 adornmentView:(id)arg3 ;
-(id)initWithLayoutElement:(id)arg1 appView:(id)arg2 ;
-(SBLayoutElementAdornmentView *)adornmentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)description;
-(void)invalidate;
-(void)willMoveToSuperview:(id)arg1 ;
-(long long)layoutOrientation;
@end

