/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconAccessoryView <SBReusableView>
@required
+(id)checkoutAccessoryImagesForIcon:(id)arg1 location:(int)arg2;
-(void)configureAnimatedForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3 withPreparation:(/*^block*/id)arg4 animation:(/*^block*/id)arg5 completion:(/*^block*/id)arg6;
-(void)configureForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3;
-(CGPoint*)accessoryOriginForIconBounds:(CGRect)arg1;
-(BOOL)displayingAccessory;
-(void)setAccessoryBrightness:(double)arg1;

@end

