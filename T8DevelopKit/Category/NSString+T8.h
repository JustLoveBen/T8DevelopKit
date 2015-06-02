/************************************************************
 *  * EaseMob CONFIDENTIAL
 * __________________
 * Copyright (C) 2013-2014 EaseMob Technologies. All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of EaseMob Technologies.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from EaseMob Technologies.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (T8)

- (BOOL)isChinese;

- (BOOL)hasChinese;

- (CGFloat)heightForSize:(CGSize)size font:(UIFont *)font;

@end
