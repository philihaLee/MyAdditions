//
//  UIBarButtonItem+JBAddition.h
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (JBAddition)

/// 快速创建导航按钮的方法
+ (instancetype)jb_itemWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action;

@end
