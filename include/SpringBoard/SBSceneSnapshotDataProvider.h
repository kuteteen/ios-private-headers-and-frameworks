/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class XBSnapshotDataProviderContext, FBSceneSnapshot, SBSnapshotDataProviderContext, UIImage, NSString;

@interface SBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider> {

	FBSceneSnapshot* _snapshot;
	SBSnapshotDataProviderContext* _context;
	double _scaleFactor;
	UIImage* _cachedImage;
	IOSurfaceRef _processedSurface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2 ;
-(void)dealloc;
-(XBSnapshotDataProviderContext *)context;
-(IOSurfaceRef)IOSurface;
-(void)_invalidateSnapshotData;
-(id)fetchImage;
@end

