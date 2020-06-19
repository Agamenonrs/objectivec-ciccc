//
//  InputHandler.h
//  PizzaRestaurant
//
//  Created by Agamenon Rocha Dos Santos on 19/06/20.
//  Copyright © 2020 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface InputHandler : NSObject

+ (NSString *) getUserInput: (NSString *) prompt;
@end

NS_ASSUME_NONNULL_END
