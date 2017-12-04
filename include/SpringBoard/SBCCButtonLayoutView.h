/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionView.h>

@class NSMutableArray, UIScrollView;

@interface SBCCButtonLayoutView : SBControlCenterSectionView {

	NSMutableArray* _buttons;
	UIScrollView* _scrollView;
	double _interButtonPadding;
	unsigned long long _buttonStretchThreshold;
	unsigned long long _buttonShrinkThreshold;
	long long _maxButtons;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) double interButtonPadding;                              //@synthesize interButtonPadding=_interButtonPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                         //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) unsigned long long buttonStretchThreshold;              //@synthesize buttonStretchThreshold=_buttonStretchThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long buttonShrinkThreshold;               //@synthesize buttonShrinkThreshold=_buttonShrinkThreshold - In the implementation block
@property (assign,nonatomic) long long maxButtons;                                   //@synthesize maxButtons=_maxButtons - In the implementation block
-(void)setMaxButtons:(long long)arg1 ;
-(void)setButtonStretchThreshold:(unsigned long long)arg1 ;
-(void)setButtonShrinkThreshold:(unsigned long long)arg1 ;
-(void)resortButtons;
-(void)removeButton:(id)arg1 ;
-(void)_didAddButton:(id)arg1 ;
-(void)_didRemoveButton:(id)arg1 ;
-(void)_resortButtons;
-(long long)maxButtons;
-(double)interButtonPadding;
-(unsigned long long)buttonStretchThreshold;
-(unsigned long long)buttonShrinkThreshold;
-(void)_setButtons:(id)arg1 ;
-(void)setInterButtonPadding:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(id)buttons;
-(void)addButton:(id)arg1 ;
@end

