//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject
{
    BOOL _looping;
    NSArray *_items;
}

+ (id)sequenceWithItems:(id)arg1 loops:(BOOL)arg2;
@property(readonly, nonatomic, getter=isLooping) BOOL looping; // @synthesize looping=_looping;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 loops:(BOOL)arg2;
- (id)init;

@end
