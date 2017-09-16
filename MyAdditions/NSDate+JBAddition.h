//
//  NSDate+JBAddition.h
//  工具类整理
//
//  Created by philia on 2017/9/15.
//  Copyright © 2017年 philia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JBDateItem : NSObject
@property (nonatomic, assign) NSInteger day;
@property (nonatomic, assign) NSInteger hour;
@property (nonatomic, assign) NSInteger minute;
@property (nonatomic, assign) NSInteger second;
@end

@interface NSDate (JBAddition)

/// createdAtDate和nowDate之间的时间间隔
- (JBDateItem *)jb_timeIntervalSinceDate:(NSDate *)anotherDate;

- (BOOL)jb_isToday;
- (BOOL)jb_isYesterday;
- (BOOL)jb_isTomorrow;
- (BOOL)jb_isThisYear;

/// 获取今天周几
- (NSInteger)getNowWeekday;

@end
