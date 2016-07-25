//
//  ShopCarAnimationViewController.h
//  ShoppingCarAnimation
//
//  Created by 刘豪亮 on 16/3/15.
//  Copyright © 2016年 刘豪亮. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  接收动画结束通知的name
 */
#define kShopCarAnimationEnd @"shopCarAnimationEnd"

@interface ShopCarAnimationViewController : UIViewController

/**
 *  购物车动画，商品图片掉入购物车
 *
 *  @param imageView   掉入购物车的商品图片
 *  @param dropToPoint 掉入位置
 *  @param isNeedNotification 是否有动画结束的通知（用于购物车上的计数加一）
 */
- (void)addProductsAnimation:(UIImageView *)imageView dropToPoint:(CGPoint)dropToPoint isNeedNotification:(BOOL)isNeedNotification;

/**
 *  完成了动画后的回调，不想使用通知的方式的话，可以使用这个
 */
@property (nonatomic,copy) void(^addShopCarFinished)();

@end
