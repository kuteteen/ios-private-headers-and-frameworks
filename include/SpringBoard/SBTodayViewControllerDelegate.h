/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBTodayViewControllerDelegate <SBWidgetHandlingNCColumnViewControllerDelegate>
@required
-(id)todaySectionInfoForTodayViewController:(id)arg1;
-(id)tomorrowSectionInfoForTodayViewController:(id)arg1;
-(id)childSectionIdentifiersForTodayViewController:(id)arg1;
-(id)todayViewController:(id)arg1 childSectionInfoForIdentifier:(id)arg2;
-(id)todayViewController:(id)arg1 snippetsForChildSectionWithIdentifier:(id)arg2;
-(void)todayViewController:(id)arg1 visibleContentIsClipping:(BOOL)arg2;
-(id)presentationContextDefininingViewControllerForTodayViewController:(id)arg1;

@end

