/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBar.h>

@class NSString;

@interface SBFakeStatusBarView : UIStatusBar {

	NSString* _cacheKey;

}

@property (nonatomic,copy) NSString * cacheKey;              //@synthesize cacheKey=_cacheKey - In the implementation block
-(void)setSnapshotOverridesWithTimeEnabled:(BOOL)arg1 ;
-(void)setOverrideBreadcrumbTitle:(id)arg1 secondaryTitle:(id)arg2 ;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
@end

