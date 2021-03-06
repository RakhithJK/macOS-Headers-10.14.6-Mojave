//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TTagInfo : NSObject
{
    struct TFENode _tagNode;
    NSString *_displayName;
    _Bool _visibleInSidebar;
    _Bool _pinnedInSidebar;
    long long _labelColor;
    unsigned long long _numberOfItemsLackingThisTag;
}

+ (id)tagAttributesForNodes:(const struct TFENodeVector *)arg1;
+ (id)tagsForTagsAndLabelIndex:(id)arg1 labelIndex:(short)arg2;
+ (id)tagFromTagAttributes:(id)arg1;
+ (id)tagAttributes:(id)arg1 withLabel:(long long)arg2 visible:(_Bool)arg3 pinned:(_Bool)arg4;
+ (id)tagAttributes:(id)arg1 withLabel:(long long)arg2 visible:(_Bool)arg3;
+ (id)tagAttributes:(id)arg1 withLabel:(long long)arg2 visible:(_Bool)arg3 numItemsLackingTag:(unsigned long long)arg4;
+ (id)tagAttributes:(id)arg1 withLabel:(long long)arg2;
+ (long long)labelForTags:(id)arg1;
+ (long long)labelForTag:(id)arg1;
+ (long long)labelFromTagData:(id)arg1;
+ (id)attrsFromTags:(id)arg1;
+ (id)tagsFromNames:(id)arg1;
+ (id)tagsFromTagAttr:(id)arg1;
+ (id)tagInfoWithName:(id)arg1 tagNode:(const struct TFENode *)arg2 labelIndex:(short)arg3;
+ (void)setLabelColorForNewTag:(short)arg1;
+ (short)labelColorForNewTag;
+ (id)tagInfoWithName:(id)arg1 tagNode:(const struct TFENode *)arg2;
+ (id)tagInfoWithDiscoveredName:(id)arg1;
+ (id)tagInfoWithName:(id)arg1;
@property(nonatomic) unsigned long long numberOfItemsLackingThisTag; // @synthesize numberOfItemsLackingThisTag=_numberOfItemsLackingThisTag;
@property(nonatomic) long long labelColor; // @synthesize labelColor=_labelColor;
@property(readonly, nonatomic) _Bool pinnedInSidebar; // @synthesize pinnedInSidebar=_pinnedInSidebar;
@property(nonatomic) _Bool visibleInSidebar; // @synthesize visibleInSidebar=_visibleInSidebar;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)info;
- (const struct TFENode *)tagNode;
@property(readonly, nonatomic) long long sidebarIndex;
@property(readonly, nonatomic) _Bool isDiscovered; // @dynamic isDiscovered;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithName:(id)arg1 tagNode:(const struct TFENode *)arg2 label:(short)arg3 isVisible:(const struct TriStateBool *)arg4;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)syncFromTag:(id)arg1;
- (id)tagAttributes;

@end

