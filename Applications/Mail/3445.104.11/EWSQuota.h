//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RemoteStoreQuota.h"

@class MFEWSSizeEngine;

@interface EWSQuota : RemoteStoreQuota
{
}

- (void)_updateUsageField;
- (void)engineUpdated:(id)arg1;
- (void)engineDidFinish;
- (void)engineDidStart;
- (id)initWithSizeEngine:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MFEWSSizeEngine *sizeEngine; // @dynamic sizeEngine;

@end

