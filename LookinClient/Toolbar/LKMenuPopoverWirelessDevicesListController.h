//
//  LKMenuPopoverWirelessDevicesListController.h
//  LookinClient
//
//  Created by mlch911 on 2023/11/13.
//  Copyright © 2023 hughkli. All rights reserved.
//

#import "LKBaseViewController.h"
#import "ECOChannelDeviceInfo.h"

@class LKInspectableApp;

@interface LKMenuPopoverWirelessDevicesListController : LKBaseViewController

- (instancetype)initWithDevices:(NSArray<ECOChannelDeviceInfo *> *)devices;

@property(nonatomic, copy) void (^didSelectDevice)(ECOChannelDeviceInfo *device);

- (NSSize)bestSize;

@end
