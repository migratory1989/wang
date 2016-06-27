//
//  AddressListEmptyCell.h
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 15/10/23.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

#import <UIKit/UIKit.h>
#import "AddressAddBtn.h"

@interface AddressListEmptyCell : UITableViewCell

@property (nonatomic, weak) id<AddressAddBtnDelegate> delegate;

@end
