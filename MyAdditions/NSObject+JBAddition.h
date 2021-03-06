//
//  NSObject+JBAddition.h
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (JBAddition)

/// 使用字典数组创建当前类对象的数组
///
/// @param array 字典数组
///
/// @return 当前类对象的数组
+ (NSArray *)jb_objectsWithArray:(NSArray *)array;

/// 返回当前类的属性数组
///
/// @return 属性数组
+ (NSArray *)jb_propertiesList;

/// 返回当前类的成员变量数组
///
/// @return 成员变量数组
+ (NSArray *)jb_ivarsList;

@end
