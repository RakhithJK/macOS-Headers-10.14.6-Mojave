//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDUnpairedHAPAccessoryProgressHandler : HMFObject
{
    NSUUID *_accessoryUUID;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (void).cxx_destruct;
- (id)initWithAccessoryUUID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;

@end
