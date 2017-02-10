//
//  JSPatchTool.h
//  GjFax
//
//  Created by yangyong on 16/8/3.
//  Copyright © 2016年 GjFax. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JSPatch/JPEngine.h>

@interface JSPatchTool : NSObject
/**
 *  开始JS更新检查、自动运行
 */
+ (void)startJSPatch;

/**
 *  撤销JS脚本
 */
+ (void)cleanerAllJSPatch;

/**
 *  获取上次请求时间 默认间隔3600s
 *
 *  @return
 */
+ (NSInteger)getRequestLastTime;

/**
 *  设置本次请求时间戳
 *
 *  @param requestLastTime 
 */
+ (void)setRequestLastTime:(NSInteger)requestLastTime;

@end

/**
 *  撤销脚本、类
 */
@interface JSCleaner : JPExtension

/**
 *  撤销所有脚本
 */
+ (void)cleanAll;

/**
 *  撤销单个类
 *
 *  @param className 
 */
+ (void)cleanClass:(NSString *)className;
@end
