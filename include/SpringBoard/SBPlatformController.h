/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSOrderedSet, NSString;

@interface SBPlatformController : NSObject {

	long long _defaultIconInfoOnce;
	NSDictionary* _defaultStarkIconState;
	NSDictionary* _defaultIconState;
	NSOrderedSet* _defaultIconStateDisplayIdentifiers;
	NSString* _localizedDeviceName;
	BOOL _hasGasGauge;
	BOOL _supportsOpenGLES2;
	BOOL _internalInstall;
	BOOL _carrierInstall;
	BOOL _singleCoreDevice;
	BOOL _isH4Device;
	BOOL _starkDevice;
	BOOL _medusaDevice;
	BOOL _supportsAllMedusaFeatures;

}
+(id)sharedInstance;
-(BOOL)isMedusaDevice;
-(BOOL)isSingleCoreDevice;
-(BOOL)isDeveloperInstall;
-(id)defaultIconStateDisplayIdentifiers;
-(BOOL)isH4Device;
-(id)localizedPlatformName;
-(void)_loadDefaultIconInfoIfNecessary;
-(id)defaultIconState;
-(id)defaultStarkIconState;
-(BOOL)supportsOpenGLES2;
-(BOOL)isStarkDevice;
-(BOOL)supportsAllMedusaFeatures;
-(BOOL)hasGasGauge;
-(id)uniqueDeviceIdentifier;
-(id)init;
-(BOOL)isCarrierInstall;
-(id)hardwareModel;
-(BOOL)isInternalInstall;
-(id)deviceClass;
-(id)systemBuildVersion;
-(id)productType;
@end

