//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NLNumberGenerator : NSObject
{
    unsigned long long state[2];
}

- (unsigned long long)numberInRange:(struct _NSRange)arg1;
- (void)resetWithSeed:(unsigned long long)arg1;
- (void)reset;
- (id)init;

@end

