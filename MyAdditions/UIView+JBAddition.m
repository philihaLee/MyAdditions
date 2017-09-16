//
//  UIView+JBAddition.m
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import "UIView+JBAddition.h"

@implementation UIView (JBAddition)

- (UIViewController *)jb_viewController {
    
    // 获取下一个响应者对象
    UIResponder *resp = [self nextResponder];
    
    // <死循环>  只要有响应者就一直循环
    while (resp) {
        
        // 如果当前对象是控制器就直接返回
        if ([resp isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)resp;
        }
        
        //如果当前响应者不是控制器,就去找下一个响应者
        resp = [resp nextResponder];
        
    }
    return nil;  //表示没有找到
}


- (UIImage *)jb_snapshotImageWithFrame:(CGRect)rect {
    
    UIGraphicsBeginImageContextWithOptions(self.bounds.size, YES, 0);
    
    [self drawViewHierarchyInRect:rect afterScreenUpdates:YES];
    
    UIImage *result = UIGraphicsGetImageFromCurrentImageContext();
    
    UIGraphicsEndImageContext();
    
    return result;
}


- (BOOL)jb_intersectsWithView:(UIView *)view {
    //都先转换为相对于窗口的坐标，然后进行判断是否重合
    CGRect selfRect = [self convertRect:self.bounds toView:nil];
    CGRect viewRect = [view convertRect:view.bounds toView:nil];
    return CGRectIntersectsRect(selfRect, viewRect);
}

+ (instancetype)jb_viewFromXib {
    return [[NSBundle mainBundle] loadNibNamed:NSStringFromClass(self) owner:nil options:nil].firstObject;
}

- (CGFloat)jb_centerX {
    return self.center.x;
}

- (void)setJb_centerX:(CGFloat)jb_centerX {
    CGPoint center = self.center;
    center.x = jb_centerX;
    self.center = center;
}

- (CGFloat)jb_centerY {
    return self.center.y;
}

- (void)setJb_centerY:(CGFloat)jb_centerY {
    CGPoint center = self.center;
    center.y = jb_centerY;
    self.center = center;
}

- (CGSize)jb_size {
    return self.frame.size;
}

- (void)setJb_size:(CGSize)jb_size {
    CGRect frame = self.frame;
    frame.size = jb_size;
    self.frame = frame;
}

- (CGFloat)jb_width {
    return self.frame.size.width;
}

- (CGFloat)jb_height {
    return self.frame.size.height;
}

- (void)setJb_width:(CGFloat)jb_width {
    CGRect frame = self.frame;
    frame.size.width = jb_width;
    self.frame = frame;
}

- (void)setJb_height:(CGFloat)jb_height {
    CGRect frame = self.frame;
    frame.size.height = jb_height;
    self.frame = frame;
}

- (CGFloat)jb_x {
    return self.frame.origin.x;
}

- (void)setJb_x:(CGFloat)jb_x {
    CGRect frame = self.frame;
    frame.origin.x = jb_x;
    self.frame = frame;
}

- (CGFloat)jb_y {
    return self.frame.origin.y;
}

- (void)setJb_y:(CGFloat)jb_y {
    CGRect frame = self.frame;
    frame.origin.y = jb_y;
    self.frame = frame;
}


@end
