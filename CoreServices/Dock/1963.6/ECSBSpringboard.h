//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ECEventHandling-Protocol.h"
#import "ECKeyboardNavigating-Protocol.h"
#import "ECPagerSource-Protocol.h"
#import "ECSBDataSourceClient-Protocol.h"
#import "ECSBGridActionHandling-Protocol.h"
#import "ECSBGridPagerSource-Protocol.h"

@class ECSBEventHandler, ECSBLayer, ECSBPage, ECSBPager, ECSBSpringboardItem, ECTextInputLayer, ECTextLayer, NSArray, NSString;
@protocol ECSBDelegate><ECSBDataSource><ECSBActionHandling;

@interface ECSBSpringboard : NSObject <ECPagerSource, ECSBGridPagerSource, ECSBGridActionHandling, ECSBDataSourceClient, ECKeyboardNavigating, ECEventHandling>
{
    id <ECSBDelegate><ECSBDataSource><ECSBActionHandling> _handler;
    ECSBSpringboardItem *_item;
    unsigned long long _numberOfRowsPerPage;
    unsigned long long _numberOfColumnsPerPage;
    ECSBPager *_pager;
    ECSBEventHandler *_eventHandler;
    ECTextInputLayer *_textInputLayer;
    ECTextLayer *_labelEditLayer;
    NSString *_originalEditGroupTitle;
    float _scaleFactor;
    NSArray *_filteredItems;
    unsigned long long _filteredPageIndex;
    unsigned int _visible:1;
    unsigned int _editCancelled:1;
    unsigned int _optionKeyDown:1;
    unsigned int _filtering:1;
    _Bool _layoutRTL;
}

+ (const struct __CTFont *)itemFont;
+ (void)calculateIconSize:(unsigned long long *)arg1 miniIconSize:(unsigned long long *)arg2 forBounds:(struct CGRect)arg3 andScaleFactor:(float)arg4 usingLeftMargin:(double)arg5 rightMargin:(double)arg6 topMargin:(double)arg7 bottomMargin:(double)arg8 zoomStyle:(long long)arg9 zoomFactor:(double)arg10 withNumberOfRows:(unsigned long long)arg11 andColumns:(unsigned long long)arg12;
@property(nonatomic) _Bool layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(readonly, nonatomic) ECSBEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) ECSBPager *pager; // @synthesize pager=_pager;
@property(retain, nonatomic) id <ECSBDelegate><ECSBDataSource><ECSBActionHandling> handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (struct CGRect)globalBoundsOfIconForItem:(id)arg1;
- (void)confirmRemoveItem:(id)arg1;
- (void)replaceItem:(id)arg1 withItem:(id)arg2 refetchingContents:(BOOL)arg3;
- (void)removeItem:(id)arg1 animating:(BOOL)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ofParentItem:(id)arg3;
- (void)addItem:(id)arg1 toParentItem:(id)arg2;
- (void)_insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ofParentItem:(id)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2 ofItem:(id)arg3;
- (id)itemForClientItem:(id)arg1;
- (id)_groupItemForClientItem:(id)arg1 onPage:(id)arg2;
- (id)_pageItemForClientItem:(id)arg1;
- (BOOL)performDropAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (BOOL)canAcceptDropAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (void)hideGroup:(id)arg1 sender:(id)arg2;
- (void)showGroup:(id)arg1 sender:(id)arg2;
- (void)cancelGridActionWithEvent:(id)arg1 sender:(id)arg2;
- (void)performGridActionAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (void)didChangeToPageIndex:(unsigned long long)arg1;
- (void)willChangeToPageIndex:(unsigned long long)arg1;
- (void)replacePageItem:(id)arg1 withPageItem:(id)arg2;
- (id)removeEditLayerInsideLayer:(id)arg1 forPager:(id)arg2;
- (void)insertEditLayerInsideLayer:(id)arg1 ofLabelLayer:(id)arg2 withString:(id)arg3 forPager:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_textEditingComplete:(id)arg1;
- (void)removePage:(id)arg1 forPager:(id)arg2;
- (void)addPageForPager:(id)arg1;
- (void)layoutPage:(id)arg1 forPager:(id)arg2;
- (id)pageItemsForPager:(id)arg1;
- (id)makePageForPager:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_loadItemsForPageItem:(id)arg1;
- (void)_loadItemsForGroupItem:(id)arg1;
- (unsigned long long)numberOfPagesForPager:(id)arg1;
- (BOOL)navigate:(long long)arg1 withEvent:(id)arg2;
- (BOOL)flagsChanged:(id)arg1;
- (BOOL)keyUp:(id)arg1;
- (BOOL)keyDown:(id)arg1;
- (void)validateData;
- (_Bool)_validatePageItem:(id)arg1 clientPageItem:(id)arg2;
- (_Bool)_validateGroupItem:(id)arg1 clientGroupItem:(id)arg2;
- (id)pageItemForPageClientItem:(id)arg1;
- (id)pageItemAtIndex:(unsigned long long)arg1;
- (void)removePageItem:(id)arg1;
- (void)movePageItem:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)insertPageItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addPageItem:(id)arg1;
- (void)clearFilteredItems;
- (void)filterUsingItems:(id)arg1;
- (void)refreshDesktopLayers;
- (void)reloadItemContents:(BOOL)arg1;
- (void)purgeItemContents:(BOOL)arg1;
- (BOOL)handleTextInputKeyEvent:(id)arg1;
- (void)cancelDrag:(BOOL)arg1;
- (void)invalidate;
- (void)layout;
@property(readonly, nonatomic) ECTextInputLayer *activeTextInputLayer; // @dynamic activeTextInputLayer;
@property(nonatomic) id selectedItem; // @dynamic selectedItem;
- (void)setFiltering:(BOOL)arg1;
@property(readonly, nonatomic) BOOL filtering; // @dynamic filtering;
@property(nonatomic) long long pagerControlVisibility; // @dynamic pagerControlVisibility;
@property(nonatomic) BOOL supportsGroups; // @dynamic supportsGroups;
@property(nonatomic) double zoomFactor; // @dynamic zoomFactor;
@property(nonatomic) double bottomMargin; // @dynamic bottomMargin;
@property(nonatomic) double topMargin; // @dynamic topMargin;
@property(nonatomic) double rightMargin; // @dynamic rightMargin;
@property(nonatomic) double leftMargin; // @dynamic leftMargin;
@property(readonly, nonatomic) ECSBPage *currentPage; // @dynamic currentPage;
@property(nonatomic) unsigned long long currentPageIndex; // @dynamic currentPageIndex;
@property(readonly, nonatomic) BOOL dragging; // @dynamic dragging;
@property(nonatomic) BOOL groupShown; // @dynamic groupShown;
@property(nonatomic) BOOL deleting; // @dynamic deleting;
@property(nonatomic) BOOL editing; // @dynamic editing;
@property(readonly, nonatomic) ECSBLayer *layer; // @dynamic layer;
- (Class)pagerLayerClass;
- (id)initWithHandler:(id)arg1 numberOfRowsPerPage:(unsigned long long)arg2 numberOfColumnsPerPage:(unsigned long long)arg3 scaleFactor:(float)arg4 layoutRTL:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long selectedIndex;
@property(readonly) Class superclass;

@end

