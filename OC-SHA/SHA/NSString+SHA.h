//
//  NSString+SHA.h
//  OC-SHA
//
//  Created by 王亮 on 16/12/14.
//  Copyright © 2016年 com.reaal.Dichtbij. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>

@interface NSString (SHA)

/**
 SHA即Secure Hash Algorithm（安全散列算法)sha1位数的实现

 @return 返回sha1之后的结果
 */
-(NSString *) sha1;
/**
 SHA即Secure Hash Algorithm（安全散列算法)sha224位数的实现
 
 @return 返回sha224之后的结果
 */
-(NSString *) sha224;
/**
 SHA即Secure Hash Algorithm（安全散列算法)sha256位数的实现
 
 @return 返回sha256之后的结果
 */
-(NSString *) sha256;
/**
 SHA即Secure Hash Algorithm（安全散列算法)sha384位数的实现
 
 @return 返回sha384之后的结果
 */
-(NSString *) sha384;
/**
 SHA即Secure Hash Algorithm（安全散列算法)sha512位数的实现
 
 @return 返回sha512之后的结果
 */
-(NSString *) sha512;
@end
