//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFWeakReference : NSObject
{
    id _object;
    long long _objectAddress;
}

+ (id)weakReferenceWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) long long address;
- (unsigned long long)hash;
- (id)retainedObject;
@property(readonly) id object;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

