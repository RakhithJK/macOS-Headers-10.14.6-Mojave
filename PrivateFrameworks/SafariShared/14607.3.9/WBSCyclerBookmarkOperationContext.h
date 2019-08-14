//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBSCyclerBookmarkListRepresentation;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerBookmarkOperationContext : NSObject
{
    id <WBSCyclerTestTarget> _testTarget;
    WBSCyclerBookmarkListRepresentation *_topLevelBookmark;
    NSString *_titlePrefix;
}

@property(copy, nonatomic) NSString *titlePrefix; // @synthesize titlePrefix=_titlePrefix;
@property(retain, nonatomic) WBSCyclerBookmarkListRepresentation *topLevelBookmark; // @synthesize topLevelBookmark=_topLevelBookmark;
@property(retain, nonatomic) id <WBSCyclerTestTarget> testTarget; // @synthesize testTarget=_testTarget;
- (void).cxx_destruct;
- (id)_copyBookmark:(id)arg1 filteringWithIdentifierWhitelist:(id)arg2;
- (id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:(id)arg1;
- (BOOL)_isBookmarkValid:(id)arg1;
- (BOOL)_isBookmarkPrefixed:(id)arg1;
- (id)randomValidStrictDescendantOfTopLevelBookmark;
- (id)randomValidStrictDescendantOfList:(id)arg1;
- (id)randomDescendantOfList:(id)arg1 enforcingTitlePrefixValidity:(BOOL)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)randomBookmarkTitle;
- (id)filterOutBookmarksWithoutTitlePrefixInList:(id)arg1;

@end

