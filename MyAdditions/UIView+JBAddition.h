//
//  UIView+JBAddition.h
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JBAddition)

// 快速设置控件的位置
@property (nonatomic, assign) CGSize  jb_size;
@property (nonatomic, assign) CGFloat jb_width;
@property (nonatomic, assign) CGFloat jb_height;
@property (nonatomic, assign) CGFloat jb_x;
@property (nonatomic, assign) CGFloat jb_y;
@property (nonatomic, assign) CGFloat jb_centerX;
@property (nonatomic, assign) CGFloat jb_centerY;

/// 获取view所在的控制器
- (UIViewController *)jb_viewController;

/// 返回视图截图
- (UIImage *)jb_snapshotImageWithFrame:(CGRect)rect;

/// 快速根据xib创建View
+ (instancetype)jb_viewFromXib;

/// 判断self和view是否重叠 
- (BOOL)jb_intersectsWithView:(UIView *)view;

@end
