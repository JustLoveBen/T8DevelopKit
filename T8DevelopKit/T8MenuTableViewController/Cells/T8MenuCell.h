//
//  UIMenuCell.h
//  T8DevelopKitDemo
//
//  Created by 琦张 on 15/6/19.
//  Copyright (c) 2015年 琦张. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"
#import "T8Defines.h"

static const CGFloat leftMargin = 15.0f;

@interface T8MenuCell : UITableViewCell

@property (nonatomic) UIImageView *topLine;
@property (nonatomic) UIImageView *bottomLine;

- (void)showTopLine:(BOOL)top bottomLine:(BOOL)bottom;

@end
