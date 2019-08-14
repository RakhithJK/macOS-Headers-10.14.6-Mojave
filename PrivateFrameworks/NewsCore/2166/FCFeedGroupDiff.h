//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCFeedGroupDiff : NSObject
{
    NSString *_groupIdentifier;
    NSArray *_insertedElements;
    NSArray *_deletedElements;
    NSArray *_modifiedElements;
    NSArray *_insertedHeadlines;
    NSArray *_deletedHeadlines;
    NSArray *_modifiedHeadlines;
}

@property(readonly, copy, nonatomic) NSArray *modifiedHeadlines; // @synthesize modifiedHeadlines=_modifiedHeadlines;
@property(readonly, copy, nonatomic) NSArray *deletedHeadlines; // @synthesize deletedHeadlines=_deletedHeadlines;
@property(readonly, copy, nonatomic) NSArray *insertedHeadlines; // @synthesize insertedHeadlines=_insertedHeadlines;
@property(readonly, copy, nonatomic) NSArray *modifiedElements; // @synthesize modifiedElements=_modifiedElements;
@property(readonly, copy, nonatomic) NSArray *deletedElements; // @synthesize deletedElements=_deletedElements;
@property(readonly, copy, nonatomic) NSArray *insertedElements; // @synthesize insertedElements=_insertedElements;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)initWithGroupIdentifier:(id)arg1 insertedElements:(id)arg2 deletedElements:(id)arg3 modifiedElements:(id)arg4;
- (id)init;

@end

