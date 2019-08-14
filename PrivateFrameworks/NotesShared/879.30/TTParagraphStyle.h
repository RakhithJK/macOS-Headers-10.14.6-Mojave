//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>
#import <NotesShared/NSMutableCopying-Protocol.h>
#import <NotesShared/NSSecureCoding-Protocol.h>
#import <NotesShared/TTModelAttributeComparable-Protocol.h>

@class NSString, NSUUID, TTTodo;

@interface TTParagraphStyle : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, TTModelAttributeComparable>
{
    BOOL _needsParagraphCleanup;
    BOOL _needsListCleanup;
    unsigned int _style;
    unsigned int _hints;
    unsigned long long _alignment;
    long long _writingDirection;
    unsigned long long _indent;
    unsigned long long _startingItemNumber;
    TTTodo *_todo;
}

+ (id)paragraphStyleNamed:(unsigned int)arg1;
+ (id)defaultParagraphStyle;
+ (BOOL)supportsSecureCoding;
+ (int)paragraphStyleAlignmentForTextAlignment:(unsigned long long)arg1;
+ (unsigned long long)textAlignmentForParagraphStyleAlignment:(int)arg1;
@property(nonatomic) BOOL needsListCleanup; // @synthesize needsListCleanup=_needsListCleanup;
@property(nonatomic) BOOL needsParagraphCleanup; // @synthesize needsParagraphCleanup=_needsParagraphCleanup;
@property(nonatomic) unsigned int hints; // @synthesize hints=_hints;
@property(retain, nonatomic) TTTodo *todo; // @synthesize todo=_todo;
@property(nonatomic) unsigned long long startingItemNumber; // @synthesize startingItemNumber=_startingItemNumber;
@property(nonatomic) unsigned long long indent; // @synthesize indent=_indent;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection=_writingDirection;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSUUID *trackingUUID;
- (id)listBulletInAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL uniqueToLine;
@property(readonly, nonatomic) BOOL wantsFollowingNewLine;
@property(readonly, nonatomic) BOOL preferSingleLine;
@property(readonly, nonatomic) BOOL isHeader;
@property(readonly, nonatomic) BOOL isList;
@property(readonly, nonatomic) BOOL canIndent;
- (BOOL)isUnknownStyle;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToModelParagraphStyle:(id)arg1;
- (BOOL)isEqualToModelComparable:(id)arg1;
- (BOOL)isEqualToParagraphStyle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialize;
- (void)saveToArchive:(struct ParagraphStyle *)arg1;
- (id)initWithArchive:(const struct ParagraphStyle *)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

