//
//  UTToolkit.h
//  Express
//
//  Created by Utopia on 16/5/19.
//  Copyright © 2016年 Utopia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UTToolkit : NSObject

+ (NSString *)stringFromDate:(NSDate *)date;

+ (NSDate *)dateFromString:(NSString *)dateString;

//获取磁盘总空间的大小
+ (CGFloat)diskOfAllSizeMBytes;

//获取磁盘可用空间大小
+ (CGFloat)diskOfFreeSizeMBytes;

//获取指定路径下某个文件的大小
+ (long long)fileSizeAtPath:(NSString *)filePath;

//获取文件夹下所有文件的大小
+ (long long)folderSizeAtPath:(NSString *)folderPath;

//获取字符串(或汉字)首字母
+ (NSString *)firstCharacterWithString:(NSString *)string;

//将字符串数组按照元素首字母顺序进行排序分组
+ (NSDictionary *)dictionaryOrderByCharacterWithOriginalArray:(NSArray *)array;

//获取当前时间
//format: @"yyyy-MM-dd HH:mm:ss"、@"yyyy年MM月dd日 HH时mm分ss秒"
+ (NSString *)currentDateWithFormat:(NSString *)format;

//计算上次日期距离现在多久
+ (NSString *)timeIntervalFromLastTime:(NSString *)lastTime
                        lastTimeFormat:(NSString *)format1
                         ToCurrentTime:(NSString *)currentTime
                     currentTimeFormat:(NSString *)format2;

+ (NSString *)timeIntervalFromLastTime:(NSDate *)lastTime ToCurrentTime:(NSDate *)currentTime;

//判断手机号码格式是否正确
+ (BOOL)valiMobile:(NSString *)mobile;

//利用正则表达式验证
+ (BOOL)isAvailableEmail:(NSString *)email;

//将十六进制颜色转换为 UIColor 对象
+ (UIColor *)colorWithHexString:(NSString *)color;

//对图片进行滤镜处理
+ (UIImage *)filterWithOriginalImage:(UIImage *)image filterName:(NSString *)name;

//对图片进行模糊处理
+ (UIImage *)blurWithOriginalImage:(UIImage *)image blurName:(NSString *)name radius:(NSInteger)radius;

//调整图片饱和度, 亮度, 对比度
+ (UIImage *)colorControlsWithOriginalImage:(UIImage *)image
                                 saturation:(CGFloat)saturation
                                 brightness:(CGFloat)brightness
                                   contrast:(CGFloat)contrast;

//创建一张实时模糊效果 View (毛玻璃效果)
//Avilable in iOS 8.0 and later
+ (UIVisualEffectView *)effectViewWithFrame:(CGRect)frame;

//全屏截图
+ (UIImage *)shotScreen;

//截取view生成一张图片
+ (UIImage *)shotWithView:(UIView *)view;

//截取view中某个区域生成一张图片
+ (UIImage *)shotWithView:(UIView *)view scope:(CGRect)scope;
@end

//压缩图片到指定尺寸大小
+ (UIImage *)compressOriginalImage:(UIImage *)image toSize:(CGSize)size;

//压缩图片到指定文件大小
+ (NSData *)compressOriginalImage:(UIImage *)image toMaxDataSizeKBytes:(CGFloat)size;

//获取设备 IP 地址
//#import <ifaddrs.h>
//#import <arpa/inet.h>
+ (NSString *)getIPAddress;

//判断字符串中是否含有空格
+ (BOOL)isHaveSpaceInString:(NSString *)string;

//判断字符串中是否含有某个字符串
+ (BOOL)isHaveString:(NSString *)string1 InString:(NSString *)string2;

//判断字符串中是否含有中文
+ (BOOL)isHaveChineseInString:(NSString *)string;

//判断字符串是否全部为数字
+ (BOOL)isAllNum:(NSString *)string;

//绘制虚线
+ (UIView *)createDashedLineWithFrame:(CGRect)lineFrame
lineLength:(int)length
lineSpacing:(int)spacing
lineColor:(UIColor *)color;
