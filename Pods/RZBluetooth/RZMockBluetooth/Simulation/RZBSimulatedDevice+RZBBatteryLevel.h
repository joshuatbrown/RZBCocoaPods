//
//  RZBSimulatedDevice+RZBBatteryLevel.h
//  RZBluetooth
//
//  Created by Brian King on 8/11/15.
//  Copyright (c) 2015 Raizlabs. All rights reserved.
//

#import "RZBSimulatedDevice.h"

/**
 *  Category to add support for the battery level.
 *  
 *  @warning This is not supported on the device as the system is already advertising
 *           a battery level.
 */
@interface RZBSimulatedDevice (RZBBatteryLevel)

@property (assign, nonatomic) uint8_t batteryLevel;

- (void)addBatteryService;

@end
