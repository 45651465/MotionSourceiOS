//
//  PacketHandler.m
//  GyroTest
//
//  Created by Simon on 28.10.17.
//  Copyright © 2017 Simon J. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PacketHandler.h"


@implementation PacketHandler

+ (void)sendPacket:(NSData *)data toAddress:(NSData *)address {
    
}

+ (int)beginPacket:(NSMutableData *)data {
    return 0;
}

+ (void)finishPacket:(NSMutableData *)data {
    
}

@end
