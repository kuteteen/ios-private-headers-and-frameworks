/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface SBScreenManager : NSObject {

	NSMutableArray* _handlers;
	NSMutableDictionary* _screenIDToHandlerMap;
	NSMutableDictionary* _screenIDToLastDisplayMap;

}
+(id)sharedInstance;
-(void)_updateHandlerForConnectionToScreen:(id)arg1 ;
-(id)lastDisplayForScreenWithID:(unsigned)arg1 ;
-(id)lastDisplayForScreen:(id)arg1 ;
-(void)addConnectionHandler:(id)arg1 ;
-(id)init;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
@end
