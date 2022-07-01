//
//  NSString+DES.h
//  CryptoTools
//
//  Created by 哈哈 on 2022/7/1.
//  Copyright © 2022 MengHeng. All rights reserved.
//

#import <AppKit/AppKit.h>


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (DES)

+ (NSString *)encryptUseDES:(NSString *)plainText key:(NSString *)key;
 
+ (NSString *)decryptUseDES:(NSString*)cipherText key:(NSString*)key;


@end

NS_ASSUME_NONNULL_END
