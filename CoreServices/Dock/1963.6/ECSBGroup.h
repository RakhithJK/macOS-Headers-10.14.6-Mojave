//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ECEventHandlingDelegate-Protocol.h"
#import "ECKeyboardNavigating-Protocol.h"
#import "ECLayerSource-Protocol.h"
#import "ECLayerSourceClient-Protocol.h"
#import "ECSBGridDataSource-Protocol.h"
#import "ECSBGridPagerSource-Protocol.h"

@class ECSBGroupItem, ECSBGroupItemLayer, ECSBGroupLayer, ECSBGroupPager, ECSBPage, ECSBPager, NSMutableArray, NSString;

@interface ECSBGroup : NSObject <ECSBGridDataSource, ECLayerSource, ECLayerSourceClient, ECSBGridPagerSource, ECKeyboardNavigating, ECEventHandlingDelegate>
{
    ECSBPager *_pager;
    ECSBPage *_page;
    ECSBGroupItemLayer *_itemLayer;
    ECSBGroupLayer *_layer;
    ECSBGroupItem *_item;
    ECSBGroupPager *_groupPager;
    NSMutableArray *_overflowItems;
    float _scaleFactor;
    unsigned int _editing:1;
    unsigned int _deleting:1;
    unsigned int _isNewGroup:1;
    _Bool _layoutRTL;
    unsigned long long _maxItemsPerPage;
}

@property(nonatomic) _Bool layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(nonatomic) unsigned long long maxItemsPerPage; // @synthesize maxItemsPerPage=_maxItemsPerPage;
@property(retain, nonatomic) ECSBPage *page; // @synthesize page=_page;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) BOOL isNewGroup; // @synthesize isNewGroup=_isNewGroup;
@property(nonatomic) BOOL deleting; // @synthesize deleting=_deleting;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(retain, nonatomic) ECSBGroupPager *groupPager; // @synthesize groupPager=_groupPager;
@property(nonatomic) __weak ECSBGroupItemLayer *itemLayer; // @synthesize itemLayer=_itemLayer;
@property(readonly, nonatomic) ECSBPager *pager; // @synthesize pager=_pager;
@property(retain, nonatomic) ECSBGroupLayer *layer; // @synthesize layer=_layer;
@property(retain, nonatomic) ECSBGroupItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (BOOL)navigate:(long long)arg1 withEvent:(id)arg2;
- (BOOL)leftMouseUp:(id)arg1 in:(id)arg2;
- (BOOL)leftMouseDown:(id)arg1 in:(id)arg2;
- (void)invalidateGridCache;
- (id)gridValueForKey:(id)arg1 withInfo:(id)arg2;
- (id)gridValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3;
- (unsigned long long)numberOfGridItems;
- (void)replacePageItem:(id)arg1 withPageItem:(id)arg2;
- (void)removePage:(id)arg1 forPager:(id)arg2;
- (void)addPageForPager:(id)arg1;
- (void)layoutPage:(id)arg1 forPager:(id)arg2;
- (id)pageItemsForPager:(id)arg1;
- (id)makePageForPager:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPagesForPager:(id)arg1;
- (void)layerSourceInvalidated:(id)arg1;
- (void)setContentInLayers:(id)arg1 withDataRange:(struct _NSRange)arg2 forLayer:(id)arg3 usingScaleFactor:(float)arg4;
- (id)makeLayerForLayer:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)makeLayerForLayer:(id)arg1;
- (unsigned long long)numberOfItemsForLayer:(id)arg1;
- (void)reloadItemContents;
- (void)purgeItemContents;
- (void)cleanupPageIndices;
- (void)removeEmptyPages;
- (void)processOverflows;
- (void)cleanupOverflowFromPage:(id)arg1;
- (void)invalidate;
- (void)layout;
- (id)itemForClientItem:(id)arg1;
- (id)pageItemForPageClientItem:(id)arg1;
- (id)pageItemAtIndex:(unsigned long long)arg1;
- (void)removePageItem:(id)arg1;
- (void)movePageItem:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)insertPageItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addPageItem:(id)arg1;
- (void)_showEditLayer:(BOOL)arg1;
@property(readonly, nonatomic) BOOL canBeRemoved; // @dynamic canBeRemoved;
- (id)initWithPager:(id)arg1 forItemLayer:(id)arg2 withItem:(id)arg3 scaleFactor:(float)arg4 layoutRTL:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long selectedIndex;
@property(readonly) Class superclass;

@end

