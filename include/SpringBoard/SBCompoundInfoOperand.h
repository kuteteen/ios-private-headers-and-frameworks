/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBInfoOperand;

@interface SBCompoundInfoOperand : NSObject {

	SBInfoOperand* _activeOperand;
	SBInfoOperand* _referenceOperand;

}

@property (nonatomic,readonly) SBInfoOperand * activeOperand;                            //@synthesize activeOperand=_activeOperand - In the implementation block
@property (nonatomic,readonly) SBInfoOperand * referenceOperand;                         //@synthesize referenceOperand=_referenceOperand - In the implementation block
@property (getter=isSectionOperand,nonatomic,readonly) BOOL sectionOperand; 
+(id)compoundOperandWithOperand:(id)arg1 referenceOperand:(id)arg2 ;
-(SBInfoOperand *)activeOperand;
-(SBInfoOperand *)referenceOperand;
-(BOOL)isSectionOperand;
-(id)initWithOperand:(id)arg1 operand:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

