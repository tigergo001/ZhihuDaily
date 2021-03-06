//
//  DeallocBlockExecutor.h
//  WonderPlayerDemo
//
//  Created by Yanjun Zhuang on 14/6/15.
//  Copyright (c) 2015 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeallocBlockExecutor : NSObject

@property (nonatomic, copy) void (^deallocBlock)(void);

+ (instancetype)executorWithDeallocBlock:(void (^)(void))deallocBlock;

@end
