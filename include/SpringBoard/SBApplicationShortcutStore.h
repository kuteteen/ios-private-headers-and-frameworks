/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSLock, NSObject, NSArray, NSString;

@interface SBApplicationShortcutStore : NSObject {

	NSLock* _stateLock;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSArray* _cachedShortcutItems;
	BOOL _isLoaded;
	BOOL _isDirty;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * shortcutItems; 
@property (nonatomic,copy) NSArray * cachedShortcutItems;                     //@synthesize cachedShortcutItems=_cachedShortcutItems - In the implementation block
-(void)saveSynchronously;
-(id)_shortcutItemsFromPlistArray:(id)arg1 ;
-(void)_saveQueue_save;
-(id)_plistArrayFromShortcutItems:(id)arg1 ;
-(void)_stateLock_loadFromDiskIfNeeded;
-(void)_stateLock_markDirty;
-(NSArray *)cachedShortcutItems;
-(void)setCachedShortcutItems:(NSArray *)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSArray *)shortcutItems;
-(void)setShortcutItems:(NSArray *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)_url;
@end

