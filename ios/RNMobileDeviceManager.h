#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@import AppConfigSettingsFramework;

@interface MobileDeviceManager : RCTEventEmitter <RCTBridgeModule, ManagedAppConfigSettingsDelegate>

@end
