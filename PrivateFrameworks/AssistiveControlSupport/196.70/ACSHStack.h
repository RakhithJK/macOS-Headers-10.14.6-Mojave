//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistiveControlSupport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ACSHStack : NSObject <NSCopying>
{
    BOOL _pushMovesDuplicatesToTop;
    NSMutableArray *__queue;
}

@property(retain) NSMutableArray *_queue; // @synthesize _queue=__queue;
@property(nonatomic) BOOL pushMovesDuplicatesToTop; // @synthesize pushMovesDuplicatesToTop=_pushMovesDuplicatesToTop;
- (void).cxx_destruct;
- (void)clear;
- (id)description;
- (void)push:(id)arg1;
- (id)pop;
- (id)peek;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

