//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISDRecordIdMapper, NSMutableDictionary;

@interface ISDChangePuller : NSObject
{
    ISDRecordIdMapper *_mapper;
    NSMutableDictionary *_record;
}

- (id)changeBuilder:(id)arg1 createDeltaBetweenOldValue:(id)arg2 newValue:(id)arg3 propertyDescription:(id)arg4 name:(id)arg5 lastModifiedGeneration:(unsigned int)arg6;
- (id)changeBuilder:(id)arg1 createChangeWithEntityName:(id)arg2 recordId:(id)arg3 changeType:(int)arg4 deltas:(id)arg5 fromGeneration:(unsigned int)arg6 toGeneration:(unsigned int)arg7;
- (void)changeBuilder:(id)arg1 didCreateDelta:(id)arg2 betweenOldValue:(id)arg3 newValue:(id)arg4;
- (void)prepareForNewChange;
- (void)dealloc;
- (id)initWithRecordIdMapper:(id)arg1;

@end

