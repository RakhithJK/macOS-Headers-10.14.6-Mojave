//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSEnumerator.h>

@class NSDictionary;

@interface IP_IPHDiffEnumerator : NSEnumerator
{
    NSDictionary *_diffDictionary;
    long long _state;
    NSEnumerator *_currentEnumerator;
}

- (id)nextObject;
- (id)_nextLocalID;
- (id)_enumeratorForState:(long long)arg1;
- (void)dealloc;
- (id)initWithDiffDictionary:(id)arg1;

@end

