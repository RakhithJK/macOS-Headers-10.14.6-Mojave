//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreResult.h>

@interface NSPersistentHistoryResult : NSPersistentStoreResult
{
    id _aggregatedResult;
    long long _resultType;
}

@property(readonly) long long resultType; // @synthesize resultType=_resultType;
@property(readonly) id result; // @synthesize result=_aggregatedResult;
- (void)dealloc;
- (id)description;
- (id)initWithSubresults:(id)arg1;
- (id)initWithResultType:(long long)arg1 andResult:(id)arg2;

@end

