//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CLLocation, NSArray, NSString, NSURL;

@protocol CLSimulationLocationProtocol
- (void)simulateFenceWithBundleID:(NSString *)arg1 andFenceID:(NSString *)arg2 eventType:(unsigned char)arg3 atLocation:(CLLocation *)arg4;
- (void)getFencesForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)simulateSignificantLocationChange:(CLLocation *)arg1;
- (void)setLocationTravellingSpeed:(double)arg1;
- (void)setLocationInterval:(double)arg1;
- (void)setIntermediateLocationDistance:(double)arg1;
- (void)setLocationRepeatBehavior:(unsigned char)arg1;
- (void)setLocationDeliveryBehavior:(unsigned char)arg1;
- (void)clearSimulatedLocations;
- (void)appendSimulatedLocations:(NSArray *)arg1;
- (void)setSimulationScenario:(NSURL *)arg1;
- (void)stopLocationSimulation;
- (void)startLocationSimulation;
@end

