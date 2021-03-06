//
//  IncomingMessageViewModel.h
//  ZaloMessageUI
//
//  Created by CPU11713 on 3/20/17.
//  Copyright © 2017 CPU11713. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IncomingMessageEntity.h"
#import "IncommingMessage.h"


@interface IncomingMessageFactory : NSObject

+ (id<IncomingMessage>)createMessageViewModel:(IncomingMessageEntity *)messageEntity;

@end
