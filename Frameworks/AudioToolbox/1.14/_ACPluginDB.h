//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class NSData, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ACPluginDB : NSObject <NSSecureCoding>
{
    NSMutableDictionary *mSearchDirectories;
    _Bool mDirty;
    NSObject<OS_dispatch_queue> *mDispatchQueue;
    struct function<void (AudioComponentVector &, AudioComponentVector &)> mNotificationCallback;
    struct function<void ()> mScanHashCallback;
    NSData *mCarbonComponentHash;
}

+ (id)path;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateCarbonComponentHash;
- (void)initialScanDirectory:(id)arg1 priority:(int)arg2 components:(struct AudioComponentVector *)arg3;
- (struct AudioComponentVector)postInit:(BOOL)arg1;
- (void)writeIfDirty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

