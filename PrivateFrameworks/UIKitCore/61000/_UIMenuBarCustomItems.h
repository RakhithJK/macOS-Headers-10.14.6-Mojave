//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UIMenuBarCustomItems : NSObject
{
    NSMutableDictionary *_customMenus;
    NSMutableDictionary *_customItems;
    NSMutableSet *_deletedItems;
}

+ (id)manager;
@property(retain, nonatomic) NSMutableSet *deletedItems; // @synthesize deletedItems=_deletedItems;
@property(retain, nonatomic) NSMutableDictionary *customItems; // @synthesize customItems=_customItems;
@property(retain, nonatomic) NSMutableDictionary *customMenus; // @synthesize customMenus=_customMenus;
- (void).cxx_destruct;
- (id)copyCustomObjectsInStandardMenu:(id)arg1 fromStorage:(id)arg2 filteringBy:(CDUnknownBlockType)arg3;
- (id)copyCustomItemsInStandardMenu:(id)arg1 afterStandardItem:(id)arg2;
- (id)copyCustomMenusAfterStandardMenu:(id)arg1;
- (void)insertCustomObject:(id)arg1 forStandardMenu:(id)arg2 inStorage:(id)arg3;
- (BOOL)shouldDeleteStandardItem:(id)arg1;
- (void)recordDeletedStandardItems:(id)arg1;
- (void)recordCustomItems:(id)arg1 inMenu:(id)arg2 afterStandardItem:(id)arg3;
- (void)recordCustomMenu:(id)arg1 afterStandardMenu:(id)arg2;
- (id)init;

@end

