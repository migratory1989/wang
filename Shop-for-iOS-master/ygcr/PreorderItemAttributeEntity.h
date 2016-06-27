//
//  PreorderItemAttributeEntity.h
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

@interface PreorderItemAttributeEntity : BaseEntity

/**
 * 来自 ProductAttributeItemEntity的值
 */
@property (nonatomic, copy) NSString *attributeItemId;
@property (nonatomic, copy) NSString *attributeItemName;
@property (nonatomic, copy) NSString *attributeItemPrintName;
@property (nonatomic, copy) NSNumber *attributeItemSort;

/**
 * 来自 ProductAttributeItemValueEntity的值
 */
@property (nonatomic, copy) NSString *attributeItemValueId;
@property (nonatomic, copy) NSString *attributeItemValueName;
@property (nonatomic, copy) NSString *attributeItemValuePrintName;
@property (nonatomic, copy) NSNumber *attributeItemValuePrice;
@property (nonatomic, copy) NSNumber *attributeItemValueSort;
@property (nonatomic, copy) NSNumber *attributeItemValueIsStandard;

@end
