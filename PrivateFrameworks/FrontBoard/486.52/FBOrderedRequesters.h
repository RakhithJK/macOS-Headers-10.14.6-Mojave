//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FBOrderedRequesters : NSObject
{
    NSMutableArray *_bands[4];
}

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (void)prioritizeRequester:(id)arg1;
- (void)removeRequester:(id)arg1;
- (void)addRequester:(id)arg1 toBand:(int)arg2;
- (BOOL)containsRequester:(id)arg1 inBand:(int)arg2;
- (id)requesters;
- (id)lowestPriorityRequester;
- (id)highestPriorityRequester;
- (id)init;

@end
