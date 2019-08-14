//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@interface SGDWorkQueueName : NSObject <NSCopying>
{
    unsigned int _timestamp32;
    unsigned int _counter32;
    unsigned short _otherbits;
}

+ (BOOL)isValidFilename:(id)arg1;
- (id)queueItemId;
- (id)description;
- (id)copyWithState:(unsigned long long)arg1 andFails:(unsigned long long)arg2;
- (id)copyWithState:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)pathInDirectory:(id)arg1;
- (id)initWithPath:(id)arg1;
@property(nonatomic) unsigned long long state;
@property(nonatomic) unsigned long long fails;
@property(nonatomic) unsigned long long counter;
@property(nonatomic) unsigned long long timestamp;

@end

