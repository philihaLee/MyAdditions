//
//  NSString+JBAdditon.h
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (JBAdditon)

/// 给当前文件追加文档路径
- (NSString *)jb_appendDocumentDir;

/// 给当前文件追加缓存路径
- (NSString *)jb_appendCacheDir;

/// 给当前文件追加临时路径
- (NSString *)jb_appendTempDir;

/// 对当前字符串进行 BASE 64 编码，并且返回结果
- (NSString *)jb_base64Encode;

/// 对当前字符串进行 BASE 64 解码，并且返回结果
- (NSString *)jb_base64Decode;

/// 根据文件名计算出文件大小 
- (unsigned long long)jb_fileSize;

/**
 *  @brief 根据字数的不同,返回UILabel中的text文字需要占用多少Size
 *  @param size 约束的尺寸
 *  @param font 文本字体
 *  @return 文本的实际尺寸
 */
- (CGSize)textSizeWithContentSize:(CGSize)size font:(UIFont *)font;

/**
 *  @brief  根据文本字数/文本宽度约束/文本字体 求得text的Size
 *  @param width 宽度约束
 *  @param font  文本字体
 *  @return 文本的实际高度
 */
- (CGFloat)textHeightWithContentWidth:(CGFloat)width font:(UIFont *)font;

/**
 *  @brief  根据文本字数/文本宽度约束/文本字体 求得text的Size
 *  @param height 宽度约束
 *  @param font  文本字体
 *  @return 文本的实际长度
 */
- (CGFloat)textWidthWithContentHeight:(CGFloat)height font:(UIFont *)font;


@end
