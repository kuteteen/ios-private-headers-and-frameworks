/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class APSConnection, NSData, NSObject;

@interface AADeviceInfo : NSObject {

	APSConnection* _apsConnection;
	char _tokenDone;
	NSData* _token;
	//NSObject*<OS_dispatch_semaphore> _tokenSema;

}
+(id)infoDictionary;
+(id)apnsToken;
+(id)productVersion;
+(id)appleIDClientIdentifier;
+(id)userAgentHeader;
+(id)serialNumber;
+(id)osVersion;
+(id)clientInfoHeader;
+(id)udid;
-(id)buildVersion;
-(id)apnsToken;
-(id)deviceInfoDictionary;
-(id)osName;
-(id)deviceClass;
-(id)wifiMacAddress;
-(id)deviceEnclosureColor;
-(char)hasCellularCapability;
-(id)mobileEquipmentIdentifier;
-(id)internationalMobileEquipmentIdentity;
-(id)storageCapacity;
-(id)modelNumber;
-(id)deviceName;
-(id)regionCode;
-(id)productVersion;
-(id)appleIDClientIdentifier;
-(id)userAgentHeader;
-(id)serialNumber;
-(id)osVersion;
-(id)clientInfoHeader;
-(id)udid;
-(id)deviceColor;
-(id)productType;
@end

