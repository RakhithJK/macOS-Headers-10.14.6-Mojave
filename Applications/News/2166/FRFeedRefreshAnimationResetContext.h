//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFStateMachineContextType-Protocol.h"

@class NSString;

@interface FRFeedRefreshAnimationResetContext : NSObject <NFStateMachineContextType>
{
    BOOL _animated;
}

@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(readonly, copy) NSString *description;
- (id)initWithAnimation:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

