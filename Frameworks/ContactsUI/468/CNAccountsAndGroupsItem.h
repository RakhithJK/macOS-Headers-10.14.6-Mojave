//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsItem : NSObject
{
    BOOL _selected;
    BOOL _bypassIfUnique;
    BOOL _soloSelect;
    NSString *_name;
    CDUnknownBlockType _nameProvider;
    NSString *_identifier;
    long long _containerType;
    NSArray *_childItems;
    CNAccountsAndGroupsItem *_parentItem;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) BOOL soloSelect; // @synthesize soloSelect=_soloSelect;
@property(nonatomic) BOOL bypassIfUnique; // @synthesize bypassIfUnique=_bypassIfUnique;
@property(nonatomic) __weak CNAccountsAndGroupsItem *parentItem; // @synthesize parentItem=_parentItem;
@property(retain, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
@property(nonatomic) long long containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) CDUnknownBlockType nameProvider; // @synthesize nameProvider=_nameProvider;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (long long)localizedCompare:(id)arg1;
- (id)arrayForDisplay:(BOOL)arg1;
- (void)_setSelected:(BOOL)arg1;
- (id)initWithType:(long long)arg1 nameProvider:(CDUnknownBlockType)arg2;

@end

