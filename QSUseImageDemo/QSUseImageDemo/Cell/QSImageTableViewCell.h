//
//  QSImageTableViewCell.h
//  QSUseImageDemo
//
//  Created by zhongpingjiang on 2017/8/10.
//  Copyright © 2017年 shaoqing. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QSImageTableViewCell : UITableViewCell

- (void)layoutSubviewsWithUrl:(NSURL *)url;

+ (CGFloat)cellHeight;

@end
