//
//  CATransaction+STNScrollBar.h
//  STNScrollBarControl
//
//  Created by Stone Zhang on 9/23/17.
//  Copyright © 2017 Stone Zhang. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface CATransaction (STNScrollBar)
+ (void)stn_disableAnimaton:(void (^)(void))block;
@end
