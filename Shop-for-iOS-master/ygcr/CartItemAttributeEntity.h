//
//  CartItemAttributeEntity.h
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 15/07/19.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

#import "BaseEntity.h"
#import "ProductAttributeItemEntity.h"
#import "ProductAttributeItemValueEntity.h"

@interface CartItemAttributeEntity : BaseEntity

@property (nonatomic, copy) NSString *attributeIdstring;

@property (nonatomic, strong) ProductAttributeItemEntity *productAttributeItem;
@property (nonatomic, strong) ProductAttributeItemValueEntity *productAttributeItemValue;

@end
