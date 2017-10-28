//
//  PacketHandler.h
//  GyroTest
//
//  Created by Simon on 28.10.17.
//  Copyright © 2017 Simon J. All rights reserved.
//

@interface PacketHandler : NSObject

+ (void)sendPacket:(NSData *)data toAddress:(NSData *)address;
+ (void)beginPacket:(NSMutableData *)packet withDataLength:(NSUInteger)length;
+ (void)finishPacket:(NSMutableData *)packet;

@end
