//
//  ZASwipeAction.h
//  ZaloMessageUI
//
//  Created by CPU11713 on 3/30/17.
//  Copyright © 2017 CPU11713. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ZASwipeActionTransitioningContext.h"

typedef NS_ENUM(NSInteger, ZASwipeActionStyle) {
    ZASwipeActionStyleDefault,
    ZASwipeActionStyleDestructive
};

typedef NS_ENUM(NSInteger, ZAExpansionFulfillmentStyle) {
    ZAExpansionFulfillmentStyleDelete,
    ZAExpansionFulfillmentStyleReset
};

/**
 The ZASwipeAction object defines a single action to present when user swipes horizontally
 */
@interface ZASwipeAction : NSObject

@property (nonatomic, readwrite, copy) NSString *identifier;

/**
 The title of the action button
 
 @remark You must specify a title or an image
 */
@property (nonatomic, readwrite, copy) NSString *tittle;

/**
 The image used for the action button
 
 @remark You must specify a title or an image
 */
@property (nonatomic, readwrite) UIImage *image;

/**
 The hightlighted image used for the action button
 
 @remark If you do not specify a highlight image, the default image is used for the hightlighted sate
 */
@property (nonatomic, readwrite) UIImage *hightlightedImage;

@property (nonatomic, assign) ZASwipeActionStyle style;

/**
 The object that is notified as a transitioning occusrs
 */
@property (nonatomic, readwrite) id<ZASwipeActionTransitioning> transitionDelgate;

@property (nonatomic, readwrite) UIFont *font;

@property (nonatomic, readwrite) UIColor *textColor;

@property (nonatomic, readwrite) UIColor *backgroundColor;

@property (nonatomic, readwrite) UIVisualEffect *backgroundEffect;

@property (nonatomic, readonly) BOOL hasBackgroundColor;

@property (nonatomic, copy) void (^handler)(ZASwipeAction *, NSIndexPath *);

@property (nonatomic, copy) void (^completionHandler)(ZAExpansionFulfillmentStyle);

/**
 A boolean value that determines whether the action menu is autotically hidden upon selection
 */
@property (nonatomic, assign, getter=isHideWhenSelected) BOOL hideWhenSelected;

- (instancetype)initWithStyle:(ZASwipeActionStyle)style
                        title:(NSString *)title
                      handler:(void (^)(ZASwipeAction *, NSIndexPath *))handler;


/**
 Performs the configured expansion completion animattion

 @param style The desired style for completing expansion action
 */
- (void)fulFillWithStyle:(ZAExpansionFulfillmentStyle)style;
@end
