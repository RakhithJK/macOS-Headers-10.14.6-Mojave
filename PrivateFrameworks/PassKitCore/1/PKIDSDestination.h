//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKIDSDestination : NSObject
{
    NSString *_deviceIdentifier;
    NSString *_name;
}

+ (id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2;

@end

