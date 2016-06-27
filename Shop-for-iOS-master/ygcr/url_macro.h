//
//  macro.h
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 15/8/16.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

//网站地址
//#define kUrlBase                        @"http://192.168.1.100:8080" //内网地址
//#define kUrlBase                        @"http://localhost:8080"
#define kUrlBase                        @"http://ykxmall.ygcr8.com:8080"
#define kUrlCategoryList                kUrlBase@"/app/category/list"
#define kUrlCategoryListWithProduct     kUrlBase@"/app/category/list-with-product"
#define kUrlProduct                     kUrlBase@"/app/product/%@"
#define kUrlCartAdd                     kUrlBase@"/app/cart/add"

//查看打折的商品列表
#define kUrlGetFeaturedProducts         kUrlBase@"/app/product/list-featured-price"
//为你精选的商品列表
#define kUrlGetTopicProducts            kUrlBase@"/app/product/list-featured-topic"
//销量最高的商品列表
#define kUrlGetTopSaleProducts          kUrlBase@"/app/product/list-top-seller"

//购物车
#define kUrlGetCart                     kUrlBase@"/app/cart"
//设置购物车项的数量
#define kUrlSetCartItemCountWithItemId  kUrlBase@"/app/cart/setCartItemNum/%@"
//删除购物车项
#define kUrlDeleteCartItemWithItemId    kUrlBase@"/app/cart/delete-item/%@"
//选取购物车项
#define kUrlSelectCartItemWithItemId    kUrlBase@"/app/cart/setIsSelected/%@"

//从购物车添加预购订单
#define kUrlPreorderAdd                 kUrlBase@"/app/preorder/add"
//获取预购订单
#define kUrlPreorderWithId              kUrlBase@"/app/preorder/%@"
//设置支付方式
#define kUrlPreorderSetPayType          kUrlBase@"/app/preorder/select-pay-type"

//添加收货地址
#define kUrlAddressAdd                  kUrlBase@"/app/address/add"
//修改收货地址
#define kUrlAddressEditWithId           kUrlBase@"/app/address/edit/%@"
//获得地址列表
#define kUrlAddressGetList              kUrlBase@"/app/address/list"
//设置默认地址
#define kUrlAddressSetDefaultWithId     kUrlBase@"/app/address/set-default-address/%@"
//获得系统默认的区域信息
#define kUrlAreaPrefixChainedAreas      kUrlBase@"/app/area/get-prefix-area-chained-list"

//提交订单
#define kUrlOrderAddWithPreorderId      kUrlBase@"/app/order/add/%@"
//查看订单
#define kUrlOrderViewWithId             kUrlBase@"/app/order/%@"
//获取订单列表
#define kUrlOrderList                   kUrlBase@"/app/order/list"
//获取待付款订单列表
#define kUrlOrderListPendingPay         kUrlBase@"/app/order/list-pending-pay"
//获取待收货订单列表
#define kUrlOrderListDelivering         kUrlBase@"/app/order/list-delivering"
//获取交易完成订单列表
#define kUrlOrderListFinished           kUrlBase@"/app/order/list-finished"

//获取用户信息
#define kUrlUserGet                     kUrlBase@"/app/user/get-user"
//注册 - 提交手机号码
#define kUrlUserRegisterStep1Post       kUrlBase@"/app/user/register-step1-post"
//注册 - 提交手机号码、密码
#define kUrlUserRegisterStep2Post       kUrlBase@"/app/user/register-step2-post"
//注册 - 提交手机号码、密码、验证码
#define kUrlUserRegisterStep3Post       kUrlBase@"/app/user/register-step3-post"
//重置密码 - 提交手机号码
#define kUrlUserForgetPasswordStep1Post kUrlBase@"/app/user/forget-password-step1-post"
//重置密码 - 提交手机号码和密码
#define kUrlUserForgetPasswordStep2Post kUrlBase@"/app/user/forget-password-step2-post"
//重置密码 - 提交手机号码、密码、验证码
#define kUrlUserForgetPasswordStep3Post kUrlBase@"/app/user/forget-password-step3-post"
//登录
#define kUrlUserLogin                   kUrlBase@"/app/user/login-post"
//退出登录
#define kUrlUserLogout                  kUrlBase@"/app/user/logout"


