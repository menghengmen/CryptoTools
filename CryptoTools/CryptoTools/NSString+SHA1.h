//
//  NSString+SHA1.h
//  CryptoTools
//
//  Created by 哈哈 on 2022/7/1.
//  Copyright © 2022 MengHeng. All rights reserved.
//

#import <AppKit/AppKit.h>


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SHA1)


/**
 * SHA1加密
 */
+ (NSString *)SHA1Encrypt:(NSString *)sourceStr;
 

@end

NS_ASSUME_NONNULL_END
