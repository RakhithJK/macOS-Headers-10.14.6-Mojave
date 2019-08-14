//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface LPStorageTransaction : NSObject
{
    NSMutableArray *_blocks;
    NSString *_uuid;
    int _dbref;
}

@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(readonly, nonatomic) int dbref; // @synthesize dbref=_dbref;
- (void).cxx_destruct;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (id)initWithDatabaseReference:(int)arg1;

@end

