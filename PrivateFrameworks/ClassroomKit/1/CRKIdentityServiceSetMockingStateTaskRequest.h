//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@interface CRKIdentityServiceSetMockingStateTaskRequest : CATTaskRequest
{
    BOOL _mockingEnabled;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isMockingEnabled) BOOL mockingEnabled; // @synthesize mockingEnabled=_mockingEnabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

