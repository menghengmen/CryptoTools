//
//  main.m
//  CryptoTools
//
//  Created by 哈哈 on 2022/7/1.
//  Copyright © 2022 MengHeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+MD5.h"
#import "NSString+AES.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSString *str = @"123Man456l;l;;;l;l";
        NSString *md5str = [NSString getmd5Str:str];
        NSLog(@"%@",md5str);
        
        
        //加盐后
       NSString *salt = @"asdkqwkfqlwflqfwlMAk";
       NSString *newStr = [str stringByAppendingString:salt];
       NSString *newMd5str = [NSString getmd5Str: newStr];
       NSLog(@"%@",newMd5str);
    
       NSString *str1 = @"menghengmeng";
       NSString *aesStr = [NSString aesEncrypt:str1];
        NSLog(@"%@",aesStr);
        NSString *str2 = [NSString aesDecrypt:aesStr];
        NSLog(@"%@",str2);

        
        
    }
    return 0;
}
