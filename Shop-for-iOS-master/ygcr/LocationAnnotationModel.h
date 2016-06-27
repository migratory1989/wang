//
//  LocationAnnotationModel.h
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 16/3/15.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

/**
 * 地图标注类，俗称“大头针”
 */

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface LocationAnnotationModel : NSObject <MKAnnotation>

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@end
