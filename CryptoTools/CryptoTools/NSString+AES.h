//
//  NSString+AES.h
//  CryptoTools
//
//  Created by 哈哈 on 2022/7/1.
//  Copyright © 2022 MengHeng. All rights reserved.
//

#import <AppKit/AppKit.h>


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (AES)

/**
 * AES加密
 */
+ (NSString *)aesEncrypt:(NSString *)sourceStr;
 
/**
 * AES解密
 */
+ (NSString *)aesDecrypt:(NSString *)secretStr;


@end

NS_ASSUME_NONNULL_END
