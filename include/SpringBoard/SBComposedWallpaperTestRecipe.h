/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTestRecipe.h>

@class NSArray, NSEnumerator, NSString;

@interface SBComposedWallpaperTestRecipe : NSObject <SBTestRecipe> {

	NSArray* _wallpaperSpecifications;
	NSEnumerator* _wallpaperSpecificationEnumerator;

}

@property (nonatomic,copy) NSArray * wallpaperSpecifications;                              //@synthesize wallpaperSpecifications=_wallpaperSpecifications - In the implementation block
@property (nonatomic,retain) NSEnumerator * wallpaperSpecificationEnumerator;              //@synthesize wallpaperSpecificationEnumerator=_wallpaperSpecificationEnumerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(NSEnumerator *)wallpaperSpecificationEnumerator;
-(NSArray *)wallpaperSpecifications;
-(void)setWallpaperSpecificationEnumerator:(NSEnumerator *)arg1 ;
-(void)setWallpaperSpecifications:(NSArray *)arg1 ;
-(id)init;
@end
