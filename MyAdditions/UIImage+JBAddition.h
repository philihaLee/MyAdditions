//
//  UIImage+JBAddition.h
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (JBAddition)

/// 生成一个圆形图片
- (instancetype)jb_circleImage;

/// 生成一个圆形图片
+ (instancetype)jb_circleImageNamed:(NSString *)name;

/// 给定一个不要渲染的图片名称,生成一个最原始的图片
+ (UIImage *)imageWithOriginalImageName:(NSString *)imageName;

/// 灰度效果
- (UIImage *)grayScale;

/// 固定宽度与固定高度
- (UIImage *)scaleWithFixedWidth:(CGFloat)width;
- (UIImage *)scaleWithFixedHeight:(CGFloat)height;

/// 平均的颜色
- (UIColor *)averageColor;

/// 裁剪图片的一部分
- (UIImage *)croppedImageAtFrame:(CGRect)frame;

/// 将自己添加到别的图片上
- (UIImage *)addImageToImage:(UIImage *)img atRect:(CGRect)cropRect;

/// 将自身填充到指定的size
- (UIImage *)fillClipSize:(CGSize)size;

@end
