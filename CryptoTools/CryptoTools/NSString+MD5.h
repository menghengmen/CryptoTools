//
//  NSString+MD5.h
//  CryptoTools
//
//  Created by 哈哈 on 2022/7/1.
//  Copyright © 2022 MengHeng. All rights reserved.
//

#import <AppKit/AppKit.h>


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
//MD5加密：HASH算法一种、 是生成32位的数字字母混合码。
//特点：
//1、任意数据得出的MD5值长度都是32
//2、对原数据进行任何改动，所得到的MD5值都有很大区别
//
//应用：
//主要运用在数字签名、口令加密等方面
//
//MD5改进(加盐等)：
//现在的MD5已不再是绝对安全，对此，可以对MD5稍作改进，以增加解密的难度
//加盐（Salt）：在明文的固定位置插入随机串，然后再进行MD5

@interface NSString (MD5)

+ (NSString *)getmd5Str:(NSString *)str;

@end

NS_ASSUME_NONNULL_END
