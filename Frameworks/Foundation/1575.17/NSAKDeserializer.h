//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSAKDeserializer : NSObject
{
    id ds;
}

- (id)deserializePListValueIn:(id)arg1 key:(id)arg2 length:(unsigned long long)arg3;
- (id)deserializePListKeyIn:(id)arg1;
- (id)deserializePList:(id)arg1;
- (id)deserializeNewPList;
- (id)deserializeListItemIn:(id)arg1 at:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)deserializeList:(id)arg1;
- (id)deserializeNewList;
- (id)deserializeString:(id)arg1;
- (id)deserializeNewKeyString;
- (id)deserializeNewString;
- (id)deserializeData:(id)arg1;
- (id)deserializeNewData;
- (id)deserializeNewObject;
- (id)deserializerStream;
- (void)dealloc;
- (id)initForDeserializerStream:(id)arg1;

@end

