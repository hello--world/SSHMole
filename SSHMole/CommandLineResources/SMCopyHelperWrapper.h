//
//  SMCopyHelperWrapper.h
//  SSHMole
//
//  Created by 史江浩 on 6/11/15.
//  Copyright (c) 2015 openthread. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMCopyHelperWrapper : NSObject

+ (NSString *)helperPath;

+ (BOOL)installHelperIfNotExist;

@end
