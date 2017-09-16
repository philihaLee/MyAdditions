//
//  UIScreen+JBAddition.m
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import "UIScreen+JBAddition.h"

@implementation UIScreen (JBAddition)

+ (CGFloat)jb_screenWidth {
    return [UIScreen mainScreen].bounds.size.width;
}

+ (CGFloat)jb_screenHeight {
    return [UIScreen mainScreen].bounds.size.height;
}

+ (CGFloat)jb_scale {
    return [UIScreen mainScreen].scale;
}

@end
