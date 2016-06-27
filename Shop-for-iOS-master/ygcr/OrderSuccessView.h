//
//  OrderSuccessView.h
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 15/9/18.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

#import <UIKit/UIKit.h>
#import "OrderEntity.h"

@protocol OrderSuccessViewDelegate <NSObject>

- (void)doGotoShopping;

- (void)doViewOrder;

@end


@interface OrderSuccessView : UIView

@property (nonatomic, weak) id<OrderSuccessViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame order:(OrderEntity *)order;

@end
