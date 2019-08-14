//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "HVHistoryItem.h"

@class NSString;

@interface DDMHistoryItem : HVHistoryItem
{
    NSString *_helpBookID;
    NSString *_topicID;
    NSString *_anchorID;
}

+ (BOOL)supportsSecureCoding;
+ (id)historyItemWithHelpBookID:(id)arg1 topicID:(id)arg2 topicName:(id)arg3 anchor:(id)arg4;
@property(readonly) NSString *anchorID; // @synthesize anchorID=_anchorID;
@property(readonly) NSString *topicID; // @synthesize topicID=_topicID;
@property(readonly) NSString *helpBookID; // @synthesize helpBookID=_helpBookID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)updateFromItem:(id)arg1;
- (BOOL)isSameTargetAsItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)bookTitle;
- (id)book;
- (long long)contollerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHelpBookID:(id)arg1 tocItem:(id)arg2 topicName:(id)arg3 anchor:(id)arg4;

@end

