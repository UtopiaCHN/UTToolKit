//
//  UTToolkit.m
//  Express
//
//  Created by Utopia on 16/5/19.
//  Copyright © 2016年 Utopia. All rights reserved.
//

#import "UTToolkit.h"

@implementation UTToolkit

+ (NSString *)stringFromDate:(NSDate *)date
{
    //用于格式化NSDate对象
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    //设置格式：zzz表示时区
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];
    //NSDate转NSString
    NSString *currentDateString = [dateFormatter stringFromDate:date];
    //输出currentDateString
    return currentDateString;
}

//NSString转NSDate
+ (NSDate *)dateFromString:(NSString *)dateString
{
    //设置转换格式
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init] ;
    [formatter setDateFormat:@"yyyy年MM月dd日"];
    //NSString转NSDate
    NSDate *date=[formatter dateFromString:dateString];
    return date;
}

@end
