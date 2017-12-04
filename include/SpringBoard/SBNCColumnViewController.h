/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBModeViewControllerContentProviding.h>
#import <SpringBoard/SBNCTableViewControllerDelegate.h>
#import <libobjc.A.dylib/SBUISizeObservingViewDelegate.h>

@protocol SBBulletinActionHandler;
@class SBNCTableViewController, _UIContentUnavailableView, UIView, NSString;

@interface SBNCColumnViewController : UIViewController <SBModeViewControllerContentProviding, SBNCTableViewControllerDelegate, SBUISizeObservingViewDelegate> {

	SBNCTableViewController* _ncTableViewController;
	_UIContentUnavailableView* _contentUnavailableView;
	struct {
		unsigned scrollsToTop : 1;
		unsigned isLayoutValid : 1;
	}  _columnViewControllerFlags;
	UIView* _contentProvidingView;
	BOOL _requestHandlingEnabled;
	id<SBBulletinActionHandler> _bulletinActionHandler;

}

@property (nonatomic,__weak,readonly) Class tableViewControllerClass; 
@property (assign,nonatomic,__weak) id<SBBulletinActionHandler> bulletinActionHandler;                 //@synthesize bulletinActionHandler=_bulletinActionHandler - In the implementation block
@property (nonatomic,readonly) SBNCTableViewController * ncTableViewController;                        //@synthesize ncTableViewController=_ncTableViewController - In the implementation block
@property (assign,getter=isRequestHandlingEnabled,nonatomic) BOOL requestHandlingEnabled;              //@synthesize requestHandlingEnabled=_requestHandlingEnabled - In the implementation block
@property (assign,nonatomic) BOOL scrollsToTop; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) long long layoutMode; 
@property (nonatomic,__weak,readonly) NSString * contentUnavailableText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_contentUnavailableVibrantOptionsForCurrentState;
-(SBNCTableViewController *)ncTableViewController;
-(void)insertTableView;
-(void)invalidateContentLayout;
-(BOOL)isRequestHandlingEnabled;
-(void)setRequestHandlingEnabled:(BOOL)arg1 ;
-(long long)notificationCenterTableViewController:(id)arg1 insertionAnimationForRow:(id)arg2 inSection:(id)arg3 ;
-(void)reloadSortOrder;
-(Class)tableViewControllerClass;
-(void)insertAppropriateViewWithContent;
-(void)transitionToContentUnavailableViewIfNecessary;
-(BOOL)canRemoveViewOnDismissal:(id)arg1 ;
-(id<SBBulletinActionHandler>)bulletinActionHandler;
-(void)transitionToBulletinViewControllerViewIfNecessary;
-(NSString *)contentUnavailableText;
-(id)_lazyContentUnavailableView;
-(void)_insertContentUnavailableView;
-(void)_removeBulletinViewControllerView;
-(void)_transitionToBulletinViewControllerView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)notificationCenterTableViewController:(id)arg1 removalAnimationForRow:(id)arg2 inSection:(id)arg3 ;
-(long long)notificationCenterTableViewController:(id)arg1 replacementAnimationForRow:(id)arg2 inSection:(id)arg3 ;
-(long long)layoutModeForNotificationCenterTableViewController:(id)arg1 ;
-(void)setBulletinActionHandler:(id<SBBulletinActionHandler>)arg1 ;
-(void)dealloc;
-(CGSize)contentSize;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)scrollsToTop;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(long long)layoutMode;
@end

