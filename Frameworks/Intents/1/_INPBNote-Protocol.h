//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBDateTime, _INPBNoteContent;

@protocol _INPBNote <NSObject>
+ (Class)contentType;
@property(readonly, nonatomic) BOOL hasTitle;
@property(retain, nonatomic) _INPBDataString *title;
@property(readonly, nonatomic) BOOL hasModifiedDateTime;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(retain, nonatomic) _INPBDataString *groupName;
@property(readonly, nonatomic) BOOL hasCreatedDateTime;
@property(retain, nonatomic) _INPBDateTime *createdDateTime;
@property(readonly, nonatomic) unsigned long long contentsCount;
@property(copy, nonatomic) NSArray *contents;
- (_INPBNoteContent *)contentAtIndex:(unsigned long long)arg1;
- (void)addContent:(_INPBNoteContent *)arg1;
- (void)clearContents;
@end

