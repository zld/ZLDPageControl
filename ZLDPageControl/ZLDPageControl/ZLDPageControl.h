//
//  ZLDPageControl.h
//  ZLDPageControl
//
//  Created by zld on 8/4/16.
//  Copyright © 2016 zld. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZLDPageControl : UIView

@property (nonatomic, assign) NSUInteger totalCount;
@property (nonatomic, assign) NSUInteger index;
@property (nonatomic, strong) UIColor *selectedColor;
@property (nonatomic, strong) UIColor *unSelectedColor;
@property (nonatomic, assign) CGFloat indicatorDiameter;
@property (nonatomic, assign) CGFloat selectedIndicatorDiameter;
@property (nonatomic, assign) CGFloat indicatorSpace;
@property (nonatomic, assign) BOOL isIndicatorTouchable;
@property (nonatomic, copy) void (^didSelectIndexBlock)(NSUInteger index);

@end
