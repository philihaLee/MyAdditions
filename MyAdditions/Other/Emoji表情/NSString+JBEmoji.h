//
//  NSString+JBEmoji.h
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (JBEmoji)

/// 将十六进制的编码转为emoji字符
+ (NSString *)jb_emojiWithIntCode:(int)intCode;

/// 将十六进制的编码转为emoji字符
+ (NSString *)jb_emojiWithStringCode:(NSString *)stringCode;
- (NSString *)jb_emoji;

/// 是否为emoji字符
- (BOOL)jb_isEmoji;


@end
