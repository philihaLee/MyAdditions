//
//  UITextField+JBAddition.m
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import "UITextField+JBAddition.h"

@implementation UITextField (JBAddition)

// 通过这个属性名，修改textField内部的占位文字颜色
static NSString * const JBPlaceholderColorKeyPath = @"placeholderLabel.textColor";

/// 设置站位文字颜色
- (void)setJb_placeholderColor:(UIColor *)jb_placeholderColor
{
    // 这3行代码的作用：1> 保证创建出placeholderLabel，2> 保留曾经设置过的占位文字
    NSString *placeholder = self.placeholder;
    self.placeholder = @" ";
    self.placeholder = placeholder;
    
    // 处理xmg_placeholderColor为nil的情况：如果是nil，恢复成默认的占位文字颜色
    if (jb_placeholderColor == nil) {
        jb_placeholderColor = [UIColor colorWithRed:0 green:0 blue:0.0980392 alpha:0.22];
    }
    
    // 设置占位文字颜色
    [self setValue:jb_placeholderColor forKeyPath:JBPlaceholderColorKeyPath];
}

// 获得站位文字颜色
- (UIColor *)jb_placeholderColor {
    return [self valueForKeyPath:JBPlaceholderColorKeyPath];
}



@end
