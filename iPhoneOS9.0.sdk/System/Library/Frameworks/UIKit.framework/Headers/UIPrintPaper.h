//
//  UIPrintPaper.h
//  UIKit
//
//  Copyright 2010-2012 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE_IOS(4_2) @interface UIPrintPaper : NSObject 

+ (UIPrintPaper *)bestPaperForPageSize:(CGSize)contentSize withPapersFromArray:(NSArray<UIPrintPaper *> *)paperList; // for use by delegate. pass in list

@property(readonly) CGSize paperSize;
@property(readonly) CGRect printableRect;

@end

//_____________________________________________

@interface UIPrintPaper(Deprecated_Nonfunctional)
- (CGRect)printRect ;
@end

NS_ASSUME_NONNULL_END
