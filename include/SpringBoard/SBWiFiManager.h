@interface SBWiFiManager : NSObject

+ (instancetype)sharedInstance;

-(void)setWiFiEnabled:(BOOL)arg1 ;

@property NSInteger signalStrengthBars;

@end
