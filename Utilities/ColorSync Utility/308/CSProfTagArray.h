//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class NSMutableArray;

@interface CSProfTagArray : NSArray
{
    unsigned int _count;
    NSMutableArray *_array;
}

- (id)describeTagType:(unsigned int)arg1 dataType:(unsigned int)arg2 dataSize:(unsigned long long)arg3;
- (id)objectToDisplayTagType:(unsigned int)arg1 dataType:(unsigned int)arg2 dataSize:(unsigned int)arg3;
- (unsigned long long)indexOfObjectWithIdentifier:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

@end
