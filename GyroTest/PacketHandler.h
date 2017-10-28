//
//  PacketHandler.h
//  GyroTest
//
//  Created by Simon on 28.10.17.
//  Copyright © 2017 Simon J. All rights reserved.
//

@interface PacketHandler : NSObject

+ (void)sendPacket:(NSData *)data toAddress:(NSData *)address;
+ (int)beginPacket:(NSMutableData *)data;
+ (void)finishPacket:(NSMutableData *)data;

@end
