//
//  OrderListCell.m
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 16/3/14.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

#import "OrderListCell.h"

@interface OrderListCell ()
{
    NSString *_orderId;
    
    UILabel *_timeLabel;
    UILabel *_statusLabel;
}

@end

@implementation OrderListCell

+ (CGFloat)height
{
    return 76;
}

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier order:(OrderEntity *)order
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (!self) return nil;
    
    self.selectionStyle = UITableViewCellSelectionStyleNone;
    _orderId = order.id;
    
    _timeLabel = [UILabel new];
    _timeLabel.text = [NSString stringWithFormat:@"下单时间: %@", order.createDateString];
    _timeLabel.font = [UIFont systemFontOfSize:13];
    [self addSubview:_timeLabel];
    [_timeLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self).with.offset(8);
        make.top.equalTo(self).with.offset(8);
    }];
    
    _statusLabel = [UILabel new];
    _statusLabel.text = order.orderStatus.pendingLabel;
    _statusLabel.textColor = kColorMainOrange;
    _statusLabel.font = [UIFont systemFontOfSize:13];
    _statusLabel.textAlignment = NSTextAlignmentCenter;
    _statusLabel.layer.borderColor = kColorMainOrange.CGColor;
    _statusLabel.layer.borderWidth = 1;
    _statusLabel.layer.cornerRadius = 2;
    [self addSubview:_statusLabel];
    [_statusLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.right.equalTo(self).with.offset(-8);
        make.top.equalTo(self).with.offset(8);
        make.width.mas_equalTo(60);
        make.height.mas_equalTo(19);
    }];
    
    NSArray *orderItems = order.orderItems;
    int i = 0;
    for (OrderItemEntity *orderItem in orderItems) {
        UIImageView *imageView = [UIImageView new];
        [imageView sd_setImageWithURL:[NSURL URLWithString:orderItem.imageSmall] placeholderImage:[UIImage imageNamed:@"image_hoder"]];
        [self addSubview:imageView];
        [imageView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.equalTo(self).with.offset((i * 50) + 8);
            make.top.equalTo(_timeLabel.mas_bottom).with.offset(6);
            make.width.mas_equalTo(40);
            make.height.mas_equalTo(40);
        }];
        i++;
    }
    
    return self;
}

@end
